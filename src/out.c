#include<stdio.h>
#include "cubex_main.h"
#include "cubex_external_functions.h"
#include "cubex_lib.h"

typedef struct aaaaag_struct {
	int nrefs; 
	int isIter; 
	int isStr; 
	int isEC; 
	void* eC;
	void* (*next)(void*);
	int visited;
}aaaaagS;
void* aaaaagF(void* c) {
aaaaagS* this= (aaaaagS*) c;
if(this->visited){ 
	return NULL;
}else {
	this->visited=1; 
String* aaaaai;
aaaaai = (String *) x3malloc(sizeof(String));
(aaaaai->isIter) = 0;
aaaaai->value = (char*) x3malloc(sizeof("stop"));
(aaaaai->nrefs) = 0;
(aaaaai->isStr) = 1;
aaaaai->len = sizeof("stop") - 1;
mystrcpy(aaaaai->value, "stop");
return aaaaai;
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
	void* v;
}aaaaafS;
void* aaaaafF(void* c) {
aaaaafS* this= (aaaaafS*) c;
void*v=this->v;
if(this->visited){ 
	return ((aaaaagS*)this->eC)->next(this->eC);
}else {
	this->visited=1; 
((aaaaagS*)this->eC)->visited=0;
return v;
}
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
	return NULL;
}else {
	this->visited=1; 
String* aaaaak;
aaaaak = (String *) x3malloc(sizeof(String));
(aaaaak->isIter) = 0;
aaaaak->value = (char*) x3malloc(sizeof("b"));
(aaaaak->nrefs) = 0;
(aaaaak->isStr) = 1;
aaaaak->len = sizeof("b") - 1;
mystrcpy(aaaaak->value, "b");
return aaaaak;
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
String* aaaaal;
aaaaal = (String *) x3malloc(sizeof(String));
(aaaaal->isIter) = 0;
aaaaal->value = (char*) x3malloc(sizeof("a"));
(aaaaal->nrefs) = 0;
(aaaaal->isStr) = 1;
aaaaal->len = sizeof("a") - 1;
mystrcpy(aaaaal->value, "a");
return aaaaal;
}
}
Iterable* aaaaaaIterNext(void* iter){ 
Iterable* this=(Iterable*)iter;
if (((aaaaaaS*)this->c) != NULL) {
	void* aaaaam = this->value;
	this->value=((aaaaaaS*)this->c)->next(this->c);
	incRef(this->value);
	decRef(aaaaam);
	this->c=((aaaaaaS*)this->c)->eC;
	if(this->value)
		return this;
	else
		return NULL;
}
else
	return NULL;
}
typedef struct aaaaac_struct {
	int nrefs; 
	int isIter; 
	int isStr; 
	int isEC; 
	void* forC;
	Iterable* iter;
	void* (*next)(void*);
	void* v;
}aaaaacS;
void* aaaaacF(void* c) {
aaaaacS* this= (aaaaacS*) c;
if (this->iter->value==NULL) {this->iter=iterGetNext(this->iter);}
if (this->iter->value==NULL) {return NULL;};

void*v=this->iter->value;
	 ((aaaaafS*)this->forC)->v=v;
void* ret=((aaaaafS*)this->forC)->next(this->forC);
if (ret==NULL){
	 this->iter=iterGetNext(this->iter);
v=this->iter->value;
	 ((aaaaafS*)this->forC)->v=v;
((aaaaafS*)this->forC)->visited=0;
return ((aaaaafS*)this->forC)->next(this->forC);
}
return ret;
}
Iterable* aaaaacIterNext(void* iter){ 
Iterable* this=(Iterable*)iter;
if (((aaaaacS*)this->c) != NULL) {
	void* aaaaan = this->value;
	this->value=((aaaaacS*)this->c)->next(this->c);
	incRef(this->value);
	decRef(aaaaan);
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
Iterable* aaaaaj;
aaaaaj = (Iterable*) x3malloc(sizeof(Iterable));
aaaaaj->isIter = 1;
aaaaaj->nrefs = 0;
aaaaaj->value = NULL;
aaaaaj->c = aaaaaa;
aaaaaj->additional = NULL;
aaaaaj->next = &aaaaaaIterNext;
aaaaaj->concat = NULL;

aaaaacS* aaaaac;
aaaaac = (aaaaacS*) x3malloc(sizeof(aaaaacS));
aaaaac->nrefs = 1;
aaaaac->isIter = 0;
aaaaac->isStr = 0;
aaaaac->isEC =0;
aaaaac->forC = aaaaaf;
aaaaac->iter = aaaaaj;
aaaaac->next = &aaaaacF;
Iterable* aaaaah;
aaaaah = (Iterable*) x3malloc(sizeof(Iterable));
aaaaah->isIter = 1;
aaaaah->nrefs = 0;
aaaaah->value = NULL;
aaaaah->c = aaaaac;
aaaaah->additional = NULL;
aaaaah->next = &aaaaacIterNext;
aaaaah->concat = NULL;

void * aaaaao = NULL;
aaaaao = d;
d = aaaaah;
incRef(d);
decRef(aaaaao);






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
