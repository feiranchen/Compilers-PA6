#include<stdio.h>
#include "cubex_main.h"
#include "cubex_external_functions.h"
#include "cubex_lib.h"

typedef struct aaaaak_struct {
	int nrefs; 
	int isIter; 
	int isStr; 
	int isEC; 
	void* eC;
	void* (*next)(void*);
	int visited;
}aaaaakS;
void* aaaaakF(void* c) {
aaaaakS* this= (aaaaakS*) c;
if(this->visited){ 
	return NULL;
}else {
	this->visited=1; 
String* aaaaam;
aaaaam = (String *) x3malloc(sizeof(String));
(aaaaam->isIter) = 0;
aaaaam->value = (char*) x3malloc(sizeof("stop"));
(aaaaam->nrefs) = 0;
(aaaaam->isStr) = 1;
aaaaam->len = sizeof("stop") - 1;
mystrcpy(aaaaam->value, "stop");
return aaaaam;
}
}
typedef struct aaaaaj_struct {
	int nrefs; 
	int isIter; 
	int isStr; 
	int isEC; 
	void* eC;
	void* (*next)(void*);
	int visited;
	void* v;
}aaaaajS;
void* aaaaajF(void* c) {
aaaaajS* this= (aaaaajS*) c;
void*v=this->v;
if(this->visited){ 
	return ((aaaaakS*)this->eC)->next(this->eC);
}else {
	this->visited=1; 
((aaaaakS*)this->eC)->visited=0;
return v;
}
}
typedef struct aaaaaf_struct {
	int nrefs; 
	int isIter; 
	int isStr; 
	int isEC; 
	void* eC;
	void* (*next)(void*);
	int visited;
}aaaaafS;
void* aaaaafF(void* c) {
aaaaafS* this= (aaaaafS*) c;
if(this->visited){ 
	return NULL;
}else {
	this->visited=1; 
String* aaaaao;
aaaaao = (String *) x3malloc(sizeof(String));
(aaaaao->isIter) = 0;
aaaaao->value = (char*) x3malloc(sizeof("d"));
(aaaaao->nrefs) = 0;
(aaaaao->isStr) = 1;
aaaaao->len = sizeof("d") - 1;
mystrcpy(aaaaao->value, "d");
return aaaaao;
}
}
typedef struct aaaaae_struct {
	int nrefs; 
	int isIter; 
	int isStr; 
	int isEC; 
	void* eC;
	void* (*next)(void*);
	int visited;
}aaaaaeS;
void* aaaaaeF(void* c) {
aaaaaeS* this= (aaaaaeS*) c;
if(this->visited){ 
	return ((aaaaafS*)this->eC)->next(this->eC);
}else {
	this->visited=1; 
((aaaaafS*)this->eC)->visited=0;
String* aaaaap;
aaaaap = (String *) x3malloc(sizeof(String));
(aaaaap->isIter) = 0;
aaaaap->value = (char*) x3malloc(sizeof("c"));
(aaaaap->nrefs) = 0;
(aaaaap->isStr) = 1;
aaaaap->len = sizeof("c") - 1;
mystrcpy(aaaaap->value, "c");
return aaaaap;
}
}
typedef struct aaaaad_struct {
	int nrefs; 
	int isIter; 
	int isStr; 
	int isEC; 
	void* eC;
	void* (*next)(void*);
	int visited;
}aaaaadS;
void* aaaaadF(void* c) {
aaaaadS* this= (aaaaadS*) c;
if(this->visited){ 
	return ((aaaaaeS*)this->eC)->next(this->eC);
}else {
	this->visited=1; 
((aaaaaeS*)this->eC)->visited=0;
String* aaaaaq;
aaaaaq = (String *) x3malloc(sizeof(String));
(aaaaaq->isIter) = 0;
aaaaaq->value = (char*) x3malloc(sizeof("b"));
(aaaaaq->nrefs) = 0;
(aaaaaq->isStr) = 1;
aaaaaq->len = sizeof("b") - 1;
mystrcpy(aaaaaq->value, "b");
return aaaaaq;
}
}
typedef struct aaaaac_struct {
	int nrefs; 
	int isIter; 
	int isStr; 
	int isEC; 
	void* eC;
	void* (*next)(void*);
	int visited;
}aaaaacS;
void* aaaaacF(void* c) {
aaaaacS* this= (aaaaacS*) c;
if(this->visited){ 
	return ((aaaaadS*)this->eC)->next(this->eC);
}else {
	this->visited=1; 
((aaaaadS*)this->eC)->visited=0;
String* aaaaar;
aaaaar = (String *) x3malloc(sizeof(String));
(aaaaar->isIter) = 0;
aaaaar->value = (char*) x3malloc(sizeof("a"));
(aaaaar->nrefs) = 0;
(aaaaar->isStr) = 1;
aaaaar->len = sizeof("a") - 1;
mystrcpy(aaaaar->value, "a");
return aaaaar;
}
}
Iterable* aaaaacIterNext(void* iter){ 
Iterable* this=(Iterable*)iter;
if (((aaaaacS*)this->c) != NULL) {
	void* aaaaas = this->value;
	this->value=((aaaaacS*)this->c)->next(this->c);
	incRef(this->value);
	decRef(aaaaas);
	this->c=((aaaaacS*)this->c)->eC;
	if(this->value)
		return this;
	else
		return NULL;
}
else
	return NULL;
}
typedef struct aaaaag_struct {
	int nrefs; 
	int isIter; 
	int isStr; 
	int isEC; 
	void* forC;
	Iterable* iter;
	void* (*next)(void*);
	void* v;
}aaaaagS;
void* aaaaagF(void* c) {
aaaaagS* this= (aaaaagS*) c;
if (this->iter->value==NULL) {this->iter=iterGetNext(this->iter);}
if (this->iter->value==NULL) {return NULL;};

void*v=this->iter->value;
	 ((aaaaajS*)this->forC)->v=v;
void* ret=((aaaaajS*)this->forC)->next(this->forC);
if (ret==NULL){
	 this->iter=iterGetNext(this->iter);
v=this->iter->value;
	 ((aaaaajS*)this->forC)->v=v;
((aaaaajS*)this->forC)->visited=0;
return ((aaaaajS*)this->forC)->next(this->forC);
}
return ret;
}
typedef struct aaaaab_struct {
	int nrefs; 
	int isIter; 
	int isStr; 
	int isEC; 
	void* eC;
	void* (*next)(void*);
	int visited;
}aaaaabS;
void* aaaaabF(void* c) {
aaaaabS* this= (aaaaabS*) c;
if(this->visited){ 
	return ((aaaaagS*)this->eC)->next(this->eC);
}else {
	this->visited=1; 
String* aaaaat;
aaaaat = (String *) x3malloc(sizeof(String));
(aaaaat->isIter) = 0;
aaaaat->value = (char*) x3malloc(sizeof("ahahha"));
(aaaaat->nrefs) = 0;
(aaaaat->isStr) = 1;
aaaaat->len = sizeof("ahahha") - 1;
mystrcpy(aaaaat->value, "ahahha");
return aaaaat;
}
}
typedef struct aaaaaa_struct {
	int nrefs; 
	int isIter; 
	int isStr; 
	int isEC; 
	void* eC;
	void* (*next)(void*);
	int visited;
}aaaaaaS;
void* aaaaaaF(void* c) {
aaaaaaS* this= (aaaaaaS*) c;
if(this->visited){ 
	return ((aaaaabS*)this->eC)->next(this->eC);
}else {
	this->visited=1; 
((aaaaabS*)this->eC)->visited=0;
String* aaaaau;
aaaaau = (String *) x3malloc(sizeof(String));
(aaaaau->isIter) = 0;
aaaaau->value = (char*) x3malloc(sizeof("haha"));
(aaaaau->nrefs) = 0;
(aaaaau->isStr) = 1;
aaaaau->len = sizeof("haha") - 1;
mystrcpy(aaaaau->value, "haha");
return aaaaau;
}
}
Iterable* aaaaaaIterNext(void* iter){ 
Iterable* this=(Iterable*)iter;
if (((aaaaaaS*)this->c) != NULL) {
	void* aaaaav = this->value;
	this->value=((aaaaaaS*)this->c)->next(this->c);
	incRef(this->value);
	decRef(aaaaav);
	this->c=((aaaaaaS*)this->c)->eC;
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









aaaaakS* aaaaak;
aaaaak = (aaaaakS*) x3malloc(sizeof(aaaaakS));
aaaaak->nrefs = 1;
aaaaak->isIter = 0;
aaaaak->isStr = 0;
aaaaak->isEC = 1;
aaaaak->eC = NULL;
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
aaaaafS* aaaaaf;
aaaaaf = (aaaaafS*) x3malloc(sizeof(aaaaafS));
aaaaaf->nrefs = 1;
aaaaaf->isIter = 0;
aaaaaf->isStr = 0;
aaaaaf->isEC = 1;
aaaaaf->eC = NULL;
aaaaaf->next = &aaaaafF;
aaaaaf->visited= 0;
aaaaaeS* aaaaae;
aaaaae = (aaaaaeS*) x3malloc(sizeof(aaaaaeS));
aaaaae->nrefs = 1;
aaaaae->isIter = 0;
aaaaae->isStr = 0;
aaaaae->isEC = 1;
aaaaae->eC = aaaaaf;
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
aaaaacS* aaaaac;
aaaaac = (aaaaacS*) x3malloc(sizeof(aaaaacS));
aaaaac->nrefs = 1;
aaaaac->isIter = 0;
aaaaac->isStr = 0;
aaaaac->isEC = 1;
aaaaac->eC = aaaaad;
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

aaaaagS* aaaaag;
aaaaag = (aaaaagS*) x3malloc(sizeof(aaaaagS));
aaaaag->nrefs = 1;
aaaaag->isIter = 0;
aaaaag->isStr = 0;
aaaaag->isEC =0;
aaaaag->forC = aaaaaj;
aaaaag->iter = aaaaan;
aaaaag->next = &aaaaagF;
aaaaabS* aaaaab;
aaaaab = (aaaaabS*) x3malloc(sizeof(aaaaabS));
aaaaab->nrefs = 1;
aaaaab->isIter = 0;
aaaaab->isStr = 0;
aaaaab->isEC = 1;
aaaaab->eC = aaaaag;
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
Iterable* aaaaal;
aaaaal = (Iterable*) x3malloc(sizeof(Iterable));
aaaaal->isIter = 1;
aaaaal->nrefs = 0;
aaaaal->value = NULL;
aaaaal->c = aaaaaa;
aaaaal->additional = NULL;
aaaaal->next = &aaaaaaIterNext;
aaaaal->concat = NULL;

void * aaaaaw = NULL;
aaaaaw = d;
d = aaaaal;
incRef(d);
decRef(aaaaaw);






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
	if (ourMain->c != NULL)
		ourMain = iterGetNext(ourMain);
while(ourMain != NULL) {
	print_line(((String*)ourMain->value)->value, ((String*)ourMain->value)->len);
	ourMain = iterGetNext(ourMain);
}
freeIter(temp);
}
