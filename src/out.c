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


<<<<<<< HEAD
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
=======
void* aaaaamF(void* c_aaaaao) {
aaaaamS* this_aaaaap= (aaaaamS*) c_aaaaao;
if(this_aaaaap->visited){ 
	return NULL;
}else {
	this_aaaaap->visited=1; 
String* aaaaaq;
aaaaaq = (String *) x3malloc(sizeof(String));
(aaaaaq->isIter) = 0;
aaaaaq->value = (char*) x3malloc(sizeof("lala"));
(aaaaaq->nrefs) = 0;
(aaaaaq->isStr) = 1;
aaaaaq->len = sizeof("lala") - 1;
mystrcpy(aaaaaq->value, "lala");
	return aaaaaq;
	}
}
void* aaaaalF(void* c_aaaaar) {
aaaaalS* this_aaaaas= (aaaaalS*) c_aaaaar;
void*m=this_aaaaas->m;
if(this_aaaaas->visited){ 
	return ((aaaaamS*)this_aaaaas->eC)->next(this_aaaaas->eC);
}else {
	if (this_aaaaas->eC!=NULL&&this_aaaaas->visited==0){		((aaaaamS*)this_aaaaas->eC)->visited=0;}
		this_aaaaas->visited=1; 
	return m;
	}
}
void* aaaaakF(void* c_aaaaat) {
aaaaakS* this_aaaaau= (aaaaakS*) c_aaaaat;
void*v=this_aaaaau->v;
void*m=this_aaaaau->m;
((aaaaalS*)this_aaaaau->eC)->m=this_aaaaau->m;
if(this_aaaaau->visited){ 
	return ((aaaaalS*)this_aaaaau->eC)->next(this_aaaaau->eC);
}else {
	if (this_aaaaau->eC!=NULL&&this_aaaaau->visited==0){		((aaaaalS*)this_aaaaau->eC)->visited=0;}
		this_aaaaau->visited=1; 
	return v;
	}
}
void* aaaaaiF(void* c_aaaaaw) {
aaaaaiS* this_aaaaax= (aaaaaiS*) c_aaaaaw;
if(this_aaaaax->visited){ 
	return NULL;
}else {
	this_aaaaax->visited=1; 
String* aaaaay;
aaaaay = (String *) x3malloc(sizeof(String));
(aaaaay->isIter) = 0;
aaaaay->value = (char*) x3malloc(sizeof("bb"));
(aaaaay->nrefs) = 0;
(aaaaay->isStr) = 1;
aaaaay->len = sizeof("bb") - 1;
mystrcpy(aaaaay->value, "bb");
	return aaaaay;
	}
}
void* aaaaahF(void* c_aaaaaz) {
aaaaahS* this_aaaaba= (aaaaahS*) c_aaaaaz;
if(this_aaaaba->visited){ 
	return ((aaaaaiS*)this_aaaaba->eC)->next(this_aaaaba->eC);
}else {
	if (this_aaaaba->eC!=NULL&&this_aaaaba->visited==0){		((aaaaaiS*)this_aaaaba->eC)->visited=0;}
		this_aaaaba->visited=1; 
String* aaaabb;
aaaabb = (String *) x3malloc(sizeof(String));
(aaaabb->isIter) = 0;
aaaabb->value = (char*) x3malloc(sizeof("aa"));
(aaaabb->nrefs) = 0;
(aaaabb->isStr) = 1;
aaaabb->len = sizeof("aa") - 1;
mystrcpy(aaaabb->value, "aa");
	return aaaabb;
	}
}
Iterable* aaaaahIterNext(void* aaaabd){ 
Iterable* this=(Iterable*)aaaabd;
if (((aaaaahS*)this->c) != NULL) {
	void* aaaabc = this->value;
	this->value=((aaaaahS*)this->c)->next(this->c);
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
void* aaaaajF(void* c_aaaabf) {
aaaaajS* this_aaaabe= (aaaaajS*) c_aaaabf;
((aaaaakS*)this_aaaabe->forC)->v=this_aaaabe->v;
if (this_aaaabe->forC!=NULL&&this_aaaabe->visited==0){	((aaaaakS*)this_aaaabe->forC)->visited=0;}
this_aaaabe->visited=1; 
if (this_aaaabe->iter==NULL) {
		this_aaaabe->iter= (Iterable *)x3malloc(sizeof(Iterable));
		this_aaaabe->iter->nrefs =this_aaaabe->iterorg->nrefs;
		this_aaaabe->iter->isIter =this_aaaabe->iterorg->isIter;
		this_aaaabe->iter->isStr =this_aaaabe->iterorg->isStr;
		this_aaaabe->iter->value =this_aaaabe->iterorg->value;
		this_aaaabe->iter->c =this_aaaabe->iterorg->c;
		this_aaaabe->iter->additional =this_aaaabe->iterorg->additional;
		this_aaaabe->iter->next =this_aaaabe->iterorg->next;
		this_aaaabe->iter->concat =this_aaaabe->iterorg->concat;
				*((int*)this_aaaabe->iter->c+4)=0;
incRef(this_aaaabe->iterorg->c);
return NULL;}
if (this_aaaabe->iter->value==NULL) {this_aaaabe->iter=iterGetNext(this_aaaabe->iter);}
if (this_aaaabe->iter==NULL||this_aaaabe->iter->value==NULL) {
		this_aaaabe->iter= (Iterable *)x3malloc(sizeof(Iterable));
		this_aaaabe->iter->nrefs =this_aaaabe->iterorg->nrefs;
		this_aaaabe->iter->isIter =this_aaaabe->iterorg->isIter;
		this_aaaabe->iter->isStr =this_aaaabe->iterorg->isStr;
		this_aaaabe->iter->value =this_aaaabe->iterorg->value;
		this_aaaabe->iter->c =this_aaaabe->iterorg->c;
		this_aaaabe->iter->additional =this_aaaabe->iterorg->additional;
		this_aaaabe->iter->next =this_aaaabe->iterorg->next;
		this_aaaabe->iter->concat =this_aaaabe->iterorg->concat;
				*((int*)this_aaaabe->iter->c+4)=0;
incRef(this_aaaabe->iterorg->c);
 return NULL;}
void*m=this_aaaabe->iter->value;
	 ((aaaaakS*)this_aaaabe->forC)->m=m;
void* ret=((aaaaakS*)this_aaaabe->forC)->next(this_aaaabe->forC);
if (ret==NULL){
	((aaaaakS*)this_aaaabe->forC)->visited=0;
	 this_aaaabe->iter=iterGetNext(this_aaaabe->iter);
if (this_aaaabe->iter==NULL) {return NULL;}
	m=this_aaaabe->iter->value;
	 ((aaaaakS*)this_aaaabe->forC)->m=m;
return ((aaaaakS*)this_aaaabe->forC)->next(this_aaaabe->forC);
}
return ret;
}
void* aaaaagF(void* c_aaaabg) {
aaaaagS* this_aaaabh= (aaaaagS*) c_aaaabg;
void*v=this_aaaabh->v;
((aaaaajS*)this_aaaabh->eC)->v=this_aaaabh->v;
if(this_aaaabh->visited){ 
	return ((aaaaajS*)this_aaaabh->eC)->next(this_aaaabh->eC);
}else {
	if (this_aaaabh->eC!=NULL&&this_aaaabh->visited==0){		((aaaaajS*)this_aaaabh->eC)->visited=0;}
		this_aaaabh->visited=1; 
String* aaaabi;
aaaabi = (String *) x3malloc(sizeof(String));
(aaaabi->isIter) = 0;
aaaabi->value = (char*) x3malloc(sizeof("testing"));
(aaaabi->nrefs) = 0;
(aaaabi->isStr) = 1;
aaaabi->len = sizeof("testing") - 1;
mystrcpy(aaaabi->value, "testing");
	return aaaabi;
	}
}
void* aaaaafF(void* c_aaaabj) {
aaaaafS* this_aaaabk= (aaaaafS*) c_aaaabj;
void*v=this_aaaabk->v;
((aaaaagS*)this_aaaabk->eC)->v=this_aaaabk->v;
if(this_aaaabk->visited){ 
	return ((aaaaagS*)this_aaaabk->eC)->next(this_aaaabk->eC);
}else {
	if (this_aaaabk->eC!=NULL&&this_aaaabk->visited==0){		((aaaaagS*)this_aaaabk->eC)->visited=0;}
		this_aaaabk->visited=1; 
	return v;
	}
}
void* aaaaabF(void* c_aaaabm) {
aaaaabS* this_aaaabn= (aaaaabS*) c_aaaabm;
if(this_aaaabn->visited){ 
	return NULL;
}else {
	this_aaaabn->visited=1; 
String* aaaabo;
aaaabo = (String *) x3malloc(sizeof(String));
(aaaabo->isIter) = 0;
aaaabo->value = (char*) x3malloc(sizeof("y"));
(aaaabo->nrefs) = 0;
(aaaabo->isStr) = 1;
aaaabo->len = sizeof("y") - 1;
mystrcpy(aaaabo->value, "y");
	return aaaabo;
	}
}
void* aaaaaaF(void* c_aaaabp) {
aaaaaaS* this_aaaabq= (aaaaaaS*) c_aaaabp;
if(this_aaaabq->visited){ 
	return ((aaaaabS*)this_aaaabq->eC)->next(this_aaaabq->eC);
}else {
	if (this_aaaabq->eC!=NULL&&this_aaaabq->visited==0){		((aaaaabS*)this_aaaabq->eC)->visited=0;}
		this_aaaabq->visited=1; 
String* aaaabr;
aaaabr = (String *) x3malloc(sizeof(String));
(aaaabr->isIter) = 0;
aaaabr->value = (char*) x3malloc(sizeof("x"));
(aaaabr->nrefs) = 0;
(aaaabr->isStr) = 1;
aaaabr->len = sizeof("x") - 1;
mystrcpy(aaaabr->value, "x");
	return aaaabr;
	}
}
Iterable* aaaaaaIterNext(void* aaaabt){ 
Iterable* this=(Iterable*)aaaabt;
if (((aaaaaaS*)this->c) != NULL) {
	void* aaaabs = this->value;
	this->value=((aaaaaaS*)this->c)->next(this->c);
	incRef(this->value);
	decRef(aaaabs);
	if(this->value)
		return this;
	else
		return NULL;
}
else
	return NULL;
}
void* aaaaacF(void* c_aaaabv) {
aaaaacS* this_aaaabu= (aaaaacS*) c_aaaabv;
if (this_aaaabu->forC!=NULL&&this_aaaabu->visited==0){	((aaaaafS*)this_aaaabu->forC)->visited=0;}
this_aaaabu->visited=1; 
if (this_aaaabu->iter==NULL) {
		this_aaaabu->iter= (Iterable *)x3malloc(sizeof(Iterable));
		this_aaaabu->iter->nrefs =this_aaaabu->iterorg->nrefs;
		this_aaaabu->iter->isIter =this_aaaabu->iterorg->isIter;
		this_aaaabu->iter->isStr =this_aaaabu->iterorg->isStr;
		this_aaaabu->iter->value =this_aaaabu->iterorg->value;
		this_aaaabu->iter->c =this_aaaabu->iterorg->c;
		this_aaaabu->iter->additional =this_aaaabu->iterorg->additional;
		this_aaaabu->iter->next =this_aaaabu->iterorg->next;
		this_aaaabu->iter->concat =this_aaaabu->iterorg->concat;
				*((int*)this_aaaabu->iter->c+4)=0;
incRef(this_aaaabu->iterorg->c);
return NULL;}
if (this_aaaabu->iter->value==NULL) {this_aaaabu->iter=iterGetNext(this_aaaabu->iter);}
if (this_aaaabu->iter==NULL||this_aaaabu->iter->value==NULL) {
		this_aaaabu->iter= (Iterable *)x3malloc(sizeof(Iterable));
		this_aaaabu->iter->nrefs =this_aaaabu->iterorg->nrefs;
		this_aaaabu->iter->isIter =this_aaaabu->iterorg->isIter;
		this_aaaabu->iter->isStr =this_aaaabu->iterorg->isStr;
		this_aaaabu->iter->value =this_aaaabu->iterorg->value;
		this_aaaabu->iter->c =this_aaaabu->iterorg->c;
		this_aaaabu->iter->additional =this_aaaabu->iterorg->additional;
		this_aaaabu->iter->next =this_aaaabu->iterorg->next;
		this_aaaabu->iter->concat =this_aaaabu->iterorg->concat;
				*((int*)this_aaaabu->iter->c+4)=0;
incRef(this_aaaabu->iterorg->c);
 return NULL;}
void*v=this_aaaabu->iter->value;
	 ((aaaaafS*)this_aaaabu->forC)->v=v;
void* ret=((aaaaafS*)this_aaaabu->forC)->next(this_aaaabu->forC);
if (ret==NULL){
	((aaaaafS*)this_aaaabu->forC)->visited=0;
	 this_aaaabu->iter=iterGetNext(this_aaaabu->iter);
if (this_aaaabu->iter==NULL) {return NULL;}
	v=this_aaaabu->iter->value;
	 ((aaaaafS*)this_aaaabu->forC)->v=v;
return ((aaaaafS*)this_aaaabu->forC)->next(this_aaaabu->forC);
}
return ret;
}
Iterable* aaaaacIterNext(void* aaaabx){ 
Iterable* this=(Iterable*)aaaabx;
if (((aaaaacS*)this->c) != NULL) {
	void* aaaabw = this->value;
	this->value=((aaaaacS*)this->c)->next(this->c);
	incRef(this->value);
	decRef(aaaabw);
>>>>>>> c442a05405fc2ca23da1fc2764d721b9f8bf9221
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
<<<<<<< HEAD
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



=======
void * d = NULL;



void * i = NULL;






aaaaamS* aaaaam;
aaaaam = (aaaaamS*) x3malloc(sizeof(aaaaamS));
aaaaam->nrefs = 1;
aaaaam->isIter = 0;
aaaaam->isStr = 0;
aaaaam->isEC = 1;
aaaaam->eC = NULL;
aaaaam->next = &aaaaamF;
aaaaam->visited= 0;
aaaaalS* aaaaal;
aaaaal = (aaaaalS*) x3malloc(sizeof(aaaaalS));
aaaaal->nrefs = 1;
aaaaal->isIter = 0;
aaaaal->isStr = 0;
aaaaal->isEC = 1;
aaaaal->eC = aaaaam;
aaaaal->next = &aaaaalF;
aaaaal->visited= 0;
aaaaakS* aaaaak;
aaaaak = (aaaaakS*) x3malloc(sizeof(aaaaakS));
aaaaak->nrefs = 1;
aaaaak->isIter = 0;
aaaaak->isStr = 0;
aaaaak->isEC = 1;
aaaaak->eC = aaaaal;
aaaaak->next = &aaaaakF;
aaaaak->visited= 0;
aaaaaiS* aaaaai;
aaaaai = (aaaaaiS*) x3malloc(sizeof(aaaaaiS));
aaaaai->nrefs = 1;
aaaaai->isIter = 0;
aaaaai->isStr = 0;
aaaaai->isEC = 1;
aaaaai->eC = NULL;
aaaaai->next = &aaaaaiF;
aaaaai->visited= 0;
aaaaahS* aaaaah;
aaaaah = (aaaaahS*) x3malloc(sizeof(aaaaahS));
aaaaah->nrefs = 1;
aaaaah->isIter = 0;
aaaaah->isStr = 0;
aaaaah->isEC = 1;
aaaaah->eC = aaaaai;
aaaaah->next = &aaaaahF;
aaaaah->visited= 0;
Iterable* aaaaav;
aaaaav = (Iterable*) x3malloc(sizeof(Iterable));
aaaaav->isIter = 1;
aaaaav->nrefs = 0;
aaaaav->value = NULL;
aaaaav->c = aaaaah;
aaaaav->additional = NULL;
aaaaav->next = &aaaaahIterNext;
aaaaav->concat = NULL;

Iterable *aaaaavCopy;
		aaaaavCopy = (Iterable *)x3malloc(sizeof(Iterable));
		aaaaavCopy->nrefs =aaaaav->nrefs;
		aaaaavCopy->isIter = aaaaav->isIter;
		aaaaavCopy->isStr = aaaaav->isStr;
		aaaaavCopy->value = aaaaav->value;
		aaaaavCopy->c = aaaaav->c;
		aaaaavCopy->additional = aaaaav->additional;
		aaaaavCopy->next = aaaaav->next;
		aaaaavCopy->concat = aaaaav->concat;
		incRef((((Iterable*)aaaaavCopy)->c));
aaaaajS* aaaaaj;
aaaaaj = (aaaaajS*) x3malloc(sizeof(aaaaajS));
aaaaaj->nrefs = 1;
aaaaaj->isIter = 0;
aaaaaj->isStr = 0;
aaaaaj->isEC =0;
aaaaaj->forC = aaaaak;
aaaaaj->iter = aaaaavCopy;
aaaaaj->iterorg = aaaaav;
aaaaaj->next = &aaaaajF;
aaaaaj->visited= 0;
aaaaagS* aaaaag;
aaaaag = (aaaaagS*) x3malloc(sizeof(aaaaagS));
aaaaag->nrefs = 1;
aaaaag->isIter = 0;
aaaaag->isStr = 0;
aaaaag->isEC = 1;
aaaaag->eC = aaaaaj;
aaaaag->next = &aaaaagF;
aaaaag->visited= 0;
aaaaafS* aaaaaf;
aaaaaf = (aaaaafS*) x3malloc(sizeof(aaaaafS));
aaaaaf->nrefs = 1;
aaaaaf->isIter = 0;
aaaaaf->isStr = 0;
aaaaaf->isEC = 1;
aaaaaf->eC = aaaaag;
aaaaaf->next = &aaaaafF;
aaaaaf->visited= 0;
aaaaabS* aaaaab;
aaaaab = (aaaaabS*) x3malloc(sizeof(aaaaabS));
aaaaab->nrefs = 1;
aaaaab->isIter = 0;
aaaaab->isStr = 0;
aaaaab->isEC = 1;
aaaaab->eC = NULL;
aaaaab->next = &aaaaabF;
aaaaab->visited= 0;
aaaaaaS* aaaaaa;
aaaaaa = (aaaaaaS*) x3malloc(sizeof(aaaaaaS));
aaaaaa->nrefs = 1;
aaaaaa->isIter = 0;
aaaaaa->isStr = 0;
aaaaaa->isEC = 1;
aaaaaa->eC = aaaaab;
aaaaaa->next = &aaaaaaF;
aaaaaa->visited= 0;
Iterable* aaaabl;
aaaabl = (Iterable*) x3malloc(sizeof(Iterable));
aaaabl->isIter = 1;
aaaabl->nrefs = 0;
aaaabl->value = NULL;
aaaabl->c = aaaaaa;
aaaabl->additional = NULL;
aaaabl->next = &aaaaaaIterNext;
aaaabl->concat = NULL;

Iterable *aaaablCopy;
		aaaablCopy = (Iterable *)x3malloc(sizeof(Iterable));
		aaaablCopy->nrefs =aaaabl->nrefs;
		aaaablCopy->isIter = aaaabl->isIter;
		aaaablCopy->isStr = aaaabl->isStr;
		aaaablCopy->value = aaaabl->value;
		aaaablCopy->c = aaaabl->c;
		aaaablCopy->additional = aaaabl->additional;
		aaaablCopy->next = aaaabl->next;
		aaaablCopy->concat = aaaabl->concat;
		incRef((((Iterable*)aaaablCopy)->c));
aaaaacS* aaaaac;
aaaaac = (aaaaacS*) x3malloc(sizeof(aaaaacS));
aaaaac->nrefs = 1;
aaaaac->isIter = 0;
aaaaac->isStr = 0;
aaaaac->isEC =0;
aaaaac->forC = aaaaaf;
aaaaac->iter = aaaablCopy;
aaaaac->iterorg = aaaabl;
aaaaac->next = &aaaaacF;
aaaaac->visited= 0;
>>>>>>> c442a05405fc2ca23da1fc2764d721b9f8bf9221
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

<<<<<<< HEAD
=======
void * aaaaby = NULL;
aaaaby = d;
d = aaaaan;
incRef(d);
decRef(aaaaby);
>>>>>>> c442a05405fc2ca23da1fc2764d721b9f8bf9221





void * aaaaaq = NULL;
aaaaaq = re;
re = NULL;
incRef(re);
decRef(aaaaaq);

<<<<<<< HEAD





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
=======
if (d!= NULL) {
(*(int *)d)--;
}
return d;
>>>>>>> c442a05405fc2ca23da1fc2764d721b9f8bf9221
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
