import java.util.ArrayList;
import java.util.List;


public class CuComprehension {

	protected String text = "";
	protected String cText = "";

	public void add(CuComprehension c){}
	public String toC(ArrayList<String> localVars) {
		return cText;
	}
	@Override public String toString() {return text;}
}

class EmptyCmph extends CuComprehension{
	
}
class ExprLstCmph extends CuComprehension{
	List<CuExpr> lst=new ArrayList<CuExpr>();
	CuComprehension c=new EmptyCmph();
	public ExprLstCmph(List<CuExpr> es){
		lst=es;
	}
	public void add(CuComprehension c){
		this.c=c;
	}
}

class IfCmph extends CuComprehension {
	CuExpr e;
	CuComprehension c;
	public IfCmph(CuExpr e, CuComprehension c){
		this.e=e;
		this.c=c;
	}
}

class ForCmph extends CuComprehension {
	CuVvc v;
	CuExpr e;
	CuComprehension c;

	public ForCmph(CuVvc v, CuExpr e, CuComprehension c){
		this.v=v;
		this.e=e;
		this.c=c;
	}
}


class BrkExprFAKE extends CuExpr {
	public List<CuExpr> val;
	public BrkExprFAKE(List<CuExpr> es){
		this.val = es;
		for (CuExpr e : es){
			//containsVar.addAll(e.containsVar);
		}
		super.boxed = true;
		super.expType = "Iterable";
	}	
	
	@Override
	public boolean equals(Object that){
		if (that instanceof BrkExpr &&
				val.equals(((BrkExpr)that).val))
			return true;
		else 
			return false;
	}
	
	@Override
	public String toString() {
		super.text=Helper.printList("[", val, "]", ",");
		return super.text;
	}
	@Override protected CuType calculateType(CuContext context) {
		//System.out.println("in bracket expression, start");
		if (val == null || val.isEmpty()) return new Iter(CuType.bottom);
		CuType t = val.get(0).getType(context);
		//System.out.println("type id is " + t.id);
		for (int i = 0; i+1 < val.size(); i++) {
			t = CuType.commonParent(val.get(i).getType(context), val.get(i+1).getType(context));
		} // find the common parent type of all expressions here
		
		//System.out.println("in bracket expression end");
		
		return new Iter(t);
	}
	
	@Override
	public Pair<List<CuStat>, CuExpr> toHIR() {
		List<CuStat> stats = new ArrayList<CuStat>();
		Pair<List<CuStat>, CuExpr> expToHir = new Pair<List<CuStat>, CuExpr>();
		List<CuExpr> expressions = new ArrayList<CuExpr>();
		
		for(CuExpr exp : val){
			expToHir = exp.toHIR();
			stats.addAll(expToHir.getFirst());
			
			String name1 = Helper.getVarName();
			CuVvc temp1 = new Vv(name1);
			CuStat a = new AssignStat(temp1, expToHir.getSecond());
			stats.add(a);
			
			//assume getSecond already has boxed and expType fields set, should be correct but not 100% sure
			a.setUnboxType();
			
			CuExpr var1 = new VvExp(name1);
			//var1 should be consistent with temp/name1, if that is unboxed, this VvExp is also unboxed
			var1.boxed = a.boxed;
			var1.expType = a.statType;
			
			expressions.add(var1);
			
			use.add(var1.toString());	
			
		}
		
		CuExpr expr = new BrkExpr(expressions);
		expr.use = use;
		
		Pair<List<CuStat>, CuExpr> temp = new Pair<List<CuStat>, CuExpr>(stats, expr);
		
		return temp;
	}
	
	@Override
	public String toC(ArrayList<String> localVars) {
		String eToC = "", typeCast = "";
		
		ArrayList<String> tempNameArr=new ArrayList<String>();	
		ArrayList<String> tempDataArr=new ArrayList<String>();
		for (CuExpr e : val) {
			eToC = e.toC(localVars);
			String eC = e.construct();
			name += eC;
			
			/*if (!e.getDef().isEmpty())
				def.addAll(e.getDef());
			if (!e.getUse().isEmpty())
				use.addAll(e.getUse());
*/			
			String eCastType = e.getCastType();
			if (eCastType.equals(""))
				eCastType = Helper.cVarType.get(e.toString());
			
			if(iterType == null)
				iterType = "";
			
			if(iterType.equals("")) 
				iterType = eCastType;
			else if (!iterType.equals(eCastType))
				iterType = "Thing";
			
			
			tempNameArr.add(Helper.getVarName());
			tempDataArr.add(eToC);
			typeCast = e.getCastType();
			if(typeCast == null) 
				typeCast = Helper.cVarType.get(eToC);
		}
		tempNameArr.add("NULL");

		int i;
		for (i= val.size() - 1; i >= 0; i--) {
			name += "Iterable* " + tempNameArr.get(i) + ";\n" 
					+ tempNameArr.get(i) + " = (Iterable*) x3malloc(sizeof(Iterable));\n"
					+ tempNameArr.get(i) + "->isIter = 1;\n"
					+ tempNameArr.get(i) + "->nrefs = 1;\n" 
					+ tempNameArr.get(i) + "->value = " + tempDataArr.get(i) + ";\n"
					+ tempNameArr.get(i) + "->additional = " + tempNameArr.get(i + 1) + ";\n" 
					+ tempNameArr.get(i) + "->next = NULL;\n" 
					+ tempNameArr.get(i)+ "->concat = NULL;\n";
			
			if (!tempDataArr.isEmpty())
				name += Helper.incrRefCount(tempDataArr.get(i));
			
			//def.add(tempNameArr.get(i+1));
		}	
			
		if (!tempDataArr.isEmpty())
			name += tempNameArr.get(0) + "->nrefs = 0;\n";
		//def.add(tempNameArr.get(0));
		
		cText = tempNameArr.get(0);
		
		if(val.size() == 0) 
			iterType = "Empty";
		
		super.castType = "Iterable";
		return super.toC(localVars);
	}
	
	@Override
	public String toC_opt() {
		String eToC = "", typeCast = "";
		
		ArrayList<String> tempNameArr=new ArrayList<String>();	
		ArrayList<String> tempDataArr=new ArrayList<String>();
		for (CuExpr e : val) {
			eToC = e.toC_opt();
			String eC = e.construct();
			name += eC;
						
			String eCastType = e.getCastType();
			if (eCastType.equals(""))
				eCastType = Helper.cVarType.get(e.toString());
			
			if(iterType == null)
				iterType = "";
			
			if(iterType.equals("")) 
				iterType = eCastType;
			else if (!iterType.equals(eCastType))
				iterType = "Thing";
			
			
			tempNameArr.add(Helper.getVarName());
			tempDataArr.add(eToC);
			typeCast = e.getCastType();
			if(typeCast == null) 
				typeCast = Helper.cVarType.get(eToC);
		}
		tempNameArr.add("NULL");

		int i;
		for (i= val.size() - 1; i >= 0; i--) {
			String boxedValue = tempDataArr.get(i);
			if (!val.get(i).expBoxed()) {
				String reName = Helper.getVarName();
				name += Helper.box(tempDataArr.get(i), val.get(i).expType, reName);
				boxedValue = reName;
			}
			name += "Iterable* " + tempNameArr.get(i) + ";\n" 
					+ tempNameArr.get(i) + " = (Iterable*) x3malloc(sizeof(Iterable));\n"
					+ tempNameArr.get(i) + "->isIter = 1;\n"
					+ tempNameArr.get(i) + "->nrefs = 0;\n" 
					+ tempNameArr.get(i) + "->value = " + boxedValue + ";\n"
					+ tempNameArr.get(i) + "->additional = " + tempNameArr.get(i + 1) + ";\n" 
					+ tempNameArr.get(i) + "->next = NULL;\n" 
					+ tempNameArr.get(i)+ "->concat = NULL;\n";
			
			name += Helper.incrRefCount(boxedValue);
			//if (!tempNameArr.get(i+1).equals("NULL") && !tempDataArr.isEmpty())
			//	name += Helper.incrRefCount(tempDataArr.get(i+1));
			
			//def.add(tempNameArr.get(i+1));
		}	
			
		//if (!tempDataArr.isEmpty())
		//	name += Helper.incrRefCount(tempDataArr.get(0));
		
		cText = tempNameArr.get(0);
		
		if(val.size() == 0) 
			iterType = "Empty";
		
		super.castType = "Iterable";
		return super.toC_opt();
	}
	
	@Override public ArrayList<String> getUse(){
		use = new ArrayList<String>();
		for (CuExpr ce : val) {
			if (ce.isVariableExpression())
				use.add(ce.getVal());
		}
		return use;
	}

}
