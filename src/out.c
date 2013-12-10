#include<stdio.h>
#include "cubex_main.h"
#include "cubex_external_functions.h"
#include "cubex_lib.h"

<<<<<<< HEAD
=======
typedef struct aaaaai_struct {
	int nrefs; 
	int isIter; 
	int isStr; 
	void* eC;
	void* (*next)(void*);
	void* v;
}aaaaaiS;
void* aaaaaiF(void* c) {
aaaaaiS* this= (aaaaaiS*) c;
void*v=this->v;
return v;
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
aaaaan->value = (char*) x3malloc(sizeof("d"));
(aaaaan->nrefs) = 0;
(aaaaan->isStr) = 1;
aaaaan->len = sizeof("d") - 1;
mystrcpy(aaaaan->value, "d");
return aaaaan;
}
>>>>>>> 9302859e262f79cd9b2026e5e0b4022749c8f678
typedef struct aaaaad_struct {
	int nrefs; 
	int isIter; 
	int isStr; 
<<<<<<< HEAD
	int isEC; 
=======
>>>>>>> 9302859e262f79cd9b2026e5e0b4022749c8f678
	void* eC;
	void* (*next)(void*);
}aaaaadS;
void* aaaaadF(void* c) {
aaaaadS* this= (aaaaadS*) c;
<<<<<<< HEAD
Integer* aaaaai;
aaaaai = (Integer*) x3malloc(sizeof(Integer));
(aaaaai->nrefs) = 0;
aaaaai->value = 7;
return aaaaai;
=======
String* aaaaao;
aaaaao = (String *) x3malloc(sizeof(String));
(aaaaao->isIter) = 0;
aaaaao->value = (char*) x3malloc(sizeof("c"));
(aaaaao->nrefs) = 0;
(aaaaao->isStr) = 1;
aaaaao->len = sizeof("c") - 1;
mystrcpy(aaaaao->value, "c");
return aaaaao;
>>>>>>> 9302859e262f79cd9b2026e5e0b4022749c8f678
}
typedef struct aaaaac_struct {
	int nrefs; 
	int isIter; 
	int isStr; 
	void* eC;
	void* (*next)(void*);
}aaaaacS;
void* aaaaacF(void* c) {
aaaaacS* this= (aaaaacS*) c;
<<<<<<< HEAD
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
=======
String* aaaaap;
aaaaap = (String *) x3malloc(sizeof(String));
(aaaaap->isIter) = 0;
aaaaap->value = (char*) x3malloc(sizeof("b"));
(aaaaap->nrefs) = 0;
(aaaaap->isStr) = 1;
aaaaap->len = sizeof("b") - 1;
mystrcpy(aaaaap->value, "b");
return aaaaap;
}
typedef struct aaaaab_struct {
	int nrefs; 
	int isIter; 
	int isStr; 
	void* eC;
	void* (*next)(void*);
}aaaaabS;
void* aaaaabF(void* c) {
aaaaabS* this= (aaaaabS*) c;
String* aaaaaq;
aaaaaq = (String *) x3malloc(sizeof(String));
(aaaaaq->isIter) = 0;
aaaaaq->value = (char*) x3malloc(sizeof("a"));
(aaaaaq->nrefs) = 0;
(aaaaaq->isStr) = 1;
aaaaaq->len = sizeof("a") - 1;
mystrcpy(aaaaaq->value, "a");
return aaaaaq;
}
Iterable* aaaaabIterNext(void* iter){ 
Iterable* this=(Iterable*)iter;
if (((aaaaabS*)this->c) != NULL) {
	void* aaaaar = this->value;
	this->value=((aaaaabS*)this->c)->next(this->c);
	incRef(this->value);
	decRef(aaaaar);
	this->c=((aaaaabS*)this->c)->eC;
	return this;
	}
else
	return NULL;
}
typedef struct aaaaaf_struct {
	int nrefs; 
	int isIter; 
	int isStr; 
	void* forC;
	Iterable* iter;
	void* (*next)(void*);
	void* v;
}aaaaafS;
void* aaaaafF(void* c) {
aaaaafS* this= (aaaaafS*) c;
if (this->iter->value==NULL) return NULL;
void*v=this->iter->value;
	 ((aaaaaiS*)this->forC)->v=v;
void* ret=((aaaaaiS*)this->forC)->next(this->forC);
if (ret==NULL){
	 this->iter=this->iter->next(this->iter);
v=this->iter->value;
	 ((aaaaaiS*)this->forC)->v=v;
return ((aaaaaiS*)this->forC)->next(this->forC);
}
return ret;
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
String* aaaaas;
aaaaas = (String *) x3malloc(sizeof(String));
(aaaaas->isIter) = 0;
aaaaas->value = (char*) x3malloc(sizeof("haha"));
(aaaaas->nrefs) = 0;
(aaaaas->isStr) = 1;
aaaaas->len = sizeof("haha") - 1;
mystrcpy(aaaaas->value, "haha");
return aaaaas;
}
Iterable* aaaaaaIterNext(void* iter){ 
Iterable* this=(Iterable*)iter;
if (((aaaaaaS*)this->c) != NULL) {
	void* aaaaat = this->value;
	this->value=((aaaaaaS*)this->c)->next(this->c);
	incRef(this->value);
	decRef(aaaaat);
	this->c=((aaaaaaS*)this->c)->eC;
>>>>>>> 9302859e262f79cd9b2026e5e0b4022749c8f678
	return this;
	}
else
	return NULL;
}


void* our_main()
{
void * i = NULL;
<<<<<<< HEAD
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



=======
void * d = NULL;



Integer* aaaaaj;
aaaaaj = (Integer*) x3malloc(sizeof(Integer));
(aaaaaj->nrefs) = 0;
aaaaaj->value = 1;
void * aaaaak = NULL;
aaaaak = i;
i = aaaaaj;
incRef(i);
decRef(aaaaak);



aaaaaiS* aaaaai;
aaaaai = (aaaaaiS*) x3malloc(sizeof(aaaaaiS));
aaaaai->nrefs = 1;
aaaaai->isIter = 0;
aaaaai->isStr = 0;
aaaaai->eC = NULL;
aaaaai->next = &aaaaaiF;
aaaaaeS* aaaaae;
aaaaae = (aaaaaeS*) x3malloc(sizeof(aaaaaeS));
aaaaae->nrefs = 1;
aaaaae->isIter = 0;
aaaaae->isStr = 0;
aaaaae->eC = NULL;
aaaaae->next = &aaaaaeF;
>>>>>>> 9302859e262f79cd9b2026e5e0b4022749c8f678
aaaaadS* aaaaad;
aaaaad = (aaaaadS*) x3malloc(sizeof(aaaaadS));
aaaaad->nrefs = 1;
aaaaad->isIter = 0;
aaaaad->isStr = 0;
<<<<<<< HEAD
aaaaad->isEC = 1;
aaaaad->eC = NULL;
=======
aaaaad->eC = aaaaae;
>>>>>>> 9302859e262f79cd9b2026e5e0b4022749c8f678
aaaaad->next = &aaaaadF;
aaaaacS* aaaaac;
aaaaac = (aaaaacS*) x3malloc(sizeof(aaaaacS));
aaaaac->nrefs = 1;
aaaaac->isIter = 0;
aaaaac->isStr = 0;
aaaaac->eC = aaaaad;
aaaaac->next = &aaaaacF;
<<<<<<< HEAD
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
=======
aaaaabS* aaaaab;
aaaaab = (aaaaabS*) x3malloc(sizeof(aaaaabS));
aaaaab->nrefs = 1;
aaaaab->isIter = 0;
aaaaab->isStr = 0;
aaaaab->eC = aaaaac;
aaaaab->next = &aaaaabF;
Iterable* aaaaam;
aaaaam = (Iterable*) x3malloc(sizeof(Iterable));
aaaaam->isIter = 1;
aaaaam->nrefs = 0;
aaaaam->value = NULL;
aaaaam->c = aaaaab;
aaaaam->additional = NULL;
aaaaam->next = &aaaaabIterNext;
aaaaam->concat = NULL;
aaaaafS* aaaaaf;
aaaaaf = (aaaaafS*) x3malloc(sizeof(aaaaafS));
aaaaaf->nrefs = 1;
aaaaaf->isIter = 0;
aaaaaf->isStr = 0;
aaaaaf->forC = aaaaai;
aaaaaf->iter = aaaaam;
aaaaaf->next = &aaaaafF;
aaaaaaS* aaaaaa;
aaaaaa = (aaaaaaS*) x3malloc(sizeof(aaaaaaS));
aaaaaa->nrefs = 1;
aaaaaa->isIter = 0;
aaaaaa->isStr = 0;
aaaaaa->eC = aaaaaf;
aaaaaa->next = &aaaaaaF;
Iterable* aaaaal;
aaaaal = (Iterable*) x3malloc(sizeof(Iterable));
aaaaal->isIter = 1;
aaaaal->nrefs = 0;
aaaaal->value = NULL;
aaaaal->c = aaaaaa;
aaaaal->additional = NULL;
aaaaal->next = &aaaaaaIterNext;
aaaaal->concat = NULL;
void * aaaaau = NULL;
aaaaau = d;
d = aaaaal;
incRef(d);
decRef(aaaaau);



if (d!= NULL) {
(*(int *)d)--;
}
return d;
>>>>>>> 9302859e262f79cd9b2026e5e0b4022749c8f678
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
