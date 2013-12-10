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
	void* i;
}aaaaaeS;
void* aaaaaeF(void* c) {
aaaaaeS* this= (aaaaaeS*) c;
void*i=this->i;
return i;
}
typedef struct aaaaad_struct {
	int nrefs; 
	int isIter; 
	int isStr; 
	void* ifC;
	void* (*next)(void*);
	void* i;
	void* i;
}aaaaadS;
void* aaaaadF(void* c) {
aaaaadS* this= (aaaaadS*) c;
i=this->i;
i=this->i;

Integer* aaaaak;
aaaaak = (Integer*) x3malloc(sizeof(Integer));
(aaaaak->nrefs) = 0;
aaaaak->value = 2;
Boolean* aaaaal = (Boolean*) x3malloc(sizeof(Boolean));
aaaaal->nrefs = 0;
aaaaal->value = ((Integer*) i)->value > ((Integer*) aaaaak)->value;
x3free(aaaaak);
if( aaaaal){
	return ifC->next(forC);
}
else {
	return NULL;
}
typedef struct aaaaac_struct {
	int nrefs; 
	int isIter; 
	int isStr; 
	void* eC;
	void* (*next)(void*);
	void* i;
	void* i;
	void* i;
}aaaaacS;
void* aaaaacF(void* c) {
aaaaacS* this= (aaaaacS*) c;
void*i=this->i;
void*i=this->i;
void*i=this->i;

Integer* aaaaan;
aaaaan = (Integer*) x3malloc(sizeof(Integer));
(aaaaan->nrefs) = 0;
aaaaan->value = 6;
Integer* aaaaam;
aaaaam  = (Integer*) x3malloc(sizeof(Integer));
aaaaam->nrefs = 0;
aaaaam->value=((Integer*)aaaaan)->value + ((Integer*)i)->value;
x3free(aaaaan);
return aaaaam;
}
typedef struct aaaaag_struct {
	int nrefs; 
	int isIter; 
	int isStr; 
	void* eC;
	void* (*next)(void*);
}aaaaagS;
void* aaaaagF(void* c) {
aaaaagS* this= (aaaaagS*) c;
String* aaaaaq;
aaaaaq = (String *) x3malloc(sizeof(String));
(aaaaaq->isIter) = 0;
aaaaaq->value = (char*) x3malloc(sizeof("out"));
(aaaaaq->nrefs) = 0;
(aaaaaq->isStr) = 1;
aaaaaq->len = sizeof("out") - 1;
mystrcpy(aaaaaq->value, "out");
return aaaaaq;
}
typedef struct aaaaaf_struct {
	int nrefs; 
	int isIter; 
	int isStr; 
	void* eC;
	void* (*next)(void*);
}aaaaafS;
void* aaaaafF(void* c) {
aaaaafS* this= (aaaaafS*) c;
String* aaaaar;
aaaaar = (String *) x3malloc(sizeof(String));
(aaaaar->isIter) = 0;
aaaaar->value = (char*) x3malloc(sizeof("faehi"));
(aaaaar->nrefs) = 0;
(aaaaar->isStr) = 1;
aaaaar->len = sizeof("faehi") - 1;
mystrcpy(aaaaar->value, "faehi");
return aaaaar;
}


void* our_main()
{
void * i = NULL;
void * c = NULL;



Integer* aaaaah;
aaaaah = (Integer*) x3malloc(sizeof(Integer));
(aaaaah->nrefs) = 0;
aaaaah->value = 1;
void * aaaaai = NULL;
aaaaai = i;
i = aaaaah;
incRef(i);
decRef(aaaaai);



aaaaaeS* aaaaae;
aaaaae = (aaaaaeS*) x3malloc(sizeof(aaaaaeS));
aaaaae->nrefs = 1;
aaaaae->isIter = 0;
aaaaae->isStr = 0;
aaaaae->eC = NULL;
aaaaae->next = &aaaaaeF;
aaaaae->i=i;
aaaaadS* aaaaad;
aaaaad = (aaaaadS*) x3malloc(sizeof(aaaaadS));
aaaaad->nrefs = 1;
aaaaad->isIter = 0;
aaaaad->isStr = 0;
aaaaad->ifC = &aaaaae;
aaaaad->next = &aaaaadF;
aaaaad->i=i;
aaaaad->i=i;
aaaaacS* aaaaac;
aaaaac = (aaaaacS*) x3malloc(sizeof(aaaaacS));
aaaaac->nrefs = 1;
aaaaac->isIter = 0;
aaaaac->isStr = 0;
aaaaac->eC = &aaaaad;
aaaaac->next = &aaaaacF;
aaaaac->i=i;
aaaaac->i=i;
aaaaac->i=i;
Iterable* aaaaaj;
aaaaaj = (Iterable*) x3malloc(sizeof(Iterable));
aaaaaj->isIter = 1;
aaaaaj->nrefs = 0;
aaaaaj->value = NULL;
aaaaaj->c = aaaaac;
aaaaaj->additional = NULL;
aaaaaj->next = &aaaaacF;
aaaaaj->concat = NULL;
void * aaaaao = NULL;
aaaaao = c;
c = aaaaaj;
incRef(c);
decRef(aaaaao);



aaaaagS* aaaaag;
aaaaag = (aaaaagS*) x3malloc(sizeof(aaaaagS));
aaaaag->nrefs = 1;
aaaaag->isIter = 0;
aaaaag->isStr = 0;
aaaaag->eC = NULL;
aaaaag->next = &aaaaagF;
aaaaafS* aaaaaf;
aaaaaf = (aaaaafS*) x3malloc(sizeof(aaaaafS));
aaaaaf->nrefs = 1;
aaaaaf->isIter = 0;
aaaaaf->isStr = 0;
aaaaaf->eC = &aaaaag;
aaaaaf->next = &aaaaafF;
Iterable* aaaaap;
aaaaap = (Iterable*) x3malloc(sizeof(Iterable));
aaaaap->isIter = 1;
aaaaap->nrefs = 0;
aaaaap->value = NULL;
aaaaap->c = aaaaaf;
aaaaap->additional = NULL;
aaaaap->next = &aaaaafF;
aaaaap->concat = NULL;
return aaaaap;
}


void cubex_main() {
Iterable* ourMain, *temp;
ourMain = (Iterable*) our_main();
temp = ourMain;
while(ourMain != NULL) {
	print_line(((String*)ourMain->value)->value, ((String*)ourMain->value)->len);
	ourMain = iterGetNext(ourMain);
}
freeIter(temp);
}
