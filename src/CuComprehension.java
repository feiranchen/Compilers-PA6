import java.util.ArrayList;
import java.util.List;


public class CuComprehension {
	String text = "";
	String cText = "";
	String defString="";
	static String cmphEarlyPrint="";

	String cmphName="NULL";
	String snapShotName="";



	public void add(CuComprehension c){}
	public String toC(ArrayList<String> localVars) {
		return cText;
	}
	@Override public String toString() {return text;}
	
	public void changeNames(String actual, String replacement) {}
	
	public ArrayList<String> getUse(){
		return new ArrayList<String>();
	}
	protected CuType calculateType(CuContext context) throws NoSuchTypeException { 
		return CuType.bottom;}
}

class EmptyCmph extends CuComprehension{
	@Override
	public boolean equals(Object that){
		if (that instanceof EmptyCmph)
			return true;
		else 
			return false;
	}
	
	public ArrayList<String> getUse(){
		return new ArrayList<String>();
	}
	
	@Override
	public void changeNames(String actual, String replacement) {}
}

class ExprLstCmph extends CuComprehension{
	CuExpr e=null;
	CuComprehension c=new EmptyCmph();

	public ExprLstCmph(CuExpr e){
		this.e=e;
		cmphName=Helper.getVarName();
		snapShotName=cmphName;
	}
	public void add(CuComprehension c){
		this.c=c;
	}
	
	@Override
	public boolean equals(Object that){
		if (that instanceof ExprLstCmph &&
				e.equals(((ExprLstCmph)that).e)&&
				c.equals(((ExprLstCmph)that).c))
			return true;
		else 
			return false;
	}
	
	@Override
	protected CuType calculateType(CuContext context) throws NoSuchTypeException {
		CuType reType = CuType.bottom;
		reType = CuType.commonParent(reType, e.calculateType(context));
		reType = CuType.commonParent(reType, c.calculateType(context));
		return reType;
	}
	
	
	@Override
	public String toC(ArrayList<String> localVars) {
		//update vars to reserve org value
		ArrayList<String> orgVarsE = e.getUse();
		ArrayList<String> orgVarsC = c.getUse();
		ArrayList<String> orgVars = getUse();
        for (String var : orgVars){
                changeNames(var, snapShotName+"C."+var);
        }
		
		//definition / declaration
        c.snapShotName=snapShotName;
        c.toC(new ArrayList<String>());
        defString +=c.defString;
		defString += "Cmph* " + cmphName + ";\n" 
				+ cmphName + " = (Cmph*) x3malloc(sizeof(Cmph));\n"
				+ cmphName + "->nrefs = 1;\n"
				+ cmphName + "->isIter = 0;\n"
				+ cmphName + "->isStr = 0;\n"
				+ cmphName + "->evalE = &" + snapShotName + "_ef;\n"
				+ cmphName + "->ifB = NULL;\n" 
				+ cmphName + "->forYield = NULL;\n" 
				+ cmphName + "->c = "+c.cmphName +" ;\n\n";
		
		String eSnapShotString="";
		if((cmphName.equals(snapShotName))&&(!orgVars.isEmpty())){
			//construct struct (snapshot) for use variables 
			eSnapShotString= "typedef struct " +snapShotName+ "_struct {\n"; 
			for (String tempv : orgVars){
				eSnapShotString+="\tvoid* "+tempv+";\n";
			}
			eSnapShotString+="}"+ snapShotName+"_c;\n";
			eSnapShotString+=snapShotName+"_c "+snapShotName+"C;\n";// =("+snapShotName+"*)x3malloc(sizeof("+snapShotName+"));\n";
			
			//inline snapshot at comprehension initiation
		
			for (String tempv : orgVars){
				defString+=snapShotName+"C."+tempv+"="+tempv+"; \n";
			}
		}
		//construct expression function and passing environment variables
		String eFunString= "void* "+cmphName +"_ef() {\n";
		for (String tempv : orgVars){
			eFunString+= "void*"+tempv+"="+snapShotName+"C."+tempv+"; \n";
		}
		String funContent=e.toC(new ArrayList<String>());
		eFunString +=e.construct() +
				"return "+ funContent +";\n"+
				"}\n";
		
		cText=defString;
		if (orgVars.isEmpty()){
			eSnapShotString="";
		}
		CuComprehension.cmphEarlyPrint+=eSnapShotString+eFunString;
		
		return cmphName;
	}
	
	public ArrayList<String> getUse(){
		ArrayList<String>use = new ArrayList<String>();
		use.addAll(e.getUse());
		use.addAll(c.getUse());
		
		return use;
	}
	@Override
	public void changeNames(String actual, String replacement) {
		e.changeNames(actual, replacement);
		c.changeNames(actual, replacement);		
	}
}

class IfCmph extends CuComprehension {
	CuExpr e;
	CuComprehension c = new EmptyCmph();
	
	public IfCmph(CuExpr e){
		this.e=e;
		cmphName=Helper.getVarName();
		snapShotName=cmphName;
	}
	public void add(CuComprehension c){
		this.c=c;
	}
	
	@Override
	public boolean equals(Object that){
		if (that instanceof IfCmph &&
				e.equals(((IfCmph)that).e)&&
				c.equals(((IfCmph)that).c))
			return true;
		else 
			return false;
	}
	@Override
	protected CuType calculateType(CuContext context) throws NoSuchTypeException {
		CuType eType = e.calculateType(context);
		if (!eType.equals(CuType.bool)) {
			throw new NoSuchTypeException(Helper.getLineInfo());
		}
		return c.calculateType(context);
	}
	
	public ArrayList<String> getUse(){
		ArrayList<String>use = new ArrayList<String>();
		use.addAll(e.getUse());
		use.addAll(c.getUse());
		
		return use;
	}

	@Override
	public void changeNames(String actual, String replacement) {
		e.changeNames(actual, replacement);
		c.changeNames(actual, replacement);		
	}
	
	
}

class ForCmph extends CuComprehension {
	CuVvc v;
	CuExpr e;
	CuComprehension c = new EmptyCmph();

	public ForCmph(CuVvc v, CuExpr e){
		this.v=v;
		this.e=e;

		cmphName=Helper.getVarName();
		snapShotName=cmphName;
	}

	public void add(CuComprehension c){
		this.c=c;
	}
	
	@Override
	public boolean equals(Object that){
		if (that instanceof ForCmph &&
				v.text.equals(((ForCmph)that).v.text)&&
				e.equals(((ForCmph)that).e)&&
				c.equals(((ForCmph)that).c))
			return true;
		else 
			return false;
	}
	
	@Override
	protected CuType calculateType(CuContext context) throws NoSuchTypeException {
		CuType eType = e.calculateType(context);
 		Boolean flag = eType.isIterable();
    	if (flag != true) {
    		throw new NoSuchTypeException(Helper.getLineInfo()); 
    	}
    	//eType.type = Helper.getTypeForIterable(eType.toString());
    	//var can't appear immutable variables
    	if (context.inVar(this.v.toString())) {
    		throw new NoSuchTypeException(Helper.getLineInfo()); 
    	}
    	//System.out.println("etype is " + eType.toString());
    	CuType iter_type = eType.type;
    	//System.out.println("variable type is " + iter_type.id);
    	CuContext s_context = new CuContext(context);
    	s_context.updateType(this.v.toString(), iter_type);
    	return c.calculateType(s_context);
	}
	
	
	
	public ArrayList<String> getUse(){
		ArrayList<String>use = new ArrayList<String>();
		use.addAll(e.getUse());
		use.addAll(c.getUse());
		
		return use;
	}

	@Override
	public void changeNames(String actual, String replacement) {
		e.changeNames(actual, replacement);
		c.changeNames(actual, replacement);		
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
