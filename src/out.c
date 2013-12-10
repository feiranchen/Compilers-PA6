#include<stdio.h>
#include "cubex_main.h"
#include "cubex_external_functions.h"
#include "cubex_lib.h"

Iterable* input= NULL;
void* aaaaarF(void*);
typedef struct aaaaar_struct {
	int nrefs; 
	int isIter; 
	int isStr; 
	int isEC; 
	void* eC;
	void* (*next)(void*);
	int visited;
}aaaaarS;
void* aaaaaqF(void*);
typedef struct aaaaaq_struct {
	int nrefs; 
	int isIter; 
	int isStr; 
	int isEC; 
	void* eC;
	void* (*next)(void*);
	int visited;
	void* v;
}aaaaaqS;
void* aaaaaoF(void*);
typedef struct aaaaao_struct {
	int nrefs; 
	int isIter; 
	int isStr; 
	int isEC; 
	void* eC;
	void* (*next)(void*);
	int visited;
}aaaaaoS;
void* aaaaanF(void*);
typedef struct aaaaan_struct {
	int nrefs; 
	int isIter; 
	int isStr; 
	int isEC; 
	void* eC;
	void* (*next)(void*);
	int visited;
}aaaaanS;
Iterable* aaaaanIterNext(void*);
void* aaaaapF(void*);
typedef struct aaaaap_struct {
	int nrefs; 
	int isIter; 
	int isStr; 
	int isEC; 
	void* forC;
	Iterable* iter;
	void* (*next)(void*);
	void* v;
}aaaaapS;
Iterable* aaaaapIterNext(void*);


void* aaaaarF(void* c) {
aaaaarS* this= (aaaaarS*) c;
if(this->visited){ 
	return NULL;
}else {
	this->visited=1; 
String* aaaaat;
aaaaat = (String *) x3malloc(sizeof(String));
(aaaaat->isIter) = 0;
aaaaat->value = (char*) x3malloc(sizeof("stop"));
(aaaaat->nrefs) = 0;
(aaaaat->isStr) = 1;
aaaaat->len = sizeof("stop") - 1;
mystrcpy(aaaaat->value, "stop");
return aaaaat;
}
}
void* aaaaaqF(void* c) {
aaaaaqS* this= (aaaaaqS*) c;
void*v=this->v;
if(this->visited){ 
	return ((aaaaarS*)this->eC)->next(this->eC);
}else {
	this->visited=1; 
((aaaaarS*)this->eC)->visited=0;
return v;
}
}
void* aaaaaoF(void* c) {
aaaaaoS* this= (aaaaaoS*) c;
if(this->visited){ 
	return NULL;
}else {
	this->visited=1; 
String* aaaaav;
aaaaav = (String *) x3malloc(sizeof(String));
(aaaaav->isIter) = 0;
aaaaav->value = (char*) x3malloc(sizeof("b"));
(aaaaav->nrefs) = 0;
(aaaaav->isStr) = 1;
aaaaav->len = sizeof("b") - 1;
mystrcpy(aaaaav->value, "b");
return aaaaav;
}
}
void* aaaaanF(void* c) {
aaaaanS* this= (aaaaanS*) c;
if(this->visited){ 
	return ((aaaaaoS*)this->eC)->next(this->eC);
}else {
	this->visited=1; 
((aaaaaoS*)this->eC)->visited=0;
String* aaaaaw;
aaaaaw = (String *) x3malloc(sizeof(String));
(aaaaaw->isIter) = 0;
aaaaaw->value = (char*) x3malloc(sizeof("a"));
(aaaaaw->nrefs) = 0;
(aaaaaw->isStr) = 1;
aaaaaw->len = sizeof("a") - 1;
mystrcpy(aaaaaw->value, "a");
return aaaaaw;
}
}
Iterable* aaaaanIterNext(void* iter){ 
Iterable* this=(Iterable*)iter;
if (((aaaaanS*)this->c) != NULL) {
	void* aaaaax = this->value;
	this->value=((aaaaanS*)this->c)->next(this->c);
	incRef(this->value);
	decRef(aaaaax);
	if(this->value)
		return this;
	else
		return NULL;
}
else
	return NULL;
}
void* aaaaapF(void* c) {
aaaaapS* this= (aaaaapS*) c;
if (this->iter==NULL) {return NULL;}
if (this->iter->value==NULL) {this->iter=iterGetNext(this->iter);}
if (this->iter->value==NULL) {return NULL;}
if (this->iter==NULL) {return NULL;}
void*v=this->iter->value;
	 ((aaaaaqS*)this->forC)->v=v;
void* ret=((aaaaaqS*)this->forC)->next(this->forC);
if (ret==NULL){
	 this->iter=iterGetNext(this->iter);
if (this->iter==NULL) {return NULL;};
v=this->iter->value;
	 ((aaaaaqS*)this->forC)->v=v;
((aaaaaqS*)this->forC)->visited=0;
return ((aaaaaqS*)this->forC)->next(this->forC);
}
return ret;
}
Iterable* aaaaapIterNext(void* iter){ 
Iterable* this=(Iterable*)iter;
if (((aaaaapS*)this->c) != NULL) {
	void* aaaaay = this->value;
	this->value=((aaaaapS*)this->c)->next(this->c);
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

void* our_main()
{
void * d = NULL;



void * i = NULL;












aaaaarS* aaaaar;
aaaaar = (aaaaarS*) x3malloc(sizeof(aaaaarS));
aaaaar->nrefs = 1;
aaaaar->isIter = 0;
aaaaar->isStr = 0;
aaaaar->isEC = 1;
aaaaar->eC = NULL;
aaaaar->next = &aaaaarF;
aaaaar->visited= 0;
aaaaaqS* aaaaaq;
aaaaaq = (aaaaaqS*) x3malloc(sizeof(aaaaaqS));
aaaaaq->nrefs = 1;
aaaaaq->isIter = 0;
aaaaaq->isStr = 0;
aaaaaq->isEC = 1;
aaaaaq->eC = aaaaar;
aaaaaq->next = &aaaaaqF;
aaaaaq->visited= 0;
aaaaaoS* aaaaao;
aaaaao = (aaaaaoS*) x3malloc(sizeof(aaaaaoS));
aaaaao->nrefs = 1;
aaaaao->isIter = 0;
aaaaao->isStr = 0;
aaaaao->isEC = 1;
aaaaao->eC = NULL;
aaaaao->next = &aaaaaoF;
aaaaao->visited= 0;
aaaaanS* aaaaan;
aaaaan = (aaaaanS*) x3malloc(sizeof(aaaaanS));
aaaaan->nrefs = 1;
aaaaan->isIter = 0;
aaaaan->isStr = 0;
aaaaan->isEC = 1;
aaaaan->eC = aaaaao;
aaaaan->next = &aaaaanF;
aaaaan->visited= 0;
Iterable* aaaaau;
aaaaau = (Iterable*) x3malloc(sizeof(Iterable));
aaaaau->isIter = 1;
aaaaau->nrefs = 0;
aaaaau->value = NULL;
aaaaau->c = aaaaan;
aaaaau->additional = NULL;
aaaaau->next = &aaaaanIterNext;
aaaaau->concat = NULL;

aaaaapS* aaaaap;
aaaaap = (aaaaapS*) x3malloc(sizeof(aaaaapS));
aaaaap->nrefs = 1;
aaaaap->isIter = 0;
aaaaap->isStr = 0;
aaaaap->isEC =0;
aaaaap->forC = aaaaaq;
aaaaap->iter = aaaaau;
aaaaap->next = &aaaaapF;
Iterable* aaaaas;
aaaaas = (Iterable*) x3malloc(sizeof(Iterable));
aaaaas->isIter = 1;
aaaaas->nrefs = 0;
aaaaas->value = NULL;
aaaaas->c = aaaaap;
aaaaas->additional = NULL;
aaaaas->next = &aaaaapIterNext;
aaaaas->concat = NULL;

void * aaaaaz = NULL;
aaaaaz = d;
d = aaaaas;
incRef(d);
decRef(aaaaaz);






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
