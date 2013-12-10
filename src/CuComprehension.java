import java.util.ArrayList;
import java.util.HashSet;
import java.util.List;


public class CuComprehension {
	String text = "";
	String cText = "";
	String defString="";
	String structString="";
	static String cmphEarlyPrint="";

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
        		"\tvoid* eC;\n" +
        		"\tvoid* (*next)(void*);\n";
        
        for (String tempv : getUse()){
        	structString+="\tvoid* "+tempv+";\n";
		}
        structString+="}"+cmphName+"S;\n";
        		
		//definition / declaration
        defString +=c.defString;
        String nextC;
		defString += cmphName+"S* " + cmphName + ";\n" 
				+ cmphName + " = ("+cmphName+"S*) x3malloc(sizeof("+cmphName+"S));\n"
				+ cmphName + "->nrefs = 1;\n"
				+ cmphName + "->isIter = 0;\n"
				+ cmphName + "->isStr = 0;\n"
				+ cmphName + "->eC = "+c.cmphName + ";\n"
				+ cmphName + "->next = &"+cmphName + "F;\n";
		for (String tempv : getUse()){
			if (!forVar.contains(tempv)){
				defString+=cmphName + "->"+tempv+"="+tempv+";\n";
				defString+=Helper.incrRefCount(tempv);
			}
		}
		
		String nextFunString="";
		nextFunString= "void* " +cmphName+ "F(void* c) {\n" +
				cmphName+"S* this= ("+cmphName+"S*) c;\n"; 
		for (String tempv : getUse()){
				nextFunString+="void*"+tempv+"=this->"+tempv+";\n";
		}
		
		
		String funContent=e.toC(new ArrayList<String>());
		nextFunString +=e.construct() +
				"return "+ funContent +";\n"+
				"}\n";
		
		cText=defString;
		CuComprehension.cmphEarlyPrint+=structString+nextFunString;
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
				+ cmphName + "->ifC = "+c.cmphName + ";\n"
				+ cmphName + "->next = &"+cmphName + "F;\n";
		for (String tempv : getUse()){
			if (!forVar.contains(tempv)){
				defString+=cmphName + "->"+tempv+"="+tempv+";\n";
				defString+=Helper.incrRefCount(tempv);
			}
		}

		String nextFunString="";
		nextFunString= "void* " +cmphName+ "F(void* c) {\n" +
				cmphName+"S* this= ("+cmphName+"S*) c;\n"; 
		for (String tempv : getUse()){
			nextFunString+="void* "+tempv+"=this->"+tempv+";\n";
		}
		String funContent=e.toC(new ArrayList<String>());
		nextFunString +=e.construct() +
				"if( "+ funContent +"){\n" +
				"\treturn (("+c.cmphName+"S*)this->ifC)->next(this->ifC);\n"+
				"}\n" +
				"else {\n" +
				"\treturn NULL;\n" +
				"}\n" +
				"}\n";

		cText=defString;
		CuComprehension.cmphEarlyPrint+=structString+nextFunString;
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
        		"\tvoid* forC;\n" +
        		"\tIterable* iter;\n" +
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
        
        String nextC;
		defString += cmphName+"S* " + cmphName + ";\n" 
				+ cmphName + " = ("+cmphName+"S*) x3malloc(sizeof("+cmphName+"S));\n"
				+ cmphName + "->nrefs = 1;\n"
				+ cmphName + "->isIter = 0;\n"
				+ cmphName + "->isStr = 0;\n"
				+ cmphName + "->forC = "+c.cmphName + ";\n"
		        + cmphName + "->iter = "+eVarName + ";\n"
				+ cmphName + "->next = &"+cmphName + "F;\n";
		for (String tempv : getUse()){
			if (!forVar.contains(tempv)){
				defString+=cmphName + "->"+tempv+"="+tempv+";\n";
				defString+=Helper.incrRefCount(tempv);
			}
		}

		String nextFunString="";
		nextFunString+= "void* " +cmphName+ "F(void* c) {\n" +
				cmphName+"S* this= ("+cmphName+"S*) c;\n"; 

		if (!(c instanceof EmptyCmph)){
			for (String tempv : getUse()){
				if (!forVar.contains(tempv))
					nextFunString+="void* "+tempv+"=this->"+tempv+";\n";
			}
			nextFunString+="if (this->iter->value==NULL) return NULL;\n" +
					"void*"+v.text+"=this->iter->value;\n" +
					"\t (("+c.cmphName+"S*)this->forC)->"+v.text+"="+v.text+";\n" +
					"void* ret=(("+c.cmphName+"S*)this->forC)->next(this->forC);\n" +
					"if (ret==NULL){\n" +
						"\t this->iter=this->iter->next(this->iter);\n" +
						v.text+"=this->iter->value;\n" +
						"\t (("+c.cmphName+"S*)this->forC)->"+v.text+"="+v.text+";\n" +
						"return (("+c.cmphName+"S*)this->forC)->next(this->forC);\n" +
					"}\n" +
						
					"return ret;\n" +
					"}\n";
		}else{
			nextFunString+="return NULL;\n" +
					"}\n";
		}
		
		cText=defString;
		CuComprehension.cmphEarlyPrint+=structString+nextFunString;
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