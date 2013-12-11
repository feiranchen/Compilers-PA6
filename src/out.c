#include<stdio.h>
#include "cubex_main.h"
#include "cubex_external_functions.h"
#include "cubex_lib.h"

Iterable* input= NULL;
void* aaaaagF(void*);
typedef struct aaaaag_struct {
	int nrefs; 
	int isIter; 
	int isStr; 
	int isEC; 
	int visited;
	void* eC;
	void* (*next)(void*);
}aaaaagS;
void* aaaaaeF(void*);
typedef struct aaaaae_struct {
	int nrefs; 
	int isIter; 
	int isStr; 
	int isEC; 
	int visited;
	void* eC;
	void* (*next)(void*);
}aaaaaeS;
void* aaaaadF(void*);
typedef struct aaaaad_struct {
	int nrefs; 
	int isIter; 
	int isStr; 
	int isEC; 
	int visited;
	void* eC;
	void* (*next)(void*);
}aaaaadS;
Iterable* aaaaadIterNext(void*);
void* aaaaafF(void*);
typedef struct aaaaaf_struct {
	int nrefs; 
	int isIter; 
	int isStr; 
	int isEC; 
	int visited;
	void* forC;
	Iterable* iter;
	Iterable* iterorg;
	void* (*next)(void*);
	void* m;
}aaaaafS;
void* aaaaabF(void*);
typedef struct aaaaab_struct {
	int nrefs; 
	int isIter; 
	int isStr; 
	int isEC; 
	int visited;
	void* eC;
	void* (*next)(void*);
}aaaaabS;
void* aaaaaaF(void*);
typedef struct aaaaaa_struct {
	int nrefs; 
	int isIter; 
	int isStr; 
	int isEC; 
	int visited;
	void* eC;
	void* (*next)(void*);
}aaaaaaS;
Iterable* aaaaaaIterNext(void*);
void* aaaaacF(void*);
typedef struct aaaaac_struct {
	int nrefs; 
	int isIter; 
	int isStr; 
	int isEC; 
	int visited;
	void* forC;
	Iterable* iter;
	Iterable* iterorg;
	void* (*next)(void*);
	void* v;
}aaaaacS;
Iterable* aaaaacIterNext(void*);


void* aaaaagF(void* c_aaaaak) {
aaaaagS* this_aaaaal= (aaaaagS*) c_aaaaak;
if(this_aaaaal->visited){ 
	return NULL;
}else {
	this_aaaaal->visited=1; 
String* aaaaam;
aaaaam = (String *) x3malloc(sizeof(String));
(aaaaam->isIter) = 0;
aaaaam->value = (char*) x3malloc(sizeof("lala"));
(aaaaam->nrefs) = 0;
(aaaaam->isStr) = 1;
aaaaam->len = sizeof("lala") - 1;
mystrcpy(aaaaam->value, "lala");
	return aaaaam;
	}
}
void* aaaaaeF(void* c_aaaaao) {
aaaaaeS* this_aaaaap= (aaaaaeS*) c_aaaaao;
if(this_aaaaap->visited){ 
	return NULL;
}else {
	this_aaaaap->visited=1; 
String* aaaaaq;
aaaaaq = (String *) x3malloc(sizeof(String));
(aaaaaq->isIter) = 0;
aaaaaq->value = (char*) x3malloc(sizeof("bb"));
(aaaaaq->nrefs) = 0;
(aaaaaq->isStr) = 1;
aaaaaq->len = sizeof("bb") - 1;
mystrcpy(aaaaaq->value, "bb");
	return aaaaaq;
	}
}
void* aaaaadF(void* c_aaaaar) {
aaaaadS* this_aaaaas= (aaaaadS*) c_aaaaar;
if(this_aaaaas->visited){ 
	return ((aaaaaeS*)this_aaaaas->eC)->next(this_aaaaas->eC);
}else {
	if (this_aaaaas->eC!=NULL&&this_aaaaas->visited==0){		((aaaaaeS*)this_aaaaas->eC)->visited=0;}
		this_aaaaas->visited=1; 
String* aaaaat;
aaaaat = (String *) x3malloc(sizeof(String));
(aaaaat->isIter) = 0;
aaaaat->value = (char*) x3malloc(sizeof("aa"));
(aaaaat->nrefs) = 0;
(aaaaat->isStr) = 1;
aaaaat->len = sizeof("aa") - 1;
mystrcpy(aaaaat->value, "aa");
	return aaaaat;
	}
}
Iterable* aaaaadIterNext(void* aaaaav){ 
Iterable* this=(Iterable*)aaaaav;
if (((aaaaadS*)this->c) != NULL) {
	void* aaaaau = this->value;
	this->value=((aaaaadS*)this->c)->next(this->c);
	incRef(this->value);
	decRef(aaaaau);
	if(this->value)
		return this;
	else
		return NULL;
}
else
	return NULL;
}
void* aaaaafF(void* c_aaaaax) {
aaaaafS* this_aaaaaw= (aaaaafS*) c_aaaaax;
if (this_aaaaaw->forC!=NULL&&this_aaaaaw->visited==0){	((aaaaagS*)this_aaaaaw->forC)->visited=0;}
this_aaaaaw->visited=1; 
if (this_aaaaaw->iter==NULL) {
		this_aaaaaw->iter= (Iterable *)x3malloc(sizeof(Iterable));
		this_aaaaaw->iter->nrefs =this_aaaaaw->iterorg->nrefs;
		this_aaaaaw->iter->isIter =this_aaaaaw->iterorg->isIter;
		this_aaaaaw->iter->isStr =this_aaaaaw->iterorg->isStr;
		this_aaaaaw->iter->value =this_aaaaaw->iterorg->value;
		this_aaaaaw->iter->c =this_aaaaaw->iterorg->c;
		this_aaaaaw->iter->additional =this_aaaaaw->iterorg->additional;
		this_aaaaaw->iter->next =this_aaaaaw->iterorg->next;
		this_aaaaaw->iter->concat =this_aaaaaw->iterorg->concat;
				*((int*)this_aaaaaw->iter->c+4)=0;
incRef(this_aaaaaw->iterorg->c);
return NULL;}
if (this_aaaaaw->iter->value==NULL) {this_aaaaaw->iter=iterGetNext(this_aaaaaw->iter);}
if (this_aaaaaw->iter==NULL||this_aaaaaw->iter->value==NULL) {
		this_aaaaaw->iter= (Iterable *)x3malloc(sizeof(Iterable));
		this_aaaaaw->iter->nrefs =this_aaaaaw->iterorg->nrefs;
		this_aaaaaw->iter->isIter =this_aaaaaw->iterorg->isIter;
		this_aaaaaw->iter->isStr =this_aaaaaw->iterorg->isStr;
		this_aaaaaw->iter->value =this_aaaaaw->iterorg->value;
		this_aaaaaw->iter->c =this_aaaaaw->iterorg->c;
		this_aaaaaw->iter->additional =this_aaaaaw->iterorg->additional;
		this_aaaaaw->iter->next =this_aaaaaw->iterorg->next;
		this_aaaaaw->iter->concat =this_aaaaaw->iterorg->concat;
				*((int*)this_aaaaaw->iter->c+4)=0;
incRef(this_aaaaaw->iterorg->c);
 return NULL;}
void* ret=((aaaaagS*)this_aaaaaw->forC)->next(this_aaaaaw->forC);
if (ret==NULL){
	((aaaaagS*)this_aaaaaw->forC)->visited=0;
	 this_aaaaaw->iter=iterGetNext(this_aaaaaw->iter);
if (this_aaaaaw->iter==NULL) {return NULL;}
return ((aaaaagS*)this_aaaaaw->forC)->next(this_aaaaaw->forC);
}
return ret;
}
void* aaaaabF(void* c_aaaaaz) {
aaaaabS* this_aaaaba= (aaaaabS*) c_aaaaaz;
if(this_aaaaba->visited){ 
	return NULL;
}else {
	this_aaaaba->visited=1; 
String* aaaabb;
aaaabb = (String *) x3malloc(sizeof(String));
(aaaabb->isIter) = 0;
aaaabb->value = (char*) x3malloc(sizeof("y"));
(aaaabb->nrefs) = 0;
(aaaabb->isStr) = 1;
aaaabb->len = sizeof("y") - 1;
mystrcpy(aaaabb->value, "y");
	return aaaabb;
	}
}
void* aaaaaaF(void* c_aaaabc) {
aaaaaaS* this_aaaabd= (aaaaaaS*) c_aaaabc;
if(this_aaaabd->visited){ 
	return ((aaaaabS*)this_aaaabd->eC)->next(this_aaaabd->eC);
}else {
	if (this_aaaabd->eC!=NULL&&this_aaaabd->visited==0){		((aaaaabS*)this_aaaabd->eC)->visited=0;}
		this_aaaabd->visited=1; 
String* aaaabe;
aaaabe = (String *) x3malloc(sizeof(String));
(aaaabe->isIter) = 0;
aaaabe->value = (char*) x3malloc(sizeof("x"));
(aaaabe->nrefs) = 0;
(aaaabe->isStr) = 1;
aaaabe->len = sizeof("x") - 1;
mystrcpy(aaaabe->value, "x");
	return aaaabe;
	}
}
Iterable* aaaaaaIterNext(void* aaaabg){ 
Iterable* this=(Iterable*)aaaabg;
if (((aaaaaaS*)this->c) != NULL) {
	void* aaaabf = this->value;
	this->value=((aaaaaaS*)this->c)->next(this->c);
	incRef(this->value);
	decRef(aaaabf);
	if(this->value)
		return this;
	else
		return NULL;
}
else
	return NULL;
}
void* aaaaacF(void* c_aaaabi) {
aaaaacS* this_aaaabh= (aaaaacS*) c_aaaabi;
if (this_aaaabh->forC!=NULL&&this_aaaabh->visited==0){	((aaaaafS*)this_aaaabh->forC)->visited=0;}
this_aaaabh->visited=1; 
if (this_aaaabh->iter==NULL) {
		this_aaaabh->iter= (Iterable *)x3malloc(sizeof(Iterable));
		this_aaaabh->iter->nrefs =this_aaaabh->iterorg->nrefs;
		this_aaaabh->iter->isIter =this_aaaabh->iterorg->isIter;
		this_aaaabh->iter->isStr =this_aaaabh->iterorg->isStr;
		this_aaaabh->iter->value =this_aaaabh->iterorg->value;
		this_aaaabh->iter->c =this_aaaabh->iterorg->c;
		this_aaaabh->iter->additional =this_aaaabh->iterorg->additional;
		this_aaaabh->iter->next =this_aaaabh->iterorg->next;
		this_aaaabh->iter->concat =this_aaaabh->iterorg->concat;
				*((int*)this_aaaabh->iter->c+4)=0;
incRef(this_aaaabh->iterorg->c);
return NULL;}
if (this_aaaabh->iter->value==NULL) {this_aaaabh->iter=iterGetNext(this_aaaabh->iter);}
if (this_aaaabh->iter==NULL||this_aaaabh->iter->value==NULL) {
		this_aaaabh->iter= (Iterable *)x3malloc(sizeof(Iterable));
		this_aaaabh->iter->nrefs =this_aaaabh->iterorg->nrefs;
		this_aaaabh->iter->isIter =this_aaaabh->iterorg->isIter;
		this_aaaabh->iter->isStr =this_aaaabh->iterorg->isStr;
		this_aaaabh->iter->value =this_aaaabh->iterorg->value;
		this_aaaabh->iter->c =this_aaaabh->iterorg->c;
		this_aaaabh->iter->additional =this_aaaabh->iterorg->additional;
		this_aaaabh->iter->next =this_aaaabh->iterorg->next;
		this_aaaabh->iter->concat =this_aaaabh->iterorg->concat;
				*((int*)this_aaaabh->iter->c+4)=0;
incRef(this_aaaabh->iterorg->c);
 return NULL;}
void* ret=((aaaaafS*)this_aaaabh->forC)->next(this_aaaabh->forC);
if (ret==NULL){
	((aaaaafS*)this_aaaabh->forC)->visited=0;
	 this_aaaabh->iter=iterGetNext(this_aaaabh->iter);
if (this_aaaabh->iter==NULL) {return NULL;}
return ((aaaaafS*)this_aaaabh->forC)->next(this_aaaabh->forC);
}
return ret;
}
Iterable* aaaaacIterNext(void* aaaabk){ 
Iterable* this=(Iterable*)aaaabk;
if (((aaaaacS*)this->c) != NULL) {
	void* aaaabj = this->value;
	this->value=((aaaaacS*)this->c)->next(this->c);
	incRef(this->value);
	decRef(aaaabj);
	if(this->value)
		return this;
	else
		return NULL;
}
else
	return NULL;
}

void* our_main()
{
void * d = NULL;






aaaaagS* aaaaag;
aaaaag = (aaaaagS*) x3malloc(sizeof(aaaaagS));
aaaaag->nrefs = 1;
aaaaag->isIter = 0;
aaaaag->isStr = 0;
aaaaag->isEC = 1;
aaaaag->eC = NULL;
aaaaag->next = &aaaaagF;
aaaaag->visited= 0;
aaaaaeS* aaaaae;
aaaaae = (aaaaaeS*) x3malloc(sizeof(aaaaaeS));
aaaaae->nrefs = 1;
aaaaae->isIter = 0;
aaaaae->isStr = 0;
aaaaae->isEC = 1;
aaaaae->eC = NULL;
aaaaae->next = &aaaaaeF;
aaaaae->visited= 0;
aaaaadS* aaaaad;
aaaaad = (aaaaadS*) x3malloc(sizeof(aaaaadS));
aaaaad->nrefs = 1;
aaaaad->isIter = 0;
aaaaad->isStr = 0;
aaaaad->isEC = 1;
aaaaad->eC = aaaaae;
aaaaad->next = &aaaaadF;
aaaaad->visited= 0;
Iterable* aaaaan;
aaaaan = (Iterable*) x3malloc(sizeof(Iterable));
aaaaan->isIter = 1;
aaaaan->nrefs = 0;
aaaaan->value = NULL;
aaaaan->c = aaaaad;
aaaaan->additional = NULL;
aaaaan->next = &aaaaadIterNext;
aaaaan->concat = NULL;

Iterable *aaaaanCopy;
		aaaaanCopy = (Iterable *)x3malloc(sizeof(Iterable));
		aaaaanCopy->nrefs = ((Iterable *)aaaaan)->nrefs;
		aaaaanCopy->isIter = ((Iterable *)aaaaan)->isIter;
		aaaaanCopy->isStr = ((Iterable *)aaaaan)->isStr;
		aaaaanCopy->value = ((Iterable *)aaaaan)->value;
		aaaaanCopy->c = ((Iterable *)aaaaan)->c;
		aaaaanCopy->additional = ((Iterable *)aaaaan)->additional;
		aaaaanCopy->next = ((Iterable *)aaaaan)->next;
		aaaaanCopy->concat = ((Iterable *)aaaaan)->concat;
		incRef((((Iterable*)aaaaanCopy)->c));
aaaaafS* aaaaaf;
aaaaaf = (aaaaafS*) x3malloc(sizeof(aaaaafS));
aaaaaf->nrefs = 1;
aaaaaf->isIter = 0;
aaaaaf->isStr = 0;
aaaaaf->isEC =0;
aaaaaf->forC = aaaaag;
aaaaaf->iter = aaaaanCopy;
aaaaaf->iterorg = aaaaan;
aaaaaf->next = &aaaaafF;
aaaaaf->visited= 0;
aaaaabS* aaaaab;
aaaaab = (aaaaabS*) x3malloc(sizeof(aaaaabS));
aaaaab->nrefs = 1;
aaaaab->isIter = 0;
aaaaab->isStr = 0;
aaaaab->isEC = 1;
aaaaab->eC = NULL;
aaaaab->next = &aaaaabF;
aaaaab->visited= 0;
aaaaaaS* aaaaaa;
aaaaaa = (aaaaaaS*) x3malloc(sizeof(aaaaaaS));
aaaaaa->nrefs = 1;
aaaaaa->isIter = 0;
aaaaaa->isStr = 0;
aaaaaa->isEC = 1;
aaaaaa->eC = aaaaab;
aaaaaa->next = &aaaaaaF;
aaaaaa->visited= 0;
Iterable* aaaaay;
aaaaay = (Iterable*) x3malloc(sizeof(Iterable));
aaaaay->isIter = 1;
aaaaay->nrefs = 0;
aaaaay->value = NULL;
aaaaay->c = aaaaaa;
aaaaay->additional = NULL;
aaaaay->next = &aaaaaaIterNext;
aaaaay->concat = NULL;

Iterable *aaaaayCopy;
		aaaaayCopy = (Iterable *)x3malloc(sizeof(Iterable));
		aaaaayCopy->nrefs = ((Iterable *)aaaaay)->nrefs;
		aaaaayCopy->isIter = ((Iterable *)aaaaay)->isIter;
		aaaaayCopy->isStr = ((Iterable *)aaaaay)->isStr;
		aaaaayCopy->value = ((Iterable *)aaaaay)->value;
		aaaaayCopy->c = ((Iterable *)aaaaay)->c;
		aaaaayCopy->additional = ((Iterable *)aaaaay)->additional;
		aaaaayCopy->next = ((Iterable *)aaaaay)->next;
		aaaaayCopy->concat = ((Iterable *)aaaaay)->concat;
		incRef((((Iterable*)aaaaayCopy)->c));
aaaaacS* aaaaac;
aaaaac = (aaaaacS*) x3malloc(sizeof(aaaaacS));
aaaaac->nrefs = 1;
aaaaac->isIter = 0;
aaaaac->isStr = 0;
aaaaac->isEC =0;
aaaaac->forC = aaaaaf;
aaaaac->iter = aaaaayCopy;
aaaaac->iterorg = aaaaay;
aaaaac->next = &aaaaacF;
aaaaac->visited= 0;
Iterable* aaaaaj;
aaaaaj = (Iterable*) x3malloc(sizeof(Iterable));
aaaaaj->isIter = 1;
aaaaaj->nrefs = 0;
aaaaaj->value = NULL;
aaaaaj->c = aaaaac;
aaaaaj->additional = NULL;
aaaaaj->next = &aaaaacIterNext;
aaaaaj->concat = NULL;

void * aaaabl = NULL;
aaaabl = d;
d = aaaaaj;
incRef(d);
decRef(aaaabl);






if (d!= NULL) {
(*(int *)d)--;
}
return d;
}


void cubex_main() {
Iterable* ourMain, *temp;
ourMain = (Iterable*) our_main();
temp = ourMain;
if (ourMain != NULL)
	if (ourMain->c != NULL) {
		(*((int*)ourMain->c+4)) = 0;
		ourMain = iterGetNext(ourMain);
	}
while(ourMain != NULL) {
	print_line(((String*)ourMain->value)->value, ((String*)ourMain->value)->len);
	ourMain = iterGetNext(ourMain);
}
freeIter(temp);
}
