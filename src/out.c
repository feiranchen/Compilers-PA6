#include<stdio.h>
#include "cubex_main.h"
#include "cubex_external_functions.h"
#include "cubex_lib.h"

typedef struct aaaaad_struct {
	int nrefs; 
	int isIter; 
	int isStr; 
	int isEC; 
	void* eC;
	void* (*next)(void*);
}aaaaadS;
void* aaaaadF(void* c) {
aaaaadS* this= (aaaaadS*) c;
Integer* aaaaai;
aaaaai = (Integer*) x3malloc(sizeof(Integer));
(aaaaai->nrefs) = 0;
aaaaai->value = 7;
return aaaaai;
}
typedef struct aaaaac_struct {
	int nrefs; 
	int isIter; 
	int isStr; 
	int isEC; 
	void* eC;
	void* (*next)(void*);
	void* i;
}aaaaacS;
void* aaaaacF(void* c) {
aaaaacS* this= (aaaaacS*) c;
void*i=this->i;

Integer* aaaaak;
aaaaak = (Integer*) x3malloc(sizeof(Integer));
(aaaaak->nrefs) = 0;
aaaaak->value = 6;
Integer* aaaaaj;
aaaaaj  = (Integer*) x3malloc(sizeof(Integer));
aaaaaj->nrefs = 0;
aaaaaj->value=((Integer*)aaaaak)->value + ((Integer*)i)->value;
x3free(aaaaak);
return aaaaaj;
}
Iterable* aaaaacIterNext(void* iter){ 
Iterable* this=(Iterable*)iter;
if (((aaaaacS*)this->c) != NULL) {
	void* aaaaal = this->value;
	this->value=((aaaaacS*)this->c)->next(this->c);
	incRef(this->value);
	decRef(aaaaal);
	this->c=((aaaaacS*)this->c)->eC;
	return this;
	}
else
	return NULL;
}


void* our_main()
{
void * i = NULL;
void * c = NULL;
void * ret = NULL;



Integer* aaaaaf;
aaaaaf = (Integer*) x3malloc(sizeof(Integer));
(aaaaaf->nrefs) = 0;
aaaaaf->value = 1;
void * aaaaag = NULL;
aaaaag = i;
i = aaaaaf;
incRef(i);
decRef(aaaaag);



aaaaadS* aaaaad;
aaaaad = (aaaaadS*) x3malloc(sizeof(aaaaadS));
aaaaad->nrefs = 1;
aaaaad->isIter = 0;
aaaaad->isStr = 0;
aaaaad->isEC = 1;
aaaaad->eC = NULL;
aaaaad->next = &aaaaadF;
aaaaacS* aaaaac;
aaaaac = (aaaaacS*) x3malloc(sizeof(aaaaacS));
aaaaac->nrefs = 1;
aaaaac->isIter = 0;
aaaaac->isStr = 0;
aaaaac->isEC = 1;
aaaaac->eC = aaaaad;
aaaaac->next = &aaaaacF;
aaaaac->i=i;
incRef(i);
Iterable* aaaaah;
aaaaah = (Iterable*) x3malloc(sizeof(Iterable));
aaaaah->isIter = 1;
aaaaah->nrefs = 0;
aaaaah->value = NULL;
aaaaah->c = aaaaac;
aaaaah->additional = NULL;
aaaaah->next = &aaaaacIterNext;
aaaaah->concat = NULL;
void * aaaaam = NULL;
aaaaam = c;
c = aaaaah;
incRef(c);
decRef(aaaaam);



NULLvoid * aaaaao = NULL;
aaaaao = ret;
ret = NULL;
incRef(ret);
decRef(aaaaao);



if (ret!= NULL) {
(*(int *)ret)--;
}
return ret;
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
