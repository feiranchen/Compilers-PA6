#include<stdio.h>
#include "cubex_main.h"
#include "cubex_external_functions.h"
#include "cubex_lib.h"

Iterable* input= NULL;
void* aaaaamF(void*);
typedef struct aaaaam_struct {
	int nrefs; 
	int isIter; 
	int isStr; 
	int isEC; 
	int visited;
	void* eC;
	void* (*next)(void*);
}aaaaamS;
void* aaaaalF(void*);
typedef struct aaaaal_struct {
	int nrefs; 
	int isIter; 
	int isStr; 
	int isEC; 
	int visited;
	void* eC;
	void* (*next)(void*);
	void* m;
}aaaaalS;
void* aaaaakF(void*);
typedef struct aaaaak_struct {
	int nrefs; 
	int isIter; 
	int isStr; 
	int isEC; 
	int visited;
	void* eC;
	void* (*next)(void*);
	void* v;
	void* m;
}aaaaakS;
void* aaaaaiF(void*);
typedef struct aaaaai_struct {
	int nrefs; 
	int isIter; 
	int isStr; 
	int isEC; 
	int visited;
	void* eC;
	void* (*next)(void*);
}aaaaaiS;
void* aaaaahF(void*);
typedef struct aaaaah_struct {
	int nrefs; 
	int isIter; 
	int isStr; 
	int isEC; 
	int visited;
	void* eC;
	void* (*next)(void*);
}aaaaahS;
Iterable* aaaaahIterNext(void*);
void* aaaaajF(void*);
typedef struct aaaaaj_struct {
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
	void* m;
}aaaaajS;
void* aaaaagF(void*);
typedef struct aaaaag_struct {
	int nrefs; 
	int isIter; 
	int isStr; 
	int isEC; 
	int visited;
	void* eC;
	void* (*next)(void*);
	void* v;
}aaaaagS;
void* aaaaafF(void*);
typedef struct aaaaaf_struct {
	int nrefs; 
	int isIter; 
	int isStr; 
	int isEC; 
	int visited;
	void* eC;
	void* (*next)(void*);
	void* v;
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


void* aaaaamF(void* c) {
aaaaamS* this= (aaaaamS*) c;
if(this->visited){ 
	return NULL;
}else {
	this->visited=1; 
String* aaaaao;
aaaaao = (String *) x3malloc(sizeof(String));
(aaaaao->isIter) = 0;
aaaaao->value = (char*) x3malloc(sizeof("lala"));
(aaaaao->nrefs) = 0;
(aaaaao->isStr) = 1;
aaaaao->len = sizeof("lala") - 1;
mystrcpy(aaaaao->value, "lala");
	return aaaaao;
	}
}
void* aaaaalF(void* c) {
aaaaalS* this= (aaaaalS*) c;
void*m=this->m;
if(this->visited){ 
	return ((aaaaamS*)this->eC)->next(this->eC);
}else {
	if (this->eC!=NULL&&this->visited==0){		((aaaaamS*)this->eC)->visited=0;}
		this->visited=1; 
	return m;
	}
}
void* aaaaakF(void* c) {
aaaaakS* this= (aaaaakS*) c;
void*v=this->v;
void*m=this->m;
((aaaaalS*)this->eC)->m=this->m;
if(this->visited){ 
	return ((aaaaalS*)this->eC)->next(this->eC);
}else {
	if (this->eC!=NULL&&this->visited==0){		((aaaaalS*)this->eC)->visited=0;}
		this->visited=1; 
	return v;
	}
}
void* aaaaaiF(void* c) {
aaaaaiS* this= (aaaaaiS*) c;
if(this->visited){ 
	return NULL;
}else {
	this->visited=1; 
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
void* aaaaahF(void* c) {
aaaaahS* this= (aaaaahS*) c;
if(this->visited){ 
	return ((aaaaaiS*)this->eC)->next(this->eC);
}else {
	if (this->eC!=NULL&&this->visited==0){		((aaaaaiS*)this->eC)->visited=0;}
		this->visited=1; 
String* aaaaar;
aaaaar = (String *) x3malloc(sizeof(String));
(aaaaar->isIter) = 0;
aaaaar->value = (char*) x3malloc(sizeof("aa"));
(aaaaar->nrefs) = 0;
(aaaaar->isStr) = 1;
aaaaar->len = sizeof("aa") - 1;
mystrcpy(aaaaar->value, "aa");
	return aaaaar;
	}
}
Iterable* aaaaahIterNext(void* iter){ 
Iterable* this=(Iterable*)iter;
if (((aaaaahS*)this->c) != NULL) {
	void* aaaaas = this->value;
	this->value=((aaaaahS*)this->c)->next(this->c);
	incRef(this->value);
	decRef(aaaaas);
	if(this->value)
		return this;
	else
		return NULL;
}
else
	return NULL;
}
void* aaaaajF(void* c) {
aaaaajS* this= (aaaaajS*) c;
((aaaaakS*)this->forC)->v=this->v;
if (this->forC!=NULL&&this->visited==0){	((aaaaakS*)this->forC)->visited=0;}
this->visited=1; 
if (this->iter==NULL) {
Iterable *aaaaapCopy;
		this->iter= (Iterable *)x3malloc(sizeof(Iterable));
		this->iter->nrefs =this->iterorg->nrefs;
		this->iter->isIter =this->iterorg->isIter;
		this->iter->isStr =this->iterorg->isStr;
		this->iter->value =this->iterorg->value;
		this->iter->c =this->iterorg->c;
		this->iter->additional =this->iterorg->additional;
		this->iter->next =this->iterorg->next;
		this->iter->concat =this->iterorg->concat;
				*((int*)this->iter->c+4)=0;
incRef(this->iterorg->c);
return NULL;}
if (this->iter->value==NULL) {this->iter=iterGetNext(this->iter);}
if (this->iter==NULL||this->iter->value==NULL) {
Iterable *aaaaapCopy;
		this->iter= (Iterable *)x3malloc(sizeof(Iterable));
		this->iter->nrefs =this->iterorg->nrefs;
		this->iter->isIter =this->iterorg->isIter;
		this->iter->isStr =this->iterorg->isStr;
		this->iter->value =this->iterorg->value;
		this->iter->c =this->iterorg->c;
		this->iter->additional =this->iterorg->additional;
		this->iter->next =this->iterorg->next;
		this->iter->concat =this->iterorg->concat;
				*((int*)this->iter->c+4)=0;
incRef(this->iterorg->c);
 return NULL;}
void*m=this->iter->value;
	 ((aaaaakS*)this->forC)->m=m;
void* ret=((aaaaakS*)this->forC)->next(this->forC);
if (ret==NULL){
	((aaaaakS*)this->forC)->visited=0;
	 this->iter=iterGetNext(this->iter);
if (this->iter==NULL) {return NULL;}
	m=this->iter->value;
	 ((aaaaakS*)this->forC)->m=m;
return ((aaaaakS*)this->forC)->next(this->forC);
}
return ret;
}
void* aaaaagF(void* c) {
aaaaagS* this= (aaaaagS*) c;
void*v=this->v;
((aaaaajS*)this->eC)->v=this->v;
if(this->visited){ 
	return ((aaaaajS*)this->eC)->next(this->eC);
}else {
	if (this->eC!=NULL&&this->visited==0){		((aaaaajS*)this->eC)->visited=0;}
		this->visited=1; 
String* aaaaat;
aaaaat = (String *) x3malloc(sizeof(String));
(aaaaat->isIter) = 0;
aaaaat->value = (char*) x3malloc(sizeof("testing"));
(aaaaat->nrefs) = 0;
(aaaaat->isStr) = 1;
aaaaat->len = sizeof("testing") - 1;
mystrcpy(aaaaat->value, "testing");
	return aaaaat;
	}
}
void* aaaaafF(void* c) {
aaaaafS* this= (aaaaafS*) c;
void*v=this->v;
((aaaaagS*)this->eC)->v=this->v;
if(this->visited){ 
	return ((aaaaagS*)this->eC)->next(this->eC);
}else {
	if (this->eC!=NULL&&this->visited==0){		((aaaaagS*)this->eC)->visited=0;}
		this->visited=1; 
	return v;
	}
}
void* aaaaabF(void* c) {
aaaaabS* this= (aaaaabS*) c;
if(this->visited){ 
	return NULL;
}else {
	this->visited=1; 
String* aaaaav;
aaaaav = (String *) x3malloc(sizeof(String));
(aaaaav->isIter) = 0;
aaaaav->value = (char*) x3malloc(sizeof("y"));
(aaaaav->nrefs) = 0;
(aaaaav->isStr) = 1;
aaaaav->len = sizeof("y") - 1;
mystrcpy(aaaaav->value, "y");
	return aaaaav;
	}
}
void* aaaaaaF(void* c) {
aaaaaaS* this= (aaaaaaS*) c;
if(this->visited){ 
	return ((aaaaabS*)this->eC)->next(this->eC);
}else {
	if (this->eC!=NULL&&this->visited==0){		((aaaaabS*)this->eC)->visited=0;}
		this->visited=1; 
String* aaaaaw;
aaaaaw = (String *) x3malloc(sizeof(String));
(aaaaaw->isIter) = 0;
aaaaaw->value = (char*) x3malloc(sizeof("x"));
(aaaaaw->nrefs) = 0;
(aaaaaw->isStr) = 1;
aaaaaw->len = sizeof("x") - 1;
mystrcpy(aaaaaw->value, "x");
	return aaaaaw;
	}
}
Iterable* aaaaaaIterNext(void* iter){ 
Iterable* this=(Iterable*)iter;
if (((aaaaaaS*)this->c) != NULL) {
	void* aaaaax = this->value;
	this->value=((aaaaaaS*)this->c)->next(this->c);
	incRef(this->value);
	decRef(aaaaax);
	if(this->value)
		return this;
	else
		return NULL;
}
else
	return NULL;
}
void* aaaaacF(void* c) {
aaaaacS* this= (aaaaacS*) c;
if (this->forC!=NULL&&this->visited==0){	((aaaaafS*)this->forC)->visited=0;}
this->visited=1; 
if (this->iter==NULL) {
Iterable *aaaaauCopy;
		this->iter= (Iterable *)x3malloc(sizeof(Iterable));
		this->iter->nrefs =this->iterorg->nrefs;
		this->iter->isIter =this->iterorg->isIter;
		this->iter->isStr =this->iterorg->isStr;
		this->iter->value =this->iterorg->value;
		this->iter->c =this->iterorg->c;
		this->iter->additional =this->iterorg->additional;
		this->iter->next =this->iterorg->next;
		this->iter->concat =this->iterorg->concat;
				*((int*)this->iter->c+4)=0;
incRef(this->iterorg->c);
return NULL;}
if (this->iter->value==NULL) {this->iter=iterGetNext(this->iter);}
if (this->iter==NULL||this->iter->value==NULL) {
Iterable *aaaaauCopy;
		this->iter= (Iterable *)x3malloc(sizeof(Iterable));
		this->iter->nrefs =this->iterorg->nrefs;
		this->iter->isIter =this->iterorg->isIter;
		this->iter->isStr =this->iterorg->isStr;
		this->iter->value =this->iterorg->value;
		this->iter->c =this->iterorg->c;
		this->iter->additional =this->iterorg->additional;
		this->iter->next =this->iterorg->next;
		this->iter->concat =this->iterorg->concat;
				*((int*)this->iter->c+4)=0;
incRef(this->iterorg->c);
 return NULL;}
void*v=this->iter->value;
	 ((aaaaafS*)this->forC)->v=v;
void* ret=((aaaaafS*)this->forC)->next(this->forC);
if (ret==NULL){
	((aaaaafS*)this->forC)->visited=0;
	 this->iter=iterGetNext(this->iter);
if (this->iter==NULL) {return NULL;}
	v=this->iter->value;
	 ((aaaaafS*)this->forC)->v=v;
return ((aaaaafS*)this->forC)->next(this->forC);
}
return ret;
}
Iterable* aaaaacIterNext(void* iter){ 
Iterable* this=(Iterable*)iter;
if (((aaaaacS*)this->c) != NULL) {
	void* aaaaay = this->value;
	this->value=((aaaaacS*)this->c)->next(this->c);
	incRef(this->value);
	decRef(aaaaay);
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



void * i = NULL;






aaaaamS* aaaaam;
aaaaam = (aaaaamS*) x3malloc(sizeof(aaaaamS));
aaaaam->nrefs = 1;
aaaaam->isIter = 0;
aaaaam->isStr = 0;
aaaaam->isEC = 1;
aaaaam->eC = NULL;
aaaaam->next = &aaaaamF;
aaaaam->visited= 0;
aaaaalS* aaaaal;
aaaaal = (aaaaalS*) x3malloc(sizeof(aaaaalS));
aaaaal->nrefs = 1;
aaaaal->isIter = 0;
aaaaal->isStr = 0;
aaaaal->isEC = 1;
aaaaal->eC = aaaaam;
aaaaal->next = &aaaaalF;
aaaaal->visited= 0;
aaaaakS* aaaaak;
aaaaak = (aaaaakS*) x3malloc(sizeof(aaaaakS));
aaaaak->nrefs = 1;
aaaaak->isIter = 0;
aaaaak->isStr = 0;
aaaaak->isEC = 1;
aaaaak->eC = aaaaal;
aaaaak->next = &aaaaakF;
aaaaak->visited= 0;
aaaaaiS* aaaaai;
aaaaai = (aaaaaiS*) x3malloc(sizeof(aaaaaiS));
aaaaai->nrefs = 1;
aaaaai->isIter = 0;
aaaaai->isStr = 0;
aaaaai->isEC = 1;
aaaaai->eC = NULL;
aaaaai->next = &aaaaaiF;
aaaaai->visited= 0;
aaaaahS* aaaaah;
aaaaah = (aaaaahS*) x3malloc(sizeof(aaaaahS));
aaaaah->nrefs = 1;
aaaaah->isIter = 0;
aaaaah->isStr = 0;
aaaaah->isEC = 1;
aaaaah->eC = aaaaai;
aaaaah->next = &aaaaahF;
aaaaah->visited= 0;
Iterable* aaaaap;
aaaaap = (Iterable*) x3malloc(sizeof(Iterable));
aaaaap->isIter = 1;
aaaaap->nrefs = 0;
aaaaap->value = NULL;
aaaaap->c = aaaaah;
aaaaap->additional = NULL;
aaaaap->next = &aaaaahIterNext;
aaaaap->concat = NULL;

Iterable *aaaaapCopy;
		aaaaapCopy = (Iterable *)x3malloc(sizeof(Iterable));
		aaaaapCopy->nrefs =aaaaap->nrefs;
		aaaaapCopy->isIter = aaaaap->isIter;
		aaaaapCopy->isStr = aaaaap->isStr;
		aaaaapCopy->value = aaaaap->value;
		aaaaapCopy->c = aaaaap->c;
		aaaaapCopy->additional = aaaaap->additional;
		aaaaapCopy->next = aaaaap->next;
		aaaaapCopy->concat = aaaaap->concat;
		incRef((((Iterable*)aaaaapCopy)->c));
aaaaajS* aaaaaj;
aaaaaj = (aaaaajS*) x3malloc(sizeof(aaaaajS));
aaaaaj->nrefs = 1;
aaaaaj->isIter = 0;
aaaaaj->isStr = 0;
aaaaaj->isEC =0;
aaaaaj->forC = aaaaak;
aaaaaj->iter = aaaaapCopy;
aaaaaj->iterorg = aaaaap;
aaaaaj->next = &aaaaajF;
aaaaaj->visited= 0;
aaaaagS* aaaaag;
aaaaag = (aaaaagS*) x3malloc(sizeof(aaaaagS));
aaaaag->nrefs = 1;
aaaaag->isIter = 0;
aaaaag->isStr = 0;
aaaaag->isEC = 1;
aaaaag->eC = aaaaaj;
aaaaag->next = &aaaaagF;
aaaaag->visited= 0;
aaaaafS* aaaaaf;
aaaaaf = (aaaaafS*) x3malloc(sizeof(aaaaafS));
aaaaaf->nrefs = 1;
aaaaaf->isIter = 0;
aaaaaf->isStr = 0;
aaaaaf->isEC = 1;
aaaaaf->eC = aaaaag;
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
Iterable* aaaaau;
aaaaau = (Iterable*) x3malloc(sizeof(Iterable));
aaaaau->isIter = 1;
aaaaau->nrefs = 0;
aaaaau->value = NULL;
aaaaau->c = aaaaaa;
aaaaau->additional = NULL;
aaaaau->next = &aaaaaaIterNext;
aaaaau->concat = NULL;

Iterable *aaaaauCopy;
		aaaaauCopy = (Iterable *)x3malloc(sizeof(Iterable));
		aaaaauCopy->nrefs =aaaaau->nrefs;
		aaaaauCopy->isIter = aaaaau->isIter;
		aaaaauCopy->isStr = aaaaau->isStr;
		aaaaauCopy->value = aaaaau->value;
		aaaaauCopy->c = aaaaau->c;
		aaaaauCopy->additional = aaaaau->additional;
		aaaaauCopy->next = aaaaau->next;
		aaaaauCopy->concat = aaaaau->concat;
		incRef((((Iterable*)aaaaauCopy)->c));
aaaaacS* aaaaac;
aaaaac = (aaaaacS*) x3malloc(sizeof(aaaaacS));
aaaaac->nrefs = 1;
aaaaac->isIter = 0;
aaaaac->isStr = 0;
aaaaac->isEC =0;
aaaaac->forC = aaaaaf;
aaaaac->iter = aaaaauCopy;
aaaaac->iterorg = aaaaau;
aaaaac->next = &aaaaacF;
aaaaac->visited= 0;
Iterable* aaaaan;
aaaaan = (Iterable*) x3malloc(sizeof(Iterable));
aaaaan->isIter = 1;
aaaaan->nrefs = 0;
aaaaan->value = NULL;
aaaaan->c = aaaaac;
aaaaan->additional = NULL;
aaaaan->next = &aaaaacIterNext;
aaaaan->concat = NULL;

void * aaaaaz = NULL;
aaaaaz = d;
d = aaaaan;
incRef(d);
decRef(aaaaaz);






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
		ourMain = iterGetNext(ourMain);
		(*((int*)ourMain->c+5)) = 0;
	}
while(ourMain != NULL) {
	print_line(((String*)ourMain->value)->value, ((String*)ourMain->value)->len);
	ourMain = iterGetNext(ourMain);
}
freeIter(temp);
}
