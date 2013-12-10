#include<stdio.h>
#include "cubex_main.h"
#include "cubex_external_functions.h"
#include "cubex_lib.h"

Iterable* input= NULL;
void* aaaaasF(void*);
typedef struct aaaaas_struct {
	int nrefs; 
	int isIter; 
	int isStr; 
	int isEC; 
	int visited;
	void* eC;
	void* (*next)(void*);
}aaaaasS;
void* aaaaarF(void*);
typedef struct aaaaar_struct {
	int nrefs; 
	int isIter; 
	int isStr; 
	int isEC; 
	int visited;
	void* eC;
	void* (*next)(void*);
	void* v;
}aaaaarS;
void* aaaaaqF(void*);
typedef struct aaaaaq_struct {
	int nrefs; 
	int isIter; 
	int isStr; 
	int isEC; 
	int visited;
	void* ifC;
	void* (*next)(void*);
	void* i;
	void* v;
}aaaaaqS;
void* aaaaaoF(void*);
typedef struct aaaaao_struct {
	int nrefs; 
	int isIter; 
	int isStr; 
	int isEC; 
	int visited;
	void* eC;
	void* (*next)(void*);
}aaaaaoS;
void* aaaaanF(void*);
typedef struct aaaaan_struct {
	int nrefs; 
	int isIter; 
	int isStr; 
	int isEC; 
	int visited;
	void* eC;
	void* (*next)(void*);
}aaaaanS;
Iterable* aaaaanIterNext(void*);
void* aaaaapF(void*);
typedef struct aaaaap_struct {
	int nrefs; 
	int isIter; 
	int isStr; 
	int isEC; 
	int visited;
	void* forC;
	Iterable* iter;
	void* (*next)(void*);
	void* i;
	void* v;
}aaaaapS;
Iterable* aaaaapIterNext(void*);


void* aaaaasF(void* c) {
aaaaasS* this= (aaaaasS*) c;
if(this->visited){ 
	return NULL;
}else {
	this->visited=1; 
String* aaaaaw;
aaaaaw = (String *) x3malloc(sizeof(String));
(aaaaaw->isIter) = 0;
aaaaaw->value = (char*) x3malloc(sizeof("stop"));
(aaaaaw->nrefs) = 0;
(aaaaaw->isStr) = 1;
aaaaaw->len = sizeof("stop") - 1;
mystrcpy(aaaaaw->value, "stop");
return aaaaaw;
}
}
void* aaaaarF(void* c) {
aaaaarS* this= (aaaaarS*) c;
void*v=this->v;
if(this->visited){ 
	return ((aaaaasS*)this->eC)->next(this->eC);
}else {
	this->visited=1; 
((aaaaasS*)this->eC)->visited=0;
return v;
}
}
void* aaaaaqF(void* c) {
aaaaaqS* this= (aaaaaqS*) c;
void* i=this->i;
void* v=this->v;
((aaaaarS*)this->ifC)->v=this->v;
if (this->ifC!=NULL&&this->visited==0){	((aaaaarS*)this->ifC)->visited=0;}
this->visited=1; 

Integer* aaaaax;
aaaaax = (Integer*) x3malloc(sizeof(Integer));
(aaaaax->nrefs) = 0;
aaaaax->value = 3;
Boolean* aaaaay = (Boolean*) x3malloc(sizeof(Boolean));
aaaaay->nrefs = 0;
aaaaay->value = ((Integer*) i)->value > ((Integer*) aaaaax)->value;
x3free(aaaaax);
if( aaaaay->value){
	return ((aaaaarS*)this->ifC)->next(this->ifC);
} 
else {
	return NULL;
}
}
void* aaaaaoF(void* c) {
aaaaaoS* this= (aaaaaoS*) c;
if(this->visited){ 
	return NULL;
}else {
	this->visited=1; 
String* aaaaba;
aaaaba = (String *) x3malloc(sizeof(String));
(aaaaba->isIter) = 0;
aaaaba->value = (char*) x3malloc(sizeof("b"));
(aaaaba->nrefs) = 0;
(aaaaba->isStr) = 1;
aaaaba->len = sizeof("b") - 1;
mystrcpy(aaaaba->value, "b");
return aaaaba;
}
}
void* aaaaanF(void* c) {
aaaaanS* this= (aaaaanS*) c;
if(this->visited){ 
	return ((aaaaaoS*)this->eC)->next(this->eC);
}else {
	this->visited=1; 
((aaaaaoS*)this->eC)->visited=0;
String* aaaabb;
aaaabb = (String *) x3malloc(sizeof(String));
(aaaabb->isIter) = 0;
aaaabb->value = (char*) x3malloc(sizeof("a"));
(aaaabb->nrefs) = 0;
(aaaabb->isStr) = 1;
aaaabb->len = sizeof("a") - 1;
mystrcpy(aaaabb->value, "a");
return aaaabb;
}
}
Iterable* aaaaanIterNext(void* iter){ 
Iterable* this=(Iterable*)iter;
if (((aaaaanS*)this->c) != NULL) {
	void* aaaabc = this->value;
	this->value=((aaaaanS*)this->c)->next(this->c);
	incRef(this->value);
	decRef(aaaabc);
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
void* i=this->i;
if (this->forC!=NULL&&this->visited==0){	((aaaaaqS*)this->forC)->visited=0;}
this->visited=1; 
if (this->iter==NULL) {return NULL;}
if (this->iter->value==NULL) {this->iter=iterGetNext(this->iter);}
if (this->iter==NULL||this->iter->value==NULL) {return NULL;}
void*v=this->iter->value;
	 ((aaaaaqS*)this->forC)->v=v;
	this->visited=1; 
void* ret=((aaaaaqS*)this->forC)->next(this->forC);
if (ret==NULL){
	 this->iter=iterGetNext(this->iter);
if (this->iter==NULL) {return NULL;}
((aaaaaqS*)this->forC)->visited=0;
	v=this->iter->value;
	 ((aaaaaqS*)this->forC)->v=v;
return ((aaaaaqS*)this->forC)->next(this->forC);
}
return ret;
}
Iterable* aaaaapIterNext(void* iter){ 
Iterable* this=(Iterable*)iter;
if (((aaaaapS*)this->c) != NULL) {
	void* aaaabd = this->value;
	this->value=((aaaaapS*)this->c)->next(this->c);
	incRef(this->value);
	decRef(aaaabd);
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
void * i = NULL;
void * d = NULL;






Integer* aaaaat;
aaaaat = (Integer*) x3malloc(sizeof(Integer));
(aaaaat->nrefs) = 0;
aaaaat->value = 5;
void * aaaaau = NULL;
aaaaau = i;
i = aaaaat;
incRef(i);
decRef(aaaaau);












aaaaasS* aaaaas;
aaaaas = (aaaaasS*) x3malloc(sizeof(aaaaasS));
aaaaas->nrefs = 1;
aaaaas->isIter = 0;
aaaaas->isStr = 0;
aaaaas->isEC = 1;
aaaaas->eC = NULL;
aaaaas->next = &aaaaasF;
aaaaas->visited= 0;
aaaaarS* aaaaar;
aaaaar = (aaaaarS*) x3malloc(sizeof(aaaaarS));
aaaaar->nrefs = 1;
aaaaar->isIter = 0;
aaaaar->isStr = 0;
aaaaar->isEC = 1;
aaaaar->eC = aaaaas;
aaaaar->next = &aaaaarF;
aaaaar->visited= 0;
aaaaaqS* aaaaaq;
aaaaaq = (aaaaaqS*) x3malloc(sizeof(aaaaaqS));
aaaaaq->nrefs = 1;
aaaaaq->isIter = 0;
aaaaaq->isStr = 0;
aaaaaq->isEC =0;
aaaaaq->ifC = aaaaar;
aaaaaq->next = &aaaaaqF;
aaaaaq->visited= 0;
aaaaaq->i=i;
incRef(i);
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
Iterable* aaaaaz;
aaaaaz = (Iterable*) x3malloc(sizeof(Iterable));
aaaaaz->isIter = 1;
aaaaaz->nrefs = 0;
aaaaaz->value = NULL;
aaaaaz->c = aaaaan;
aaaaaz->additional = NULL;
aaaaaz->next = &aaaaanIterNext;
aaaaaz->concat = NULL;

aaaaapS* aaaaap;
aaaaap = (aaaaapS*) x3malloc(sizeof(aaaaapS));
aaaaap->nrefs = 1;
aaaaap->isIter = 0;
aaaaap->isStr = 0;
aaaaap->isEC =0;
aaaaap->forC = aaaaaq;
aaaaap->iter = aaaaaz;
aaaaap->next = &aaaaapF;
aaaaap->visited= 0;
aaaaap->i=i;
incRef(i);
Iterable* aaaaav;
aaaaav = (Iterable*) x3malloc(sizeof(Iterable));
aaaaav->isIter = 1;
aaaaav->nrefs = 0;
aaaaav->value = NULL;
aaaaav->c = aaaaap;
aaaaav->additional = NULL;
aaaaav->next = &aaaaapIterNext;
aaaaav->concat = NULL;

void * aaaabe = NULL;
aaaabe = d;
d = aaaaav;
incRef(d);
decRef(aaaabe);
decRef(i);






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
