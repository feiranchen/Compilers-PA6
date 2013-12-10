#include<stdio.h>
#include "cubex_main.h"
#include "cubex_external_functions.h"
#include "cubex_lib.h"

Iterable* input= NULL;
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
void* aaaaaeF(void*);
typedef struct aaaaae_struct {
	int nrefs; 
	int isIter; 
	int isStr; 
	int isEC; 
	int visited;
	void* ifC;
	void* (*next)(void*);
}aaaaaeS;
void* aaaaadF(void*);
typedef struct aaaaad_struct {
	int nrefs; 
	int isIter; 
	int isStr; 
	int isEC; 
	int visited;
	void* eC;
	void* (*next)(void*);
}aaaaadS;
void* aaaaacF(void*);
typedef struct aaaaac_struct {
	int nrefs; 
	int isIter; 
	int isStr; 
	int isEC; 
	int visited;
	void* eC;
	void* (*next)(void*);
}aaaaacS;
Iterable* aaaaacIterNext(void*);
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
Iterable* aaaaagIterNext(void*);
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

void* forever() {



void * x = NULL;
void * aaaaai = NULL;






Integer* aaaaal;
aaaaal = (Integer*) x3malloc(sizeof(Integer));
(aaaaal->nrefs) = 0;
aaaaal->value = 0;
void * aaaaam = NULL;
aaaaam = x;
x = aaaaal;
incRef(x);
decRef(aaaaam);






Boolean* aaaaan;
aaaaan = (Boolean *) x3malloc(sizeof(Boolean));
(aaaaan->nrefs) = 0;
aaaaan->value = 1;
void * aaaaao = NULL;
aaaaao = aaaaai;
aaaaai = aaaaan;
incRef(aaaaai);
decRef(aaaaao);



while (((Boolean *)aaaaai)->value) {
decRef(aaaaai);






void * aaaaap = NULL;
aaaaap = x;
x = x;
incRef(x);
decRef(aaaaap);



Boolean* aaaaaq;
aaaaaq = (Boolean *) x3malloc(sizeof(Boolean));
(aaaaaq->nrefs) = 0;
aaaaaq->value = 1;
void * aaaaar = NULL;
aaaaar = aaaaai;
aaaaai = aaaaaq;
incRef(aaaaai);
decRef(aaaaar);
}
decRef(x);
decRef(aaaaai);






String* aaaaas;
aaaaas = (String *) x3malloc(sizeof(String));
(aaaaas->isIter) = 0;
aaaaas->value = (char*) x3malloc(sizeof("FOREVER!!! FOREVER!!!"));
(aaaaas->nrefs) = 0;
(aaaaas->isStr) = 1;
aaaaas->len = sizeof("FOREVER!!! FOREVER!!!") - 1;
mystrcpy(aaaaas->value, "FOREVER!!! FOREVER!!!");
return aaaaas;
}

void* aaaaafF(void* c) {
aaaaafS* this= (aaaaafS*) c;
if(this->visited){ 
	return NULL;
}else {
	this->visited=1; 

void* aaaaau;
aaaaau = forever();
return aaaaau;
}
}
void* aaaaaeF(void* c) {
aaaaaeS* this= (aaaaaeS*) c;
if (this->ifC!=NULL&&this->visited==0){	((aaaaafS*)this->ifC)->visited=0;}
this->visited=1; 
Boolean* aaaaav;
aaaaav = (Boolean *) x3malloc(sizeof(Boolean));
(aaaaav->nrefs) = 0;
aaaaav->value = 1;
if( ((Boolean *)aaaaav)->value){
	return ((aaaaafS*)this->ifC)->next(this->ifC);
} 
else {
	return NULL;
}
}
void* aaaaadF(void* c) {
aaaaadS* this= (aaaaadS*) c;
if(this->visited){ 
	return ((aaaaaeS*)this->eC)->next(this->eC);
}else {
	this->visited=1; 
((aaaaaeS*)this->eC)->visited=0;

void* aaaaaw;
aaaaaw = forever();
return aaaaaw;
}
}
void* aaaaacF(void* c) {
aaaaacS* this= (aaaaacS*) c;
if(this->visited){ 
	return ((aaaaadS*)this->eC)->next(this->eC);
}else {
	this->visited=1; 
((aaaaadS*)this->eC)->visited=0;
String* aaaaax;
aaaaax = (String *) x3malloc(sizeof(String));
(aaaaax->isIter) = 0;
aaaaax->value = (char*) x3malloc(sizeof("Me and Squidward are gonna stay on strike..."));
(aaaaax->nrefs) = 0;
(aaaaax->isStr) = 1;
aaaaax->len = sizeof("Me and Squidward are gonna stay on strike...") - 1;
mystrcpy(aaaaax->value, "Me and Squidward are gonna stay on strike...");
return aaaaax;
}
}
Iterable* aaaaacIterNext(void* aaaaaz){ 
Iterable* this=(Iterable*)aaaaaz;
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
void* aaaaagF(void* c) {
aaaaagS* this= (aaaaagS*) c;
void*v=this->v;
if(this->visited){ 
	return NULL;
}else {
	this->visited=1; 
return v;
}
}
Iterable* aaaaagIterNext(void* aaaabh){ 
Iterable* this=(Iterable*)aaaabh;
if (((aaaaagS*)this->c) != NULL) {
	void* aaaabg = this->value;
	this->value=((aaaaagS*)this->c)->next(this->c);
	incRef(this->value);
	decRef(aaaabg);
	if(this->value)
		return this;
	else
		return NULL;
}
else
	return NULL;
}
void* aaaaahF(void* c) {
aaaaahS* this= (aaaaahS*) c;
if(this->visited){ 
	return NULL;
}else {
	this->visited=1; 
String* aaaabm;
aaaabm = (String *) x3malloc(sizeof(String));
(aaaabm->isIter) = 0;
aaaabm->value = (char*) x3malloc(sizeof("On strike with Spongebob... FOREVER?!?!"));
(aaaabm->nrefs) = 0;
(aaaabm->isStr) = 1;
aaaabm->len = sizeof("On strike with Spongebob... FOREVER?!?!") - 1;
mystrcpy(aaaabm->value, "On strike with Spongebob... FOREVER?!?!");
return aaaabm;
}
}
Iterable* aaaaahIterNext(void* aaaabo){ 
Iterable* this=(Iterable*)aaaabo;
if (((aaaaahS*)this->c) != NULL) {
	void* aaaabn = this->value;
	this->value=((aaaaahS*)this->c)->next(this->c);
	incRef(this->value);
	decRef(aaaabn);
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
void * c = NULL;
void * v = NULL;






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
aaaaae->isEC =0;
aaaaae->ifC = aaaaaf;
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
Iterable* aaaaat;
aaaaat = (Iterable*) x3malloc(sizeof(Iterable));
aaaaat->isIter = 1;
aaaaat->nrefs = 0;
aaaaat->value = NULL;
aaaaat->c = aaaaac;
aaaaat->additional = NULL;
aaaaat->next = &aaaaacIterNext;
aaaaat->concat = NULL;

void * aaaaba = NULL;
aaaaba = c;
c = aaaaat;
incRef(c);
decRef(aaaaba);






void * aaaabb = NULL;
aaaabb = v;
v = c;
incRef(v);
decRef(aaaabb);
decRef(c);
	if (v!=NULL) {
		if ((*((int *)(v+1))) == 0) {
void * aaaabc = NULL;
aaaabc = v;
			v = strToIter( ((String *)v)->value, ((String *)v)->len);
incRef(v);
decRef(aaaabc);
		}
	}
if (v!=NULL) {
	if (((Iterable*)v)->c!=NULL) {
		Iterable *aaaabd = NULL;
		aaaabd = (Iterable *)x3malloc(sizeof(Iterable));
		((Iterable*)aaaabd)->nrefs = ((Iterable*)v)->nrefs;
		((Iterable*)aaaabd)->isIter = ((Iterable*)v)->isIter;
		((Iterable*)aaaabd)->isStr = ((Iterable*)v)->isStr;
		((Iterable*)aaaabd)->value = ((Iterable*)v)->value;
		((Iterable*)aaaabd)->c = ((Iterable*)v)->c;
		((Iterable*)aaaabd)->additional = ((Iterable*)v)->additional;
		((Iterable*)aaaabd)->next = ((Iterable*)v)->next;
		((Iterable*)aaaabd)->concat = ((Iterable*)v)->concat;
		incRef((((Iterable*)aaaabd)->c));
		v = iterGetNext(aaaabd);
		(*((int*)((Iterable*)aaaabd)->c+5)) = 0;
	}
}
	while (v!=NULL) {
Iterable * aaaaaj = NULL;
		aaaaaj = (Iterable *)v;
		incRef(aaaaaj);
void * aaaabe = NULL;
aaaabe = v;
		v = aaaaaj->value;
		incRef(v);
		decRef(aaaabe);
decRef(aaaaaj);
		


void * aaaaak = NULL;



aaaaagS* aaaaag;
aaaaag = (aaaaagS*) x3malloc(sizeof(aaaaagS));
aaaaag->nrefs = 1;
aaaaag->isIter = 0;
aaaaag->isStr = 0;
aaaaag->isEC = 1;
aaaaag->eC = NULL;
aaaaag->next = &aaaaagF;
aaaaag->visited= 0;
aaaaag->v=v;
incRef(v);
Iterable* aaaabf;
aaaabf = (Iterable*) x3malloc(sizeof(Iterable));
aaaabf->isIter = 1;
aaaabf->nrefs = 0;
aaaabf->value = NULL;
aaaabf->c = aaaaag;
aaaabf->additional = NULL;
aaaabf->next = &aaaaagIterNext;
aaaabf->concat = NULL;

decRef(v);
return aaaabf;



void * aaaabi = NULL;
aaaabi = aaaaak;
aaaaak = aaaaaj;
incRef(aaaaak);
decRef(aaaabi);
decRef(aaaaak);




void* aaaabj;
aaaabj = iterGetNext((void*) aaaaak);
void * aaaabk = NULL;
aaaabk = v;
v = aaaabj;
incRef(v);
decRef(aaaabk);
decRef(v);
	}
decRef(v);






aaaaahS* aaaaah;
aaaaah = (aaaaahS*) x3malloc(sizeof(aaaaahS));
aaaaah->nrefs = 1;
aaaaah->isIter = 0;
aaaaah->isStr = 0;
aaaaah->isEC = 1;
aaaaah->eC = NULL;
aaaaah->next = &aaaaahF;
aaaaah->visited= 0;
Iterable* aaaabl;
aaaabl = (Iterable*) x3malloc(sizeof(Iterable));
aaaabl->isIter = 1;
aaaabl->nrefs = 0;
aaaabl->value = NULL;
aaaabl->c = aaaaah;
aaaabl->additional = NULL;
aaaabl->next = &aaaaahIterNext;
aaaabl->concat = NULL;

return aaaabl;
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
