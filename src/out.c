#include<stdio.h>
#include "cubex_main.h"
#include "cubex_external_functions.h"
#include "cubex_lib.h"

Iterable* input= NULL;
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
	void* ifC;
	void* (*next)(void*);
	void* i;
}aaaaadS;
void* aaaaaaF(void*);
typedef struct aaaaaa_struct {
	int nrefs; 
	int isIter; 
	int isStr; 
	int isEC; 
	int visited;
	void* eC;
	void* (*next)(void*);
	void* i;
}aaaaaaS;
Iterable* aaaaaaIterNext(void*);
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
void* aaaaafF(void*);
typedef struct aaaaaf_struct {
	int nrefs; 
	int isIter; 
	int isStr; 
	int isEC; 
	int visited;
	void* eC;
	void* (*next)(void*);
}aaaaafS;
Iterable* aaaaafIterNext(void*);
void* aaaaarF(void*);
typedef struct aaaaar_struct {
	int nrefs; 
	int isIter; 
	int isStr; 
	int isEC; 
	int visited;
	void* eC;
	void* (*next)(void*);
}aaaaarS;
void* aaaaaqF(void*);
typedef struct aaaaaq_struct {
	int nrefs; 
	int isIter; 
	int isStr; 
	int isEC; 
	int visited;
	void* ifC;
	void* (*next)(void*);
	void* i;
}aaaaaqS;
void* aaaaapF(void*);
typedef struct aaaaap_struct {
	int nrefs; 
	int isIter; 
	int isStr; 
	int isEC; 
	int visited;
	void* eC;
	void* (*next)(void*);
	void* i;
}aaaaapS;
void* aaaaaoF(void*);
typedef struct aaaaao_struct {
	int nrefs; 
	int isIter; 
	int isStr; 
	int isEC; 
	int visited;
	void* eC;
	void* (*next)(void*);
	void* v;
	void* i;
}aaaaaoS;
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
}aaaaakS;
void* aaaaajF(void*);
typedef struct aaaaaj_struct {
	int nrefs; 
	int isIter; 
	int isStr; 
	int isEC; 
	int visited;
	void* eC;
	void* (*next)(void*);
}aaaaajS;
Iterable* aaaaajIterNext(void*);
void* aaaaanF(void*);
typedef struct aaaaan_struct {
	int nrefs; 
	int isIter; 
	int isStr; 
	int isEC; 
	int visited;
	void* forC;
	Iterable* iter;
	void* (*next)(void*);
	void* i;
	void* v;
}aaaaanS;
void* aaaaaiF(void*);
typedef struct aaaaai_struct {
	int nrefs; 
	int isIter; 
	int isStr; 
	int isEC; 
	int visited;
	void* eC;
	void* (*next)(void*);
	void* i;
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
	void* i;
}aaaaahS;
Iterable* aaaaahIterNext(void*);
void* aaaaawF(void*);
typedef struct aaaaaw_struct {
	int nrefs; 
	int isIter; 
	int isStr; 
	int isEC; 
	int visited;
	void* eC;
	void* (*next)(void*);
}aaaaawS;
void* aaaaavF(void*);
typedef struct aaaaav_struct {
	int nrefs; 
	int isIter; 
	int isStr; 
	int isEC; 
	int visited;
	void* eC;
	void* (*next)(void*);
	void* v;
}aaaaavS;
void* aaaaatF(void*);
typedef struct aaaaat_struct {
	int nrefs; 
	int isIter; 
	int isStr; 
	int isEC; 
	int visited;
	void* eC;
	void* (*next)(void*);
}aaaaatS;
void* aaaaasF(void*);
typedef struct aaaaas_struct {
	int nrefs; 
	int isIter; 
	int isStr; 
	int isEC; 
	int visited;
	void* eC;
	void* (*next)(void*);
}aaaaasS;
Iterable* aaaaasIterNext(void*);
void* aaaaauF(void*);
typedef struct aaaaau_struct {
	int nrefs; 
	int isIter; 
	int isStr; 
	int isEC; 
	int visited;
	void* forC;
	Iterable* iter;
	void* (*next)(void*);
	void* v;
}aaaaauS;
Iterable* aaaaauIterNext(void*);


void* aaaaaeF(void* c) {
aaaaaeS* this= (aaaaaeS*) c;
if(this->visited){ 
	return NULL;
}else {
	this->visited=1; 
String* aaaabi;
aaaabi = (String *) x3malloc(sizeof(String));
(aaaabi->isIter) = 0;
aaaabi->value = (char*) x3malloc(sizeof("world"));
(aaaabi->nrefs) = 0;
(aaaabi->isStr) = 1;
aaaabi->len = sizeof("world") - 1;
mystrcpy(aaaabi->value, "world");
return aaaabi;
}
}
void* aaaaadF(void* c) {
aaaaadS* this= (aaaaadS*) c;
void* i=this->i;
if (this->ifC!=NULL&&this->visited==0){	((aaaaaeS*)this->ifC)->visited=0;}
this->visited=1; 

Integer* aaaabj;
aaaabj = (Integer*) x3malloc(sizeof(Integer));
(aaaabj->nrefs) = 0;
aaaabj->value = 2;
Boolean* aaaabk = (Boolean*) x3malloc(sizeof(Boolean));
aaaabk->nrefs = 0;
aaaabk->value = ((Integer*) i)->value > ((Integer*) aaaabj)->value;
x3free(aaaabj);
if( aaaabk->value){
	return ((aaaaaeS*)this->ifC)->next(this->ifC);
} 
else {
	return NULL;
}
}
void* aaaaaaF(void* c) {
aaaaaaS* this= (aaaaaaS*) c;
void*i=this->i;
if(this->visited){ 
	return ((aaaaadS*)this->eC)->next(this->eC);
}else {
	this->visited=1; 
((aaaaadS*)this->eC)->visited=0;
String* aaaabl;
aaaabl = (String *) x3malloc(sizeof(String));
(aaaabl->isIter) = 0;
aaaabl->value = (char*) x3malloc(sizeof("hello"));
(aaaabl->nrefs) = 0;
(aaaabl->isStr) = 1;
aaaabl->len = sizeof("hello") - 1;
mystrcpy(aaaabl->value, "hello");
return aaaabl;
}
}
Iterable* aaaaaaIterNext(void* iter){ 
Iterable* this=(Iterable*)iter;
if (((aaaaaaS*)this->c) != NULL) {
	void* aaaabm = this->value;
	this->value=((aaaaaaS*)this->c)->next(this->c);
	incRef(this->value);
	decRef(aaaabm);
	if(this->value)
		return this;
	else
		return NULL;
}
else
	return NULL;
}
void* aaaaagF(void* c) {
aaaaagS* this= (aaaaagS*) c;
if(this->visited){ 
	return NULL;
}else {
	this->visited=1; 
String* aaaabp;
aaaabp = (String *) x3malloc(sizeof(String));
(aaaabp->isIter) = 0;
aaaabp->value = (char*) x3malloc(sizeof("ahahha"));
(aaaabp->nrefs) = 0;
(aaaabp->isStr) = 1;
aaaabp->len = sizeof("ahahha") - 1;
mystrcpy(aaaabp->value, "ahahha");
return aaaabp;
}
}
void* aaaaafF(void* c) {
aaaaafS* this= (aaaaafS*) c;
if(this->visited){ 
	return ((aaaaagS*)this->eC)->next(this->eC);
}else {
	this->visited=1; 
((aaaaagS*)this->eC)->visited=0;
String* aaaabq;
aaaabq = (String *) x3malloc(sizeof(String));
(aaaabq->isIter) = 0;
aaaabq->value = (char*) x3malloc(sizeof("haha"));
(aaaabq->nrefs) = 0;
(aaaabq->isStr) = 1;
aaaabq->len = sizeof("haha") - 1;
mystrcpy(aaaabq->value, "haha");
return aaaabq;
}
}
Iterable* aaaaafIterNext(void* iter){ 
Iterable* this=(Iterable*)iter;
if (((aaaaafS*)this->c) != NULL) {
	void* aaaabr = this->value;
	this->value=((aaaaafS*)this->c)->next(this->c);
	incRef(this->value);
	decRef(aaaabr);
	if(this->value)
		return this;
	else
		return NULL;
}
else
	return NULL;
}
void* aaaaarF(void* c) {
aaaaarS* this= (aaaaarS*) c;
if(this->visited){ 
	return NULL;
}else {
	this->visited=1; 
String* aaaabu;
aaaabu = (String *) x3malloc(sizeof(String));
(aaaabu->isIter) = 0;
aaaabu->value = (char*) x3malloc(sizeof("stop"));
(aaaabu->nrefs) = 0;
(aaaabu->isStr) = 1;
aaaabu->len = sizeof("stop") - 1;
mystrcpy(aaaabu->value, "stop");
return aaaabu;
}
}
void* aaaaaqF(void* c) {
aaaaaqS* this= (aaaaaqS*) c;
void* i=this->i;
if (this->ifC!=NULL&&this->visited==0){	((aaaaarS*)this->ifC)->visited=0;}
this->visited=1; 

Integer* aaaabv;
aaaabv = (Integer*) x3malloc(sizeof(Integer));
(aaaabv->nrefs) = 0;
aaaabv->value = 6;
Boolean* aaaabw = (Boolean*) x3malloc(sizeof(Boolean));
aaaabw->nrefs = 0;
aaaabw->value = ((Integer*) i)->value <= ((Integer*) aaaabv)->value;
x3free(aaaabv);
if( aaaabw->value){
	return ((aaaaarS*)this->ifC)->next(this->ifC);
} 
else {
	return NULL;
}
}
void* aaaaapF(void* c) {
aaaaapS* this= (aaaaapS*) c;
void*i=this->i;
if(this->visited){ 
	return ((aaaaaqS*)this->eC)->next(this->eC);
}else {
	this->visited=1; 
((aaaaaqS*)this->eC)->visited=0;
String* aaaabx;
aaaabx = (String *) x3malloc(sizeof(String));
(aaaabx->isIter) = 0;
aaaabx->value = (char*) x3malloc(sizeof("stopppp"));
(aaaabx->nrefs) = 0;
(aaaabx->isStr) = 1;
aaaabx->len = sizeof("stopppp") - 1;
mystrcpy(aaaabx->value, "stopppp");
return aaaabx;
}
}
void* aaaaaoF(void* c) {
aaaaaoS* this= (aaaaaoS*) c;
void*v=this->v;
void*i=this->i;
if(this->visited){ 
	return ((aaaaapS*)this->eC)->next(this->eC);
}else {
	this->visited=1; 
((aaaaapS*)this->eC)->visited=0;
return v;
}
}
void* aaaaamF(void* c) {
aaaaamS* this= (aaaaamS*) c;
if(this->visited){ 
	return NULL;
}else {
	this->visited=1; 
String* aaaabz;
aaaabz = (String *) x3malloc(sizeof(String));
(aaaabz->isIter) = 0;
aaaabz->value = (char*) x3malloc(sizeof("d"));
(aaaabz->nrefs) = 0;
(aaaabz->isStr) = 1;
aaaabz->len = sizeof("d") - 1;
mystrcpy(aaaabz->value, "d");
return aaaabz;
}
}
void* aaaaalF(void* c) {
aaaaalS* this= (aaaaalS*) c;
if(this->visited){ 
	return ((aaaaamS*)this->eC)->next(this->eC);
}else {
	this->visited=1; 
((aaaaamS*)this->eC)->visited=0;
String* aaaaca;
aaaaca = (String *) x3malloc(sizeof(String));
(aaaaca->isIter) = 0;
aaaaca->value = (char*) x3malloc(sizeof("c"));
(aaaaca->nrefs) = 0;
(aaaaca->isStr) = 1;
aaaaca->len = sizeof("c") - 1;
mystrcpy(aaaaca->value, "c");
return aaaaca;
}
}
void* aaaaakF(void* c) {
aaaaakS* this= (aaaaakS*) c;
if(this->visited){ 
	return ((aaaaalS*)this->eC)->next(this->eC);
}else {
	this->visited=1; 
((aaaaalS*)this->eC)->visited=0;
String* aaaacb;
aaaacb = (String *) x3malloc(sizeof(String));
(aaaacb->isIter) = 0;
aaaacb->value = (char*) x3malloc(sizeof("b"));
(aaaacb->nrefs) = 0;
(aaaacb->isStr) = 1;
aaaacb->len = sizeof("b") - 1;
mystrcpy(aaaacb->value, "b");
return aaaacb;
}
}
void* aaaaajF(void* c) {
aaaaajS* this= (aaaaajS*) c;
if(this->visited){ 
	return ((aaaaakS*)this->eC)->next(this->eC);
}else {
	this->visited=1; 
((aaaaakS*)this->eC)->visited=0;
String* aaaacc;
aaaacc = (String *) x3malloc(sizeof(String));
(aaaacc->isIter) = 0;
aaaacc->value = (char*) x3malloc(sizeof("a"));
(aaaacc->nrefs) = 0;
(aaaacc->isStr) = 1;
aaaacc->len = sizeof("a") - 1;
mystrcpy(aaaacc->value, "a");
return aaaacc;
}
}
Iterable* aaaaajIterNext(void* iter){ 
Iterable* this=(Iterable*)iter;
if (((aaaaajS*)this->c) != NULL) {
	void* aaaacd = this->value;
	this->value=((aaaaajS*)this->c)->next(this->c);
	incRef(this->value);
	decRef(aaaacd);
	if(this->value)
		return this;
	else
		return NULL;
}
else
	return NULL;
}
void* aaaaanF(void* c) {
aaaaanS* this= (aaaaanS*) c;
void* i=this->i;
if (this->forC!=NULL&&this->visited==0){	((aaaaaoS*)this->forC)->visited=0;}
this->visited=1; 
if (this->iter==NULL) {return NULL;}
if (this->iter->value==NULL) {this->iter=iterGetNext(this->iter);}
if (this->iter==NULL||this->iter->value==NULL) {return NULL;}
void*v=this->iter->value;
	 ((aaaaaoS*)this->forC)->v=v;
	this->visited=1; 
void* ret=((aaaaaoS*)this->forC)->next(this->forC);
if (ret==NULL){
	 this->iter=iterGetNext(this->iter);
if (this->iter==NULL) {return NULL;}
((aaaaaoS*)this->forC)->visited=0;
	v=this->iter->value;
	 ((aaaaaoS*)this->forC)->v=v;
return ((aaaaaoS*)this->forC)->next(this->forC);
}
return ret;
}
void* aaaaaiF(void* c) {
aaaaaiS* this= (aaaaaiS*) c;
void*i=this->i;
if(this->visited){ 
	return ((aaaaanS*)this->eC)->next(this->eC);
}else {
	this->visited=1; 
((aaaaanS*)this->eC)->visited=0;
String* aaaace;
aaaace = (String *) x3malloc(sizeof(String));
(aaaace->isIter) = 0;
aaaace->value = (char*) x3malloc(sizeof("ahahha"));
(aaaace->nrefs) = 0;
(aaaace->isStr) = 1;
aaaace->len = sizeof("ahahha") - 1;
mystrcpy(aaaace->value, "ahahha");
return aaaace;
}
}
void* aaaaahF(void* c) {
aaaaahS* this= (aaaaahS*) c;
void*i=this->i;
if(this->visited){ 
	return ((aaaaaiS*)this->eC)->next(this->eC);
}else {
	this->visited=1; 
((aaaaaiS*)this->eC)->visited=0;
String* aaaacf;
aaaacf = (String *) x3malloc(sizeof(String));
(aaaacf->isIter) = 0;
aaaacf->value = (char*) x3malloc(sizeof("haha"));
(aaaacf->nrefs) = 0;
(aaaacf->isStr) = 1;
aaaacf->len = sizeof("haha") - 1;
mystrcpy(aaaacf->value, "haha");
return aaaacf;
}
}
Iterable* aaaaahIterNext(void* iter){ 
Iterable* this=(Iterable*)iter;
if (((aaaaahS*)this->c) != NULL) {
	void* aaaacg = this->value;
	this->value=((aaaaahS*)this->c)->next(this->c);
	incRef(this->value);
	decRef(aaaacg);
	if(this->value)
		return this;
	else
		return NULL;
}
else
	return NULL;
}
void* aaaaawF(void* c) {
aaaaawS* this= (aaaaawS*) c;
if(this->visited){ 
	return NULL;
}else {
	this->visited=1; 
String* aaaacj;
aaaacj = (String *) x3malloc(sizeof(String));
(aaaacj->isIter) = 0;
aaaacj->value = (char*) x3malloc(sizeof("stop"));
(aaaacj->nrefs) = 0;
(aaaacj->isStr) = 1;
aaaacj->len = sizeof("stop") - 1;
mystrcpy(aaaacj->value, "stop");
return aaaacj;
}
}
void* aaaaavF(void* c) {
aaaaavS* this= (aaaaavS*) c;
void*v=this->v;
if(this->visited){ 
	return ((aaaaawS*)this->eC)->next(this->eC);
}else {
	this->visited=1; 
((aaaaawS*)this->eC)->visited=0;
return v;
}
}
void* aaaaatF(void* c) {
aaaaatS* this= (aaaaatS*) c;
if(this->visited){ 
	return NULL;
}else {
	this->visited=1; 
String* aaaacl;
aaaacl = (String *) x3malloc(sizeof(String));
(aaaacl->isIter) = 0;
aaaacl->value = (char*) x3malloc(sizeof("b"));
(aaaacl->nrefs) = 0;
(aaaacl->isStr) = 1;
aaaacl->len = sizeof("b") - 1;
mystrcpy(aaaacl->value, "b");
return aaaacl;
}
}
void* aaaaasF(void* c) {
aaaaasS* this= (aaaaasS*) c;
if(this->visited){ 
	return ((aaaaatS*)this->eC)->next(this->eC);
}else {
	this->visited=1; 
((aaaaatS*)this->eC)->visited=0;
String* aaaacm;
aaaacm = (String *) x3malloc(sizeof(String));
(aaaacm->isIter) = 0;
aaaacm->value = (char*) x3malloc(sizeof("a"));
(aaaacm->nrefs) = 0;
(aaaacm->isStr) = 1;
aaaacm->len = sizeof("a") - 1;
mystrcpy(aaaacm->value, "a");
return aaaacm;
}
}
Iterable* aaaaasIterNext(void* iter){ 
Iterable* this=(Iterable*)iter;
if (((aaaaasS*)this->c) != NULL) {
	void* aaaacn = this->value;
	this->value=((aaaaasS*)this->c)->next(this->c);
	incRef(this->value);
	decRef(aaaacn);
	if(this->value)
		return this;
	else
		return NULL;
}
else
	return NULL;
}
void* aaaaauF(void* c) {
aaaaauS* this= (aaaaauS*) c;
if (this->forC!=NULL&&this->visited==0){	((aaaaavS*)this->forC)->visited=0;}
this->visited=1; 
if (this->iter==NULL) {return NULL;}
if (this->iter->value==NULL) {this->iter=iterGetNext(this->iter);}
if (this->iter==NULL||this->iter->value==NULL) {return NULL;}
void*v=this->iter->value;
	 ((aaaaavS*)this->forC)->v=v;
	this->visited=1; 
void* ret=((aaaaavS*)this->forC)->next(this->forC);
if (ret==NULL){
	 this->iter=iterGetNext(this->iter);
if (this->iter==NULL) {return NULL;}
((aaaaavS*)this->forC)->visited=0;
	v=this->iter->value;
	 ((aaaaavS*)this->forC)->v=v;
return ((aaaaavS*)this->forC)->next(this->forC);
}
return ret;
}
Iterable* aaaaauIterNext(void* iter){ 
Iterable* this=(Iterable*)iter;
if (((aaaaauS*)this->c) != NULL) {
	void* aaaaco = this->value;
	this->value=((aaaaauS*)this->c)->next(this->c);
	incRef(this->value);
	decRef(aaaaco);
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
void * i = NULL;
void * d = NULL;
void * e = NULL;
void * f = NULL;
void * g = NULL;
void * aaaabb = NULL;
void * aaaabc = NULL;
void * aaaaaz = NULL;
void * aaaaba = NULL;
void * aaaaax = NULL;
void * aaaaay = NULL;
void * h = NULL;
void * aaaabd = NULL;
void * aaaabe = NULL;






Integer* aaaabf;
aaaabf = (Integer*) x3malloc(sizeof(Integer));
(aaaabf->nrefs) = 0;
aaaabf->value = 5;
void * aaaabg = NULL;
aaaabg = i;
i = aaaabf;
incRef(i);
decRef(aaaabg);






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
aaaaad->isEC =0;
aaaaad->ifC = aaaaae;
aaaaad->next = &aaaaadF;
aaaaad->visited= 0;
aaaaad->i=i;
incRef(i);
aaaaaaS* aaaaaa;
aaaaaa = (aaaaaaS*) x3malloc(sizeof(aaaaaaS));
aaaaaa->nrefs = 1;
aaaaaa->isIter = 0;
aaaaaa->isStr = 0;
aaaaaa->isEC = 1;
aaaaaa->eC = aaaaad;
aaaaaa->next = &aaaaaaF;
aaaaaa->visited= 0;
aaaaaa->i=i;
incRef(i);
Iterable* aaaabh;
aaaabh = (Iterable*) x3malloc(sizeof(Iterable));
aaaabh->isIter = 1;
aaaabh->nrefs = 0;
aaaabh->value = NULL;
aaaabh->c = aaaaaa;
aaaabh->additional = NULL;
aaaabh->next = &aaaaaaIterNext;
aaaabh->concat = NULL;

void * aaaabn = NULL;
aaaabn = d;
d = aaaabh;
incRef(d);
decRef(aaaabn);






aaaaagS* aaaaag;
aaaaag = (aaaaagS*) x3malloc(sizeof(aaaaagS));
aaaaag->nrefs = 1;
aaaaag->isIter = 0;
aaaaag->isStr = 0;
aaaaag->isEC = 1;
aaaaag->eC = NULL;
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
Iterable* aaaabo;
aaaabo = (Iterable*) x3malloc(sizeof(Iterable));
aaaabo->isIter = 1;
aaaabo->nrefs = 0;
aaaabo->value = NULL;
aaaabo->c = aaaaaf;
aaaabo->additional = NULL;
aaaabo->next = &aaaaafIterNext;
aaaabo->concat = NULL;

void * aaaabs = NULL;
aaaabs = e;
e = aaaabo;
incRef(e);
decRef(aaaabs);






aaaaarS* aaaaar;
aaaaar = (aaaaarS*) x3malloc(sizeof(aaaaarS));
aaaaar->nrefs = 1;
aaaaar->isIter = 0;
aaaaar->isStr = 0;
aaaaar->isEC = 1;
aaaaar->eC = NULL;
aaaaar->next = &aaaaarF;
aaaaar->visited= 0;
aaaaaqS* aaaaaq;
aaaaaq = (aaaaaqS*) x3malloc(sizeof(aaaaaqS));
aaaaaq->nrefs = 1;
aaaaaq->isIter = 0;
aaaaaq->isStr = 0;
aaaaaq->isEC =0;
aaaaaq->ifC = aaaaar;
aaaaaq->next = &aaaaaqF;
aaaaaq->visited= 0;
aaaaaq->i=i;
incRef(i);
aaaaapS* aaaaap;
aaaaap = (aaaaapS*) x3malloc(sizeof(aaaaapS));
aaaaap->nrefs = 1;
aaaaap->isIter = 0;
aaaaap->isStr = 0;
aaaaap->isEC = 1;
aaaaap->eC = aaaaaq;
aaaaap->next = &aaaaapF;
aaaaap->visited= 0;
aaaaap->i=i;
incRef(i);
aaaaaoS* aaaaao;
aaaaao = (aaaaaoS*) x3malloc(sizeof(aaaaaoS));
aaaaao->nrefs = 1;
aaaaao->isIter = 0;
aaaaao->isStr = 0;
aaaaao->isEC = 1;
aaaaao->eC = aaaaap;
aaaaao->next = &aaaaaoF;
aaaaao->visited= 0;
aaaaao->i=i;
incRef(i);
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
aaaaajS* aaaaaj;
aaaaaj = (aaaaajS*) x3malloc(sizeof(aaaaajS));
aaaaaj->nrefs = 1;
aaaaaj->isIter = 0;
aaaaaj->isStr = 0;
aaaaaj->isEC = 1;
aaaaaj->eC = aaaaak;
aaaaaj->next = &aaaaajF;
aaaaaj->visited= 0;
Iterable* aaaaby;
aaaaby = (Iterable*) x3malloc(sizeof(Iterable));
aaaaby->isIter = 1;
aaaaby->nrefs = 0;
aaaaby->value = NULL;
aaaaby->c = aaaaaj;
aaaaby->additional = NULL;
aaaaby->next = &aaaaajIterNext;
aaaaby->concat = NULL;

aaaaanS* aaaaan;
aaaaan = (aaaaanS*) x3malloc(sizeof(aaaaanS));
aaaaan->nrefs = 1;
aaaaan->isIter = 0;
aaaaan->isStr = 0;
aaaaan->isEC =0;
aaaaan->forC = aaaaao;
aaaaan->iter = aaaaby;
aaaaan->next = &aaaaanF;
aaaaan->visited= 0;
aaaaan->i=i;
incRef(i);
aaaaaiS* aaaaai;
aaaaai = (aaaaaiS*) x3malloc(sizeof(aaaaaiS));
aaaaai->nrefs = 1;
aaaaai->isIter = 0;
aaaaai->isStr = 0;
aaaaai->isEC = 1;
aaaaai->eC = aaaaan;
aaaaai->next = &aaaaaiF;
aaaaai->visited= 0;
aaaaai->i=i;
incRef(i);
aaaaahS* aaaaah;
aaaaah = (aaaaahS*) x3malloc(sizeof(aaaaahS));
aaaaah->nrefs = 1;
aaaaah->isIter = 0;
aaaaah->isStr = 0;
aaaaah->isEC = 1;
aaaaah->eC = aaaaai;
aaaaah->next = &aaaaahF;
aaaaah->visited= 0;
aaaaah->i=i;
incRef(i);
Iterable* aaaabt;
aaaabt = (Iterable*) x3malloc(sizeof(Iterable));
aaaabt->isIter = 1;
aaaabt->nrefs = 0;
aaaabt->value = NULL;
aaaabt->c = aaaaah;
aaaabt->additional = NULL;
aaaabt->next = &aaaaahIterNext;
aaaabt->concat = NULL;

void * aaaach = NULL;
aaaach = f;
f = aaaabt;
incRef(f);
decRef(aaaach);
decRef(i);






aaaaawS* aaaaaw;
aaaaaw = (aaaaawS*) x3malloc(sizeof(aaaaawS));
aaaaaw->nrefs = 1;
aaaaaw->isIter = 0;
aaaaaw->isStr = 0;
aaaaaw->isEC = 1;
aaaaaw->eC = NULL;
aaaaaw->next = &aaaaawF;
aaaaaw->visited= 0;
aaaaavS* aaaaav;
aaaaav = (aaaaavS*) x3malloc(sizeof(aaaaavS));
aaaaav->nrefs = 1;
aaaaav->isIter = 0;
aaaaav->isStr = 0;
aaaaav->isEC = 1;
aaaaav->eC = aaaaaw;
aaaaav->next = &aaaaavF;
aaaaav->visited= 0;
aaaaatS* aaaaat;
aaaaat = (aaaaatS*) x3malloc(sizeof(aaaaatS));
aaaaat->nrefs = 1;
aaaaat->isIter = 0;
aaaaat->isStr = 0;
aaaaat->isEC = 1;
aaaaat->eC = NULL;
aaaaat->next = &aaaaatF;
aaaaat->visited= 0;
aaaaasS* aaaaas;
aaaaas = (aaaaasS*) x3malloc(sizeof(aaaaasS));
aaaaas->nrefs = 1;
aaaaas->isIter = 0;
aaaaas->isStr = 0;
aaaaas->isEC = 1;
aaaaas->eC = aaaaat;
aaaaas->next = &aaaaasF;
aaaaas->visited= 0;
Iterable* aaaack;
aaaack = (Iterable*) x3malloc(sizeof(Iterable));
aaaack->isIter = 1;
aaaack->nrefs = 0;
aaaack->value = NULL;
aaaack->c = aaaaas;
aaaack->additional = NULL;
aaaack->next = &aaaaasIterNext;
aaaack->concat = NULL;

aaaaauS* aaaaau;
aaaaau = (aaaaauS*) x3malloc(sizeof(aaaaauS));
aaaaau->nrefs = 1;
aaaaau->isIter = 0;
aaaaau->isStr = 0;
aaaaau->isEC =0;
aaaaau->forC = aaaaav;
aaaaau->iter = aaaack;
aaaaau->next = &aaaaauF;
aaaaau->visited= 0;
Iterable* aaaaci;
aaaaci = (Iterable*) x3malloc(sizeof(Iterable));
aaaaci->isIter = 1;
aaaaci->nrefs = 0;
aaaaci->value = NULL;
aaaaci->c = aaaaau;
aaaaci->additional = NULL;
aaaaci->next = &aaaaauIterNext;
aaaaci->concat = NULL;

void * aaaacp = NULL;
aaaacp = g;
g = aaaaci;
incRef(g);
decRef(aaaacp);






void * aaaacq = NULL;
aaaacq = aaaabb;
aaaabb = d;
incRef(aaaabb);
decRef(aaaacq);
decRef(d);



void * aaaacr = NULL;
aaaacr = aaaabc;
aaaabc = e;
incRef(aaaabc);
decRef(aaaacr);
decRef(e);



void *aaaact;
aaaact = aaaabb;
if (aaaact!=NULL) {
(*((int *)aaaact))++;
if ((*((int *)aaaabb+1)) == 0) {
decRef(aaaact);
aaaact = strToIter( ((String *)aaaabb)->value, ((String *)aaaabb)->len);
incRef(aaaact);
}
}
void *aaaacu;
aaaacu = aaaabc;
if (aaaacu!=NULL) {
(*((int *)aaaacu))++;
if ((*((int *)aaaabc+1)) == 0) {
decRef(aaaacu);
aaaacu = strToIter( ((String *)aaaabc)->value, ((String *)aaaabc)->len);
incRef(aaaacu);
}
}
Iterable* aaaacs;
aaaacs = concatenate((Iterable*)aaaact, (Iterable*) aaaacu);
decRef(aaaact);
decRef(aaaacu);
void * aaaacv = NULL;
aaaacv = aaaaaz;
aaaaaz = aaaacs;
incRef(aaaaaz);
decRef(aaaacv);
decRef(aaaabb);
decRef(aaaabc);



void * aaaacw = NULL;
aaaacw = aaaaba;
aaaaba = f;
incRef(aaaaba);
decRef(aaaacw);



void *aaaacy;
aaaacy = aaaaaz;
if (aaaacy!=NULL) {
(*((int *)aaaacy))++;
if ((*((int *)aaaaaz+1)) == 0) {
decRef(aaaacy);
aaaacy = strToIter( ((String *)aaaaaz)->value, ((String *)aaaaaz)->len);
incRef(aaaacy);
}
}
void *aaaacz;
aaaacz = aaaaba;
if (aaaacz!=NULL) {
(*((int *)aaaacz))++;
if ((*((int *)aaaaba+1)) == 0) {
decRef(aaaacz);
aaaacz = strToIter( ((String *)aaaaba)->value, ((String *)aaaaba)->len);
incRef(aaaacz);
}
}
Iterable* aaaacx;
aaaacx = concatenate((Iterable*)aaaacy, (Iterable*) aaaacz);
decRef(aaaacy);
decRef(aaaacz);
void * aaaada = NULL;
aaaada = aaaaax;
aaaaax = aaaacx;
incRef(aaaaax);
decRef(aaaada);
decRef(aaaaaz);
decRef(aaaaba);



void * aaaadb = NULL;
aaaadb = aaaaay;
aaaaay = g;
incRef(aaaaay);
decRef(aaaadb);
decRef(g);



void *aaaadd;
aaaadd = aaaaax;
if (aaaadd!=NULL) {
(*((int *)aaaadd))++;
if ((*((int *)aaaaax+1)) == 0) {
decRef(aaaadd);
aaaadd = strToIter( ((String *)aaaaax)->value, ((String *)aaaaax)->len);
incRef(aaaadd);
}
}
void *aaaade;
aaaade = aaaaay;
if (aaaade!=NULL) {
(*((int *)aaaade))++;
if ((*((int *)aaaaay+1)) == 0) {
decRef(aaaade);
aaaade = strToIter( ((String *)aaaaay)->value, ((String *)aaaaay)->len);
incRef(aaaade);
}
}
Iterable* aaaadc;
aaaadc = concatenate((Iterable*)aaaadd, (Iterable*) aaaade);
decRef(aaaadd);
decRef(aaaade);
void * aaaadf = NULL;
aaaadf = h;
h = aaaadc;
incRef(h);
decRef(aaaadf);
decRef(aaaaax);
decRef(aaaaay);






void * aaaadg = NULL;
aaaadg = aaaabd;
aaaabd = h;
incRef(aaaabd);
decRef(aaaadg);
decRef(h);



void * aaaadh = NULL;
aaaadh = aaaabe;
aaaabe = f;
incRef(aaaabe);
decRef(aaaadh);
decRef(f);



void *aaaadj;
aaaadj = aaaabd;
if (aaaadj!=NULL) {
(*((int *)aaaadj))++;
if ((*((int *)aaaabd+1)) == 0) {
decRef(aaaadj);
aaaadj = strToIter( ((String *)aaaabd)->value, ((String *)aaaabd)->len);
incRef(aaaadj);
}
}
void *aaaadk;
aaaadk = aaaabe;
if (aaaadk!=NULL) {
(*((int *)aaaadk))++;
if ((*((int *)aaaabe+1)) == 0) {
decRef(aaaadk);
aaaadk = strToIter( ((String *)aaaabe)->value, ((String *)aaaabe)->len);
incRef(aaaadk);
}
}
Iterable* aaaadi;
aaaadi = concatenate((Iterable*)aaaadj, (Iterable*) aaaadk);
decRef(aaaadj);
decRef(aaaadk);
decRef(aaaabd);
decRef(aaaabe);
return aaaadi;
}


void cubex_main() {
Iterable* ourMain, *temp;
ourMain = (Iterable*) our_main();
temp = ourMain;
if (ourMain != NULL)
	if (ourMain->c != NULL)
		ourMain = iterGetNext(ourMain);
while(ourMain != NULL) {
	print_line(((String*)ourMain->value)->value, ((String*)ourMain->value)->len);
	ourMain = iterGetNext(ourMain);
}
freeIter(temp);
}
