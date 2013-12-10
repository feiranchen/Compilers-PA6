#include<stdio.h>
#include "cubex_main.h"
#include "cubex_external_functions.h"
#include "cubex_lib.h"

typedef struct aaaaae_struct {
	int nrefs; 
	int isIter; 
	int isStr; 
	void* eC;
	void* (*next)(void*);
	void* v;
}aaaaaeS;
void* aaaaaeF(void* c) {
aaaaaeS* this= (aaaaaeS*) c;
void*v=this->v;
return v;
}
typedef struct aaaaaa_struct {
	int nrefs; 
	int isIter; 
	int isStr; 
	void* eC;
	void* (*next)(void*);
}aaaaaaS;
void* aaaaaaF(void* c) {
aaaaaaS* this= (aaaaaaS*) c;
String* aaaaah;
aaaaah = (String *) x3malloc(sizeof(String));
(aaaaah->isIter) = 0;
aaaaah->value = (char*) x3malloc(sizeof("a"));
(aaaaah->nrefs) = 0;
(aaaaah->isStr) = 1;
aaaaah->len = sizeof("a") - 1;
mystrcpy(aaaaah->value, "a");
return aaaaah;
}
Iterable* aaaaaaIterNext(void* iter){ 
Iterable* this=(Iterable*)iter;
if (((aaaaaaS*)this->c) != NULL) {
	void* aaaaai = this->value;
	this->value=((aaaaaaS*)this->c)->next(this->c);
	incRef(this->value);
	decRef(aaaaai);
	this->c=((aaaaaaS*)this->c)->eC;
	return this;
	}
else
	return NULL;
}
typedef struct aaaaab_struct {
	int nrefs; 
	int isIter; 
	int isStr; 
	void* forC;
	Iterable* iter;
	void* (*next)(void*);
	void* v;
}aaaaabS;
void* aaaaabF(void* c) {
aaaaabS* this= (aaaaabS*) c;
if (this->iter->value==NULL) {this->iter=iterGetNext(this->iter);}
if (this->iter->value==NULL) {return NULL;};

void*v=this->iter->value;
	 ((aaaaaeS*)this->forC)->v=v;
void* ret=((aaaaaeS*)this->forC)->next(this->forC);
if (ret==NULL){
	 this->iter=iterGetNext(this->iter);
v=this->iter->value;
	 ((aaaaaeS*)this->forC)->v=v;
return ((aaaaaeS*)this->forC)->next(this->forC);
}
return ret;
}
Iterable* aaaaabIterNext(void* iter){ 
Iterable* this=(Iterable*)iter;
if (((aaaaabS*)this->c) != NULL) {
	void* aaaaaj = this->value;
	this->value=((aaaaabS*)this->c)->next(this->c);
	incRef(this->value);
	decRef(aaaaaj);
	return this;
	}
else
	return NULL;
}


void* our_main()
{
void * d = NULL;






aaaaaeS* aaaaae;
aaaaae = (aaaaaeS*) x3malloc(sizeof(aaaaaeS));
aaaaae->nrefs = 1;
aaaaae->isIter = 0;
aaaaae->isStr = 0;
aaaaae->eC = NULL;
aaaaae->next = &aaaaaeF;
aaaaaaS* aaaaaa;
aaaaaa = (aaaaaaS*) x3malloc(sizeof(aaaaaaS));
aaaaaa->nrefs = 1;
aaaaaa->isIter = 0;
aaaaaa->isStr = 0;
aaaaaa->eC = NULL;
aaaaaa->next = &aaaaaaF;
Iterable* aaaaag;
aaaaag = (Iterable*) x3malloc(sizeof(Iterable));
aaaaag->isIter = 1;
aaaaag->nrefs = 0;
aaaaag->value = NULL;
aaaaag->c = aaaaaa;
aaaaag->additional = NULL;
aaaaag->next = &aaaaaaIterNext;
aaaaag->concat = NULL;
aaaaabS* aaaaab;
aaaaab = (aaaaabS*) x3malloc(sizeof(aaaaabS));
aaaaab->nrefs = 1;
aaaaab->isIter = 0;
aaaaab->isStr = 0;
aaaaab->forC = aaaaae;
aaaaab->iter = aaaaag;
aaaaab->next = &aaaaabF;
Iterable* aaaaaf;
aaaaaf = (Iterable*) x3malloc(sizeof(Iterable));
aaaaaf->isIter = 1;
aaaaaf->nrefs = 0;
aaaaaf->value = NULL;
aaaaaf->c = aaaaab;
aaaaaf->additional = NULL;
aaaaaf->next = &aaaaabIterNext;
aaaaaf->concat = NULL;
void * aaaaak = NULL;
aaaaak = d;
d = aaaaaf;
incRef(d);
decRef(aaaaak);






if (d!= NULL) {
(*(int *)d)--;
}
return d;
}


void cubex_main() {
Iterable* ourMain, *temp;
ourMain = (Iterable*) our_main();
temp = ourMain;
if (ourMain->c != NULL)
	ourMain = iterGetNext(ourMain);
while(ourMain != NULL) {
	print_line(((String*)ourMain->value)->value, ((String*)ourMain->value)->len);
	ourMain = iterGetNext(ourMain);
}
freeIter(temp);
}
