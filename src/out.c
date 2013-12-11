#include<stdio.h>
#include "cubex_main.h"
#include "cubex_external_functions.h"
#include "cubex_lib.h"

Iterable* input= NULL;
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


void* aaaaacF(void* c_aaaaax) {
aaaaacS* this_aaaaay= (aaaaacS*) c_aaaaax;
if(this_aaaaay->visited){ 
	return NULL;
}else {
	this_aaaaay->visited=1; 
String* aaaaaz;
aaaaaz = (String *) x3malloc(sizeof(String));
(aaaaaz->isIter) = 0;
aaaaaz->value = (char*) x3malloc(sizeof("Compiler"));
(aaaaaz->nrefs) = 0;
(aaaaaz->isStr) = 1;
aaaaaz->len = sizeof("Compiler") - 1;
mystrcpy(aaaaaz->value, "Compiler");
	return aaaaaz;
	}
}
Iterable* aaaaacIterNext(void* aaaabb){ 
Iterable* this=(Iterable*)aaaabb;
if (((aaaaacS*)this->c) != NULL) {
	void* aaaaba = this->value;
	this->value=((aaaaacS*)this->c)->next(this->c);
	incRef(this->value);
	decRef(aaaaba);
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
void * aaaaad = NULL;
void * aaaaae = NULL;
void * x = NULL;
void * re = NULL;
void * z = NULL;






Integer* aaaaaj;
aaaaaj = (Integer*) x3malloc(sizeof(Integer));
(aaaaaj->nrefs) = 0;
aaaaaj->value = 3;
void * aaaaak = NULL;
aaaaak = aaaaad;
aaaaad = aaaaaj;
incRef(aaaaad);
decRef(aaaaak);



Integer* aaaaal;
aaaaal = (Integer*) x3malloc(sizeof(Integer));
(aaaaal->nrefs) = 0;
aaaaal->value = 5;
void * aaaaam = NULL;
aaaaam = aaaaae;
aaaaae = aaaaal;
incRef(aaaaae);
decRef(aaaaam);



Iterable* aaaaan;
aaaaan = (Iterable*) x3malloc(sizeof(Iterable));
aaaaan->isIter = 1;
aaaaan->nrefs = 0;
aaaaan->value = aaaaad;
aaaaan->additional = aaaaae;
aaaaan->next = &Integer_through;
aaaaan->concat = NULL;
incRef(aaaaad);
incRef(aaaaae);
void * aaaaao = NULL;
aaaaao = x;
x = checkIter(aaaaan);
incRef(x);
decRef(aaaaao);
decRef(aaaaad);
decRef(aaaaae);






void * aaaaaq = NULL;
aaaaaq = re;
re = NULL;
incRef(re);
decRef(aaaaaq);






void * aaaaar = NULL;
aaaaar = z;
z = x;
incRef(z);
decRef(aaaaar);
decRef(x);
	if (z!=NULL) {
		if ((*((int *)(z+1))) == 0) {
void * aaaaas = NULL;
aaaaas = z;
			z = strToIter( ((String *)z)->value, ((String *)z)->len);
incRef(z);
decRef(aaaaas);
		}
	}
if (z!=NULL) {
	if (((Iterable*)z)->c!=NULL) {
		Iterable *aaaaat = NULL;
		aaaaat = (Iterable *)x3malloc(sizeof(Iterable));
		((Iterable*)aaaaat)->nrefs = ((Iterable*)z)->nrefs;
		((Iterable*)aaaaat)->isIter = ((Iterable*)z)->isIter;
		((Iterable*)aaaaat)->isStr = ((Iterable*)z)->isStr;
		((Iterable*)aaaaat)->value = ((Iterable*)z)->value;
		((Iterable*)aaaaat)->c = ((Iterable*)z)->c;
		((Iterable*)aaaaat)->additional = ((Iterable*)z)->additional;
		((Iterable*)aaaaat)->next = ((Iterable*)z)->next;
		((Iterable*)aaaaat)->concat = ((Iterable*)z)->concat;
		incRef((((Iterable*)aaaaat)->c));
		z = iterGetNext(aaaaat);
		(*((int*)((Iterable*)aaaaat)->c+5)) = 0;
	}
}
	while (z!=NULL) {
Iterable * aaaaaf = NULL;
		aaaaaf = (Iterable *)z;
		incRef(aaaaaf);
void * aaaaau = NULL;
aaaaau = z;
		z = aaaaaf->value;
		incRef(z);
		decRef(aaaaau);
decRef(z);
		


void * aaaaah = NULL;
void * aaaaai = NULL;
void * aaaaag = NULL;



void * aaaaav = NULL;
aaaaav = aaaaah;
aaaaah = re;
incRef(aaaaah);
decRef(aaaaav);
decRef(re);



aaaaacS* aaaaac;
aaaaac = (aaaaacS*) x3malloc(sizeof(aaaaacS));
aaaaac->nrefs = 1;
aaaaac->isIter = 0;
aaaaac->isStr = 0;
aaaaac->isEC = 1;
aaaaac->eC = NULL;
aaaaac->next = &aaaaacF;
aaaaac->visited= 0;
Iterable* aaaaaw;
aaaaaw = (Iterable*) x3malloc(sizeof(Iterable));
aaaaaw->isIter = 1;
aaaaaw->nrefs = 0;
aaaaaw->value = NULL;
aaaaaw->c = aaaaac;
aaaaaw->additional = NULL;
aaaaaw->next = &aaaaacIterNext;
aaaaaw->concat = NULL;

void * aaaabc = NULL;
aaaabc = aaaaai;
aaaaai = aaaaaw;
incRef(aaaaai);
decRef(aaaabc);



void *aaaabe;
aaaabe = aaaaah;
if (aaaabe!=NULL) {
(*((int *)aaaabe))++;
if ((*((int *)aaaaah+1)) == 0) {
decRef(aaaabe);
aaaabe = strToIter( ((String *)aaaaah)->value, ((String *)aaaaah)->len);
incRef(aaaabe);
}
}
void *aaaabf;
aaaabf = aaaaai;
if (aaaabf!=NULL) {
(*((int *)aaaabf))++;
if ((*((int *)aaaaai+1)) == 0) {
decRef(aaaabf);
aaaabf = strToIter( ((String *)aaaaai)->value, ((String *)aaaaai)->len);
incRef(aaaabf);
}
}
Iterable* aaaabd;
aaaabd = concatenate((Iterable*)aaaabe, (Iterable*) aaaabf);
decRef(aaaabe);
decRef(aaaabf);
void * aaaabg = NULL;
aaaabg = re;
re = aaaabd;
incRef(re);
decRef(aaaabg);
decRef(aaaaah);
decRef(aaaaai);



void * aaaabh = NULL;
aaaabh = aaaaag;
aaaaag = aaaaaf;
incRef(aaaaag);
decRef(aaaabh);
decRef(aaaaaf);




void* aaaabi;
aaaabi = iterGetNext((void*) aaaaag);
void * aaaabj = NULL;
aaaabj = z;
z = aaaabi;
incRef(z);
decRef(aaaabj);
decRef(aaaaag);
	}
decRef(z);






if (re!= NULL) {
(*(int *)re)--;
}
return re;
}


void cubex_main() {
Iterable* ourMain, *temp;
ourMain = (Iterable*) our_main();
temp = ourMain;
if (ourMain != NULL)
	if (ourMain->c != NULL) {
		(*((int*)ourMain->c+4)) = 0;
		ourMain = iterGetNext(ourMain);
	}
while(ourMain != NULL) {
	print_line(((String*)ourMain->value)->value, ((String*)ourMain->value)->len);
	ourMain = iterGetNext(ourMain);
}
freeIter(temp);
}
