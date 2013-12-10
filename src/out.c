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
String* aaaaai;
aaaaai = (String *) x3malloc(sizeof(String));
(aaaaai->isIter) = 0;
aaaaai->value = (char*) x3malloc(sizeof("world"));
(aaaaai->nrefs) = 0;
(aaaaai->isStr) = 1;
aaaaai->len = sizeof("world") - 1;
mystrcpy(aaaaai->value, "world");
return aaaaai;
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

Integer* aaaaaj;
aaaaaj = (Integer*) x3malloc(sizeof(Integer));
(aaaaaj->nrefs) = 0;
aaaaaj->value = 2;
Boolean* aaaaak = (Boolean*) x3malloc(sizeof(Boolean));
aaaaak->nrefs = 0;
aaaaak->value = ((Integer*) i)->value > ((Integer*) aaaaaj)->value;
x3free(aaaaaj);
if( aaaaak->value){
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
String* aaaaal;
aaaaal = (String *) x3malloc(sizeof(String));
(aaaaal->isIter) = 0;
aaaaal->value = (char*) x3malloc(sizeof("hello"));
(aaaaal->nrefs) = 0;
(aaaaal->isStr) = 1;
aaaaal->len = sizeof("hello") - 1;
mystrcpy(aaaaal->value, "hello");
return aaaaal;
}
Iterable* aaaaaaIterNext(void* iter){ 
Iterable* this=(Iterable*)iter;
if (((aaaaaaS*)this->c) != NULL) {
	void* aaaaam = this->value;
	this->value=((aaaaaaS*)this->c)->next(this->c);
	incRef(this->value);
	decRef(aaaaam);
	this->c=((aaaaaaS*)this->c)->eC;
	return this;
	}
else
	return NULL;
}


void* our_main()
{
void * i = NULL;
void * c = NULL;






Integer* aaaaaf;
aaaaaf = (Integer*) x3malloc(sizeof(Integer));
(aaaaaf->nrefs) = 0;
aaaaaf->value = 1;
void * aaaaag = NULL;
aaaaag = i;
i = aaaaaf;
incRef(i);
decRef(aaaaag);






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
Iterable* aaaaah;
aaaaah = (Iterable*) x3malloc(sizeof(Iterable));
aaaaah->isIter = 1;
aaaaah->nrefs = 0;
aaaaah->value = NULL;
aaaaah->c = aaaaaa;
aaaaah->additional = NULL;
aaaaah->next = &aaaaaaIterNext;
aaaaah->concat = NULL;
void * aaaaan = NULL;
aaaaan = c;
c = aaaaah;
incRef(c);
decRef(aaaaan);
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
