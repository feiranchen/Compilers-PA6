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
}aaaaaeS;
void* aaaaaeF(void* c) {
aaaaaeS* this= (aaaaaeS*) c;
String* aaaaag;
aaaaag = (String *) x3malloc(sizeof(String));
(aaaaag->isIter) = 0;
aaaaag->value = (char*) x3malloc(sizeof("world"));
(aaaaag->nrefs) = 0;
(aaaaag->isStr) = 1;
aaaaag->len = sizeof("world") - 1;
mystrcpy(aaaaag->value, "world");
return aaaaag;
}
typedef struct aaaaad_struct {
	int nrefs; 
	int isIter; 
	int isStr; 
	void* ifC;
	void* (*next)(void*);
	void* i;
}aaaaadS;
void* aaaaadF(void* c) {
aaaaadS* this= (aaaaadS*) c;
void* i=this->i;

Integer* aaaaah;
aaaaah = (Integer*) x3malloc(sizeof(Integer));
(aaaaah->nrefs) = 0;
aaaaah->value = 0;
Boolean* aaaaai = (Boolean*) x3malloc(sizeof(Boolean));
aaaaai->nrefs = 0;
aaaaai->value = ((*) i)->value > ((Integer*) aaaaah)->value;
x3free(aaaaah);
if( aaaaai){
	return ((aaaaaeS*)this->ifC)->next(this->ifC);
}
else {
	return NULL;
}
}
typedef struct aaaaaa_struct {
	int nrefs; 
	int isIter; 
	int isStr; 
	void* eC;
	void* (*next)(void*);
	void* i;
}aaaaaaS;
void* aaaaaaF(void* c) {
aaaaaaS* this= (aaaaaaS*) c;
void*i=this->i;
String* aaaaaj;
aaaaaj = (String *) x3malloc(sizeof(String));
(aaaaaj->isIter) = 0;
aaaaaj->value = (char*) x3malloc(sizeof("hello"));
(aaaaaj->nrefs) = 0;
(aaaaaj->isStr) = 1;
aaaaaj->len = sizeof("hello") - 1;
mystrcpy(aaaaaj->value, "hello");
return aaaaaj;
}
Iterable* aaaaaaIterNext(void* iter){ 
Iterable* this=(Iterable*)iter;
if (((aaaaaaS*)this->c) != NULL) {
	void* aaaaak = this->value;
	this->value=((aaaaaaS*)this->c)->next(this->c);
	incRef(this->value);
	decRef(aaaaak);
	this->c=((aaaaaaS*)this->c)->eC;
	return this;
	}
else
	return NULL;
}


void* our_main()
{
void * c = NULL;






aaaaaeS* aaaaae;
aaaaae = (aaaaaeS*) x3malloc(sizeof(aaaaaeS));
aaaaae->nrefs = 1;
aaaaae->isIter = 0;
aaaaae->isStr = 0;
aaaaae->eC = NULL;
aaaaae->next = &aaaaaeF;
aaaaadS* aaaaad;
aaaaad = (aaaaadS*) x3malloc(sizeof(aaaaadS));
aaaaad->nrefs = 1;
aaaaad->isIter = 0;
aaaaad->isStr = 0;
aaaaad->ifC = aaaaae;
aaaaad->next = &aaaaadF;
aaaaad->i=i;
incRef(i);
aaaaaaS* aaaaaa;
aaaaaa = (aaaaaaS*) x3malloc(sizeof(aaaaaaS));
aaaaaa->nrefs = 1;
aaaaaa->isIter = 0;
aaaaaa->isStr = 0;
aaaaaa->eC = aaaaad;
aaaaaa->next = &aaaaaaF;
aaaaaa->i=i;
incRef(i);
Iterable* aaaaaf;
aaaaaf = (Iterable*) x3malloc(sizeof(Iterable));
aaaaaf->isIter = 1;
aaaaaf->nrefs = 0;
aaaaaf->value = NULL;
aaaaaf->c = aaaaaa;
aaaaaf->additional = NULL;
aaaaaf->next = &aaaaaaIterNext;
aaaaaf->concat = NULL;
void * aaaaal = NULL;
aaaaal = c;
c = aaaaaf;
incRef(c);
decRef(aaaaal);
decRef(i);






if (c!= NULL) {
(*(int *)c)--;
}
return c;
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
