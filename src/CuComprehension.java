import java.util.ArrayList;
import java.util.HashSet;
import java.util.List;


public class CuComprehension {
	String text = "";
	String cText = "";
	String defString="";
	String structString="";
	static String nextFunStringGlobal = "";
	static String structStringGlobal = "";

	String cmphName="NULL";
	HashSet<String> forVar=new HashSet<String>();

	
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
		for (String s : forVar){
			if (!c.forVar.contains(s))
				c.forVar.add(s);
		}
		//update vars to reserve org value
		//ArrayList<String> orgVarsE = e.getUse();
		//ArrayList<String> orgVarsC = c.getUse();
		//ArrayList<String> orgVars = getUse();
        //for (String var : orgVars){
                //changeNames(var, snapShotName+"C."+var);
        //}
		
        //struct for this cmph
        c.toC(new ArrayList<String>());
        structString += "typedef struct "+cmphName + "_struct {\n" +
        		"\tint nrefs; \n" +
        		"\tint isIter; \n" +
        		"\tint isStr; \n" +
        		"\tint isEC; \n"+
        		"\tint visited;\n" +
        		"\tvoid* eC;\n" +
        		"\tvoid* (*next)(void*);\n" ;
        
        for (String tempv : getUse()){
        	structString+="\tvoid* "+tempv+";\n";
		}
        structString+="}"+cmphName+"S;\n";
        		
		//definition / declaration
        defString +=c.defString;
		defString += cmphName+"S* " + cmphName + ";\n" 
				+ cmphName + " = ("+cmphName+"S*) x3malloc(sizeof("+cmphName+"S));\n"
				+ cmphName + "->nrefs = 1;\n"
				+ cmphName + "->isIter = 0;\n"
				+ cmphName + "->isStr = 0;\n"
				+ cmphName + "->isEC = 1;\n"
				+ cmphName + "->eC = "+c.cmphName + ";\n"
				+ cmphName + "->next = &"+cmphName + "F;\n" 
				+ cmphName + "->visited= 0;\n";
		for (String tempv : getUse()){
			if (!forVar.contains(tempv)){
				defString+=cmphName + "->"+tempv+"="+tempv+";\n";
				defString+=Helper.incrRefCount(tempv);
			}
		}
		
		CuComprehension.structStringGlobal += "void* " +cmphName+ "F(void*);\n";
		String nextFunString="";
		String argName = Helper.getVarName(), thisName = Helper.getVarName();
		nextFunString+= "void* " +cmphName+ "F(void* c_" + argName + ") {\n" +
				cmphName+"S* " + thisName + "= ("+cmphName+"S*) c_" + argName + ";\n"; 
		for (String tempv : getUse()){
				nextFunString+="void*"+tempv+"="+thisName+"->"+tempv+";\n";
		}
		if (!(c instanceof EmptyCmph)){
			for (String tempv : forVar){
				if (c.getUse().contains(tempv))
					nextFunString+="(("+c.cmphName+"S*)"+thisName+"->eC)->"+tempv+"="+thisName+"->"+tempv+";\n";
			}
		}
		if (c instanceof EmptyCmph){
			nextFunString+="if("+thisName+"->visited){ \n" +
					"\treturn NULL;\n" +
					"}else {\n"+
					"\t"+thisName+"->visited=1; \n";
		}else{
		nextFunString+="if("+thisName+"->visited){ \n" +
					"\treturn (("+c.cmphName+"S*)"+thisName+"->eC)->next("+thisName+"->eC);\n"+
					"}else {\n" +
						"\tif ("+thisName+"->eC!=NULL&&"+thisName+"->visited==0){"+
						"\t\t(("+c.cmphName+"S*)"+thisName+"->eC)->visited=0;}\n"+
						"\t\t"+thisName+"->visited=1; \n" ;
		}

		String funContent=e.toC(new ArrayList<String>());
		nextFunString +=e.construct() +
				"\treturn "+ funContent +";\n"+
				"\t}\n" +
				"}\n";
		
		cText=defString;
		CuComprehension.structStringGlobal+=structString;
		CuComprehension.nextFunStringGlobal += nextFunString;
		return cmphName;
	}
	
	public ArrayList<String> getUse(){
		ArrayList<String>use = new ArrayList<String>();
		for (String s : e.getUse()){
			if (!use.contains(s))
				use.add(s);
		}
		for (String s : c.getUse()){
			if (!use.contains(s))
				use.add(s);
		}
		
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
	

	@Override
	public String toC(ArrayList<String> localVars) {
		for (String s : forVar){
			if (!c.forVar.contains(s))
				c.forVar.add(s);
		}
		//update vars to reserve org value
		//ArrayList<String> orgVarsE = e.getUse();
		//ArrayList<String> orgVarsC = c.getUse();
		//ArrayList<String> orgVars = getUse();
        //for (String var : orgVars){
                //changeNames(var, snapShotName+"C."+var);
        //}
		
        //struct for this cmph
        c.toC(new ArrayList<String>());
        structString += "typedef struct "+cmphName + "_struct {\n" +
        		"\tint nrefs; \n" +
        		"\tint isIter; \n" +
        		"\tint isStr; \n" +
        		"\tint isEC; \n" +
        		"\tint visited;\n"+
        		"\tvoid* ifC;\n" +
        		"\tvoid* (*next)(void*);\n";
        
        for (String tempv : getUse()){
        	structString+="\tvoid* "+tempv+";\n";
		}
        structString+="}"+cmphName+"S;\n";
        		
		//definition / declaration
        defString +=c.defString;
		defString += cmphName+"S* " + cmphName + ";\n" 
				+ cmphName + " = ("+cmphName+"S*) x3malloc(sizeof("+cmphName+"S));\n"
				+ cmphName + "->nrefs = 1;\n"
				+ cmphName + "->isIter = 0;\n"
				+ cmphName + "->isStr = 0;\n" 
				+ cmphName + "->isEC =0;\n"
				+ cmphName + "->ifC = "+c.cmphName + ";\n"
				+ cmphName + "->next = &"+cmphName + "F;\n"
				+ cmphName + "->visited= 0;\n";
		for (String tempv : getUse()){
			if (!forVar.contains(tempv)){
				defString+=cmphName + "->"+tempv+"="+tempv+";\n";
				defString+=Helper.incrRefCount(tempv);
			}
		}

		CuComprehension.structStringGlobal += "void* " +cmphName+ "F(void*);\n";
		String nextFunString="";
		String argName = Helper.getVarName(), thisName = Helper.getVarName();
		nextFunString= "void* " +cmphName+ "F(void* c_"+argName+") {\n" +
				cmphName+"S* "+thisName+"= ("+cmphName+"S*) c_"+argName+";\n"; 
		for (String tempv : getUse()){
			nextFunString+="void* "+tempv+"="+thisName+"->"+tempv+";\n";
		}
		if (!(c instanceof EmptyCmph)){
			for (String tempv : forVar){
				if (c.getUse().contains(tempv))
					nextFunString+="(("+c.cmphName+"S*)"+thisName+"->ifC)->"+tempv+"="+thisName+"->"+tempv+";\n";
			}
		}
		
		String funContent=e.toC(new ArrayList<String>());
		if (!(c instanceof EmptyCmph)){
			nextFunString +=
					"if ("+thisName+"->ifC!=NULL&&"+thisName+"->visited==0){"+
				    	"\t(("+c.cmphName+"S*)"+thisName+"->ifC)->visited=0;}\n"+
					""+thisName+"->visited=1; \n" +
				    	
					e.construct() +
					"if( ((Boolean *)"+ funContent +")->value){\n" +
					"\treturn (("+c.cmphName+"S*)"+thisName+"->ifC)->next("+thisName+"->ifC);\n" +
					"} \n" +
					"else {\n" +
					"\treturn NULL;\n" +
					"}\n" +
					"}\n";
		}else{
			nextFunString +="\treturn NULL;\n" +
					"}\n";
		}

		cText=defString;
		CuComprehension.structStringGlobal+=structString;
		CuComprehension.nextFunStringGlobal+=nextFunString;
		return cmphName;
	}
	
	
	public ArrayList<String> getUse(){
		ArrayList<String>use = new ArrayList<String>();
		for (String s : e.getUse()){
			if (!use.contains(s))
				use.add(s);
		}
		for (String s : c.getUse()){
			if (!use.contains(s))
				use.add(s);
		}
		
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
	
	public String toC(ArrayList<String> localVars) {
		c.forVar.add(v.text);
		for (String s : forVar){
			if (!c.forVar.contains(s))
				c.forVar.add(s);
		}
		//update vars to reserve org value
		//ArrayList<String> orgVarsE = e.getUse();
		//ArrayList<String> orgVarsC = c.getUse();
		//ArrayList<String> orgVars = getUse();
        //for (String var : orgVars){
                //changeNames(var, snapShotName+"C."+var);
        //}
		
        //struct for this cmph
        c.toC(new ArrayList<String>());
        structString += "typedef struct "+cmphName + "_struct {\n" +
        		"\tint nrefs; \n" +
        		"\tint isIter; \n" +
        		"\tint isStr; \n" +
        		"\tint isEC; \n" +
        		"\tint visited;\n"+
        		"\tvoid* forC;\n" +
        		"\tIterable* iter;\n" +
        		"\tIterable* iterorg;\n" +
        		"\tvoid* (*next)(void*);\n";
        
        for (String tempv : getUse()){
        	structString+="\tvoid* "+tempv+";\n";
		}
    	structString+="\tvoid* "+v.text+";\n";
        structString+="}"+cmphName+"S;\n";
        		
		//definition / declaration
        defString +=c.defString;
        
        String eVarName=e.toC(new ArrayList<String>());
        defString +=e.construct();
        defString +="Iterable *" + eVarName + "Copy;\n" 
        	  +"\t\t" + eVarName + "Copy = (Iterable *)x3malloc(sizeof(Iterable));\n"
		      +"\t\t" + eVarName + "Copy->nrefs ="+ eVarName+"->nrefs;\n"
		      +"\t\t" + eVarName + "Copy->isIter = "+ eVarName+"->isIter;\n"
		      +"\t\t" + eVarName + "Copy->isStr = "+ eVarName+"->isStr;\n"
		      +"\t\t" + eVarName + "Copy->value = "+ eVarName+"->value;\n"
		      +"\t\t" + eVarName + "Copy->c = "+ eVarName+"->c;\n"
		      +"\t\t" + eVarName + "Copy->additional = "+ eVarName+"->additional;\n"
		      +"\t\t" + eVarName + "Copy->next = "+ eVarName+"->next;\n"
		      +"\t\t" + eVarName + "Copy->concat = "+ eVarName+"->concat;\n\t\t";
		//increase c's ref count
        defString += Helper.incrRefCount("(((Iterable*)" + eVarName + "Copy)->c)");
        		
		defString += cmphName+"S* " + cmphName + ";\n" 
				+ cmphName + " = ("+cmphName+"S*) x3malloc(sizeof("+cmphName+"S));\n"
				+ cmphName + "->nrefs = 1;\n"
				+ cmphName + "->isIter = 0;\n"
				+ cmphName + "->isStr = 0;\n"
				+ cmphName + "->isEC =0;\n"
				+ cmphName + "->forC = "+c.cmphName + ";\n"
		        + cmphName + "->iter = "+eVarName + "Copy;\n"
				 + cmphName + "->iterorg = "+eVarName + ";\n"
				+ cmphName + "->next = &"+cmphName + "F;\n"
				+ cmphName + "->visited= 0;\n";
		
		String copyIter= "Iterable *" + eVarName + "Copy;\n" 
				  +"\t\tthis->iter= (Iterable *)x3malloc(sizeof(Iterable));\n"
			      +"\t\tthis->iter->nrefs =this->iterorg->nrefs;\n"
			      +"\t\tthis->iter->isIter =this->iterorg->isIter;\n"
			      +"\t\tthis->iter->isStr =this->iterorg->isStr;\n"
			      +"\t\tthis->iter->value =this->iterorg->value;\n"
			      +"\t\tthis->iter->c =this->iterorg->c;\n"
			      +"\t\tthis->iter->additional =this->iterorg->additional;\n"
			      +"\t\tthis->iter->next =this->iterorg->next;\n"
			      +"\t\tthis->iter->concat =this->iterorg->concat;\n\t\t"
			      +"\t\t*((int*)this->iter->c+4)=0;\n"
			      +Helper.incrRefCount("this->iterorg->c");
		
		for (String tempv : getUse()){
			if (!forVar.contains(tempv)){
				defString+=cmphName + "->"+tempv+"="+tempv+";\n";
				defString+=Helper.incrRefCount(tempv);
			}
		}

		CuComprehension.structStringGlobal += "void* " +cmphName+ "F(void*);\n";
		String nextFunString="", thisName = Helper.getVarName(), argName = Helper.getVarName();
		nextFunString+= "void* " +cmphName+ "F(void* c_"+argName+") {\n" +
				cmphName+"S* "+thisName+"= ("+cmphName+"S*) c_"+argName+";\n"; 

		if (!(c instanceof EmptyCmph)){
			for (String tempv : getUse()){
				if (!forVar.contains(tempv))
					nextFunString+="void* "+tempv+"="+thisName+"->"+tempv+";\n";
			}
			for (String tempv : forVar){
				if (c.getUse().contains(tempv))
					nextFunString+="(("+c.cmphName+"S*)"+thisName+"->forC)->"+tempv+"="+thisName+"->"+tempv+";\n";
			}

			nextFunString+="if ("+thisName+"->forC!=NULL&&"+thisName+"->visited==0){"+
			    	"\t(("+c.cmphName+"S*)"+thisName+"->forC)->visited=0;}\n"+
					""+thisName+"->visited=1; \n" +
			    	"if ("+thisName+"->iter==NULL) {\n"+copyIter+"return NULL;}\n" +
					"if ("+thisName+"->iter->value==NULL) {" +//handle beginning
					""+thisName+"->iter=iterGetNext("+thisName+"->iter);}\n" +
					"if ("+thisName+"->iter==NULL||"+thisName+"->iter->value==NULL) {\n"+copyIter+" return NULL;}\n" +
					"void*"+v.text+"="+thisName+"->iter->value;\n" +
					"\t (("+c.cmphName+"S*)"+thisName+"->forC)->"+v.text+"="+v.text+";\n" +
					"void* ret=(("+c.cmphName+"S*)"+thisName+"->forC)->next("+thisName+"->forC);\n" +
					"if (ret==NULL){\n" +
						"\t(("+c.cmphName+"S*)"+thisName+"->forC)->visited=0;\n" +//end of loop, enable again
						"\t "+thisName+"->iter=iterGetNext("+thisName+"->iter);\n" +
						"if ("+thisName+"->iter==NULL) {return NULL;}\n" +
						"\t"+v.text+"="+thisName+"->iter->value;\n" +
						"\t (("+c.cmphName+"S*)"+thisName+"->forC)->"+v.text+"="+v.text+";\n"+
						"return (("+c.cmphName+"S*)"+thisName+"->forC)->next("+thisName+"->forC);\n" +
					"}\n" +
						
					"return ret;\n" +
					"}\n";
		}else{
			nextFunString+="return NULL;\n" +
					"}\n";
		}
		
		cText=defString;
		CuComprehension.structStringGlobal+=structString;
		CuComprehension.nextFunStringGlobal+=nextFunString;
		return cmphName;
		
	}
	
	public ArrayList<String> getUse(){
		ArrayList<String>use = new ArrayList<String>();
		for (String s : e.getUse()){
			if (!use.contains(s))
				use.add(s);
		}
		for (String s : c.getUse()){
			if (!use.contains(s))
				use.add(s);
		}
		use.remove(v.text);
		
		return use;
	}

	@Override
	public void changeNames(String actual, String replacement) {
		e.changeNames(actual, replacement);
		c.changeNames(actual, replacement);		
	}
}