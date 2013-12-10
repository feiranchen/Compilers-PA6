#include<stdio.h>
#include "cubex_main.h"
#include "cubex_external_functions.h"
#include "cubex_lib.h"

typedef struct aaaaad_struct {
	int nrefs; 
	int isIter; 
	int isStr; 
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
typedef struct aaaaae_struct {
	int nrefs; 
	int isIter; 
	int isStr; 
	void* eC;
	void* (*next)(void*);
}aaaaaeS;
void* aaaaaeF(void* c) {
aaaaaeS* this= (aaaaaeS*) c;
String* aaaaan;
aaaaan = (String *) x3malloc(sizeof(String));
(aaaaan->isIter) = 0;
aaaaan->value = (char*) x3malloc(sizeof("faehi"));
(aaaaan->nrefs) = 0;
(aaaaan->isStr) = 1;
aaaaan->len = sizeof("faehi") - 1;
mystrcpy(aaaaan->value, "faehi");
return aaaaan;
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



aaaaadS* aaaaad;
aaaaad = (aaaaadS*) x3malloc(sizeof(aaaaadS));
aaaaad->nrefs = 1;
aaaaad->isIter = 0;
aaaaad->isStr = 0;
aaaaad->eC = NULL;
aaaaad->next = aaaaadF;
aaaaacS* aaaaac;
aaaaac = (aaaaacS*) x3malloc(sizeof(aaaaacS));
aaaaac->nrefs = 1;
aaaaac->isIter = 0;
aaaaac->isStr = 0;
aaaaac->eC = &aaaaad;
aaaaac->next = aaaaacF;
aaaaac->i=i;
Iterable* aaaaah;
aaaaah = (Iterable*) x3malloc(sizeof(Iterable));
aaaaah->isIter = 1;
aaaaah->nrefs = 0;
aaaaah->value = NULL;
aaaaah->c = aaaaac;
aaaaah->additional = NULL;
aaaaah->next = &aaaaacF;
aaaaah->concat = NULL;
void * aaaaal = NULL;
aaaaal = c;
c = aaaaah;
incRef(c);
decRef(aaaaal);



aaaaaeS* aaaaae;
aaaaae = (aaaaaeS*) x3malloc(sizeof(aaaaaeS));
aaaaae->nrefs = 1;
aaaaae->isIter = 0;
aaaaae->isStr = 0;
aaaaae->eC = NULL;
aaaaae->next = aaaaaeF;
Iterable* aaaaam;
aaaaam = (Iterable*) x3malloc(sizeof(Iterable));
aaaaam->isIter = 1;
aaaaam->nrefs = 0;
aaaaam->value = NULL;
aaaaam->c = aaaaae;
aaaaam->additional = NULL;
aaaaam->next = &aaaaaeF;
aaaaam->concat = NULL;
return aaaaam;
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
