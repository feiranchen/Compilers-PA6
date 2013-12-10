#include<stdio.h>
#include "cubex_main.h"
#include "cubex_external_functions.h"
#include "cubex_lib.h"

Iterable* input= NULL;
void* aaaaadF(void*);
typedef struct aaaaad_struct {
	int nrefs; 
	int isIter; 
	int isStr; 
	int isEC; 
	int visited;
	void* eC;
	void* (*next)(void*);
	void* c;
}aaaaadS;
void* aaaaaaF(void*);
typedef struct aaaaaa_struct {
	int nrefs; 
	int isIter; 
	int isStr; 
	int isEC; 
	int visited;
	void* ifC;
	void* (*next)(void*);
	void* c;
}aaaaaaS;
Iterable* aaaaaaIterNext(void*);


void* aaaaadF(void* c) {
aaaaadS* this= (aaaaadS*) c;
void*c=this->c;
if(this->visited){ 
	return NULL;
}else {
	this->visited=1; 
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
} 
else {
	return NULL;
}
}
Iterable* aaaaaaIterNext(void* iter){ 
Iterable* this=(Iterable*)iter;
if (((aaaaaaS*)this->c) != NULL) {
	void* aaaaai = this->value;
	this->value=((aaaaaaS*)this->c)->next(this->c);
	incRef(this->value);
	decRef(aaaaai);
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






aaaaadS* aaaaad;
aaaaad = (aaaaadS*) x3malloc(sizeof(aaaaadS));
aaaaad->nrefs = 1;
aaaaad->isIter = 0;
aaaaad->isStr = 0;
aaaaad->isEC = 1;
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
