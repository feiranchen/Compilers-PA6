#include<stdio.h>
#include "cubex_main.h"
#include "cubex_external_functions.h"
#include "cubex_lib.h"

Iterable* input= NULL;
<<<<<<< HEAD
=======
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
>>>>>>> c89f8f04e3a6bee5b3590fb15a6aa8f5757dbf6d
void* aaaaadF(void*);
typedef struct aaaaad_struct {
	int nrefs; 
	int isIter; 
	int isStr; 
	int isEC; 
	int visited;
	void* eC;
	void* (*next)(void*);
<<<<<<< HEAD
	void* c;
}aaaaadS;
void* aaaaaaF(void*);
typedef struct aaaaaa_struct {
=======
}aaaaadS;
void* aaaaacF(void*);
typedef struct aaaaac_struct {
>>>>>>> c89f8f04e3a6bee5b3590fb15a6aa8f5757dbf6d
	int nrefs; 
	int isIter; 
	int isStr; 
	int isEC; 
	int visited;
<<<<<<< HEAD
	void* ifC;
	void* (*next)(void*);
	void* c;
}aaaaaaS;
Iterable* aaaaaaIterNext(void*);
=======
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
>>>>>>> c89f8f04e3a6bee5b3590fb15a6aa8f5757dbf6d

void* forever() {

<<<<<<< HEAD
void* aaaaadF(void* c) {
aaaaadS* this= (aaaaadS*) c;
void*c=this->c;
=======


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
>>>>>>> c89f8f04e3a6bee5b3590fb15a6aa8f5757dbf6d
if(this->visited){ 
	return NULL;
}else {
	this->visited=1; 
<<<<<<< HEAD
return c;
}
}
void* aaaaaaF(void* c) {
aaaaaaS* this= (aaaaaaS*) c;
void* c=this->c;
if (this->ifC!=NULL&&this->visited==0){	((aaaaadS*)this->ifC)->visited=0;}
this->visited=1; 
Boolean* aaaaah;
aaaaah = (Boolean *) x3malloc(sizeof(Boolean));
(aaaaah->nrefs) = 0;
aaaaah->value = 1;
if( aaaaah->value){
	return ((aaaaadS*)this->ifC)->next(this->ifC);
=======

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
if( aaaaav->value){
	return ((aaaaafS*)this->ifC)->next(this->ifC);
>>>>>>> c89f8f04e3a6bee5b3590fb15a6aa8f5757dbf6d
} 
else {
	return NULL;
}
}
<<<<<<< HEAD
Iterable* aaaaaaIterNext(void* iter){ 
Iterable* this=(Iterable*)iter;
if (((aaaaaaS*)this->c) != NULL) {
	void* aaaaai = this->value;
	this->value=((aaaaaaS*)this->c)->next(this->c);
	incRef(this->value);
	decRef(aaaaai);
=======
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
Iterable* aaaaacIterNext(void* iter){ 
Iterable* this=(Iterable*)iter;
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
Iterable* aaaaagIterNext(void* iter){ 
Iterable* this=(Iterable*)iter;
if (((aaaaagS*)this->c) != NULL) {
	void* aaaabf = this->value;
	this->value=((aaaaagS*)this->c)->next(this->c);
	incRef(this->value);
	decRef(aaaabf);
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
String* aaaabk;
aaaabk = (String *) x3malloc(sizeof(String));
(aaaabk->isIter) = 0;
aaaabk->value = (char*) x3malloc(sizeof("On strike with Spongebob... FOREVER?!?!"));
(aaaabk->nrefs) = 0;
(aaaabk->isStr) = 1;
aaaabk->len = sizeof("On strike with Spongebob... FOREVER?!?!") - 1;
mystrcpy(aaaabk->value, "On strike with Spongebob... FOREVER?!?!");
return aaaabk;
}
}
Iterable* aaaaahIterNext(void* iter){ 
Iterable* this=(Iterable*)iter;
if (((aaaaahS*)this->c) != NULL) {
	void* aaaabl = this->value;
	this->value=((aaaaahS*)this->c)->next(this->c);
	incRef(this->value);
	decRef(aaaabl);
>>>>>>> c89f8f04e3a6bee5b3590fb15a6aa8f5757dbf6d
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
<<<<<<< HEAD
void * b = NULL;






String* aaaaae;
aaaaae = (String *) x3malloc(sizeof(String));
(aaaaae->isIter) = 0;
aaaaae->value = (char*) x3malloc(sizeof("hello"));
(aaaaae->nrefs) = 0;
(aaaaae->isStr) = 1;
aaaaae->len = sizeof("hello") - 1;
mystrcpy(aaaaae->value, "hello");
void * aaaaaf = NULL;
aaaaaf = c;
c = aaaaae;
incRef(c);
decRef(aaaaaf);
=======
void * v = NULL;
>>>>>>> c89f8f04e3a6bee5b3590fb15a6aa8f5757dbf6d






<<<<<<< HEAD
=======
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
>>>>>>> c89f8f04e3a6bee5b3590fb15a6aa8f5757dbf6d
aaaaadS* aaaaad;
aaaaad = (aaaaadS*) x3malloc(sizeof(aaaaadS));
aaaaad->nrefs = 1;
aaaaad->isIter = 0;
aaaaad->isStr = 0;
aaaaad->isEC = 1;
<<<<<<< HEAD
aaaaad->eC = NULL;
aaaaad->next = &aaaaadF;
aaaaad->visited= 0;
aaaaad->c=c;
incRef(c);
aaaaaaS* aaaaaa;
aaaaaa = (aaaaaaS*) x3malloc(sizeof(aaaaaaS));
aaaaaa->nrefs = 1;
aaaaaa->isIter = 0;
aaaaaa->isStr = 0;
aaaaaa->isEC =0;
aaaaaa->ifC = aaaaad;
aaaaaa->next = &aaaaaaF;
aaaaaa->visited= 0;
aaaaaa->c=c;
incRef(c);
Iterable* aaaaag;
aaaaag = (Iterable*) x3malloc(sizeof(Iterable));
aaaaag->isIter = 1;
aaaaag->nrefs = 0;
aaaaag->value = NULL;
aaaaag->c = aaaaaa;
aaaaag->additional = NULL;
aaaaag->next = &aaaaaaIterNext;
aaaaag->concat = NULL;

void * aaaaaj = NULL;
aaaaaj = b;
b = aaaaag;
incRef(b);
decRef(aaaaaj);
decRef(c);









if (b!= NULL) {
(*(int *)b)--;
}
return b;
=======
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

void * aaaaaz = NULL;
aaaaaz = c;
c = aaaaat;
incRef(c);
decRef(aaaaaz);






void * aaaaba = NULL;
aaaaba = v;
v = c;
incRef(v);
decRef(aaaaba);
decRef(c);
	if (v!=NULL) {
		if ((*((int *)(v+1))) == 0) {
void * aaaabb = NULL;
aaaabb = v;
			v = strToIter( ((String *)v)->value, ((String *)v)->len);
incRef(v);
decRef(aaaabb);
		}
	}
if (v!=NULL) {
	if (((Iterable*)v)->c!=NULL) {
		Iterable *aaaabc = NULL;
		aaaabc = (Iterable *)x3malloc(sizeof(Iterable));
		((Iterable*)aaaabc)->nrefs = ((Iterable*)v)->nrefs;
		((Iterable*)aaaabc)->isIter = ((Iterable*)v)->isIter;
		((Iterable*)aaaabc)->isStr = ((Iterable*)v)->isStr;
		((Iterable*)aaaabc)->value = ((Iterable*)v)->value;
		((Iterable*)aaaabc)->c = ((Iterable*)v)->c;
		((Iterable*)aaaabc)->additional = ((Iterable*)v)->additional;
		((Iterable*)aaaabc)->next = ((Iterable*)v)->next;
		((Iterable*)aaaabc)->concat = ((Iterable*)v)->concat;
		incRef((((Iterable*)aaaabc)->c));
		v = iterGetNext(aaaabc);
		(*((int*)((Iterable*)aaaabc)->c+5)) = 0;
	}
}
	while (v!=NULL) {
Iterable * aaaaaj = NULL;
		aaaaaj = (Iterable *)v;
		incRef(aaaaaj);
void * aaaabd = NULL;
aaaabd = v;
		v = aaaaaj->value;
		incRef(v);
		decRef(aaaabd);
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
Iterable* aaaabe;
aaaabe = (Iterable*) x3malloc(sizeof(Iterable));
aaaabe->isIter = 1;
aaaabe->nrefs = 0;
aaaabe->value = NULL;
aaaabe->c = aaaaag;
aaaabe->additional = NULL;
aaaabe->next = &aaaaagIterNext;
aaaabe->concat = NULL;

decRef(v);
return aaaabe;



void * aaaabg = NULL;
aaaabg = aaaaak;
aaaaak = aaaaaj;
incRef(aaaaak);
decRef(aaaabg);
decRef(aaaaak);




void* aaaabh;
aaaabh = iterGetNext((void*) aaaaak);
void * aaaabi = NULL;
aaaabi = v;
v = aaaabh;
incRef(v);
decRef(aaaabi);
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
Iterable* aaaabj;
aaaabj = (Iterable*) x3malloc(sizeof(Iterable));
aaaabj->isIter = 1;
aaaabj->nrefs = 0;
aaaabj->value = NULL;
aaaabj->c = aaaaah;
aaaabj->additional = NULL;
aaaabj->next = &aaaaahIterNext;
aaaabj->concat = NULL;

return aaaabj;
>>>>>>> c89f8f04e3a6bee5b3590fb15a6aa8f5757dbf6d
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
