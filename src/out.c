#include<stdio.h>
#include "cubex_main.h"
#include "cubex_external_functions.h"
#include "cubex_lib.h"

Iterable* input_= NULL;
int initialized_pqr = 0;
void* aaaaajF(void*);
void* aaaaaiF(void*);
typedef struct aaaaai_struct {
	int nrefs; 
	int isIter; 
	int isStr; 
	int isEC; 
	int visited;
	void* eC;
	void* (*next)(void*);
	void* v_;
}aaaaaiS;
void* aaaaahF(void*);
typedef struct aaaaah_struct {
	int nrefs; 
	int isIter; 
	int isStr; 
	int isEC; 
	int visited;
	void* eC;
	void* (*next)(void*);
	void* v_;
}aaaaahS;
void* aaaaagF(void*);
typedef struct aaaaag_struct {
	int nrefs; 
	int isIter; 
	int isStr; 
	int isEC; 
	int visited;
	void* eC;
	void* (*next)(void*);
	void* v_;
}aaaaagS;
Iterable* aaaaagIterNext(void*);
typedef struct aaaaaj_struct {
	int nrefs; 
	int isIter; 
	int isStr; 
	int isEC; 
	int visited;
	void* eC;
	void* (*next)(void*);
	void* v_;
}aaaaajS;
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
void* aaaaabF(void*);
typedef struct aaaaab_struct {
	int nrefs; 
	int isIter; 
	int isStr; 
	int isEC; 
	int visited;
	void* eC;
	void* (*next)(void*);
}aaaaabS;
void* aaaaaaF(void*);
typedef struct aaaaaa_struct {
	int nrefs; 
	int isIter; 
	int isStr; 
	int isEC; 
	int visited;
	void* eC;
	void* (*next)(void*);
}aaaaaaS;
Iterable* aaaaaaIterNext(void*);
void* aaaaadF(void*);
typedef struct aaaaad_struct {
	int nrefs; 
	int isIter; 
	int isStr; 
	int isEC; 
	int visited;
	void* forC;
	Iterable* iter;
	Iterable* iterorg;
	void* (*next)(void*);
	void* v_;
}aaaaadS;
Iterable* aaaaadIterNext(void*);
void* aaaaakF(void*);
typedef struct aaaaak_struct {
	int nrefs; 
	int isIter; 
	int isStr; 
	int isEC; 
	int visited;
	void* eC;
	void* (*next)(void*);
}aaaaakS;
Iterable* aaaaakIterNext(void*);
void* aaaaalF(void*);
typedef struct aaaaal_struct {
	int nrefs; 
	int isIter; 
	int isStr; 
	int isEC; 
	int visited;
	void* eC;
	void* (*next)(void*);
}aaaaalS;
Iterable* aaaaalIterNext(void*);


void* aaaaaiF(void* c_aaaaay) {
aaaaaiS* this_aaaaaz= (aaaaaiS*) c_aaaaay;
void*v_=this_aaaaaz->v_;
if(this_aaaaaz->visited){ 
	return NULL;
}else {
	this_aaaaaz->visited=1; 
	return v_;
	}
}
void* aaaaahF(void* c_aaaaba) {
aaaaahS* this_aaaabb= (aaaaahS*) c_aaaaba;
void*v_=this_aaaabb->v_;
if(this_aaaabb->visited){ 
	return ((aaaaaiS*)this_aaaabb->eC)->next(this_aaaabb->eC);
}else {
	if (this_aaaabb->eC!=NULL&&this_aaaabb->visited==0){		((aaaaaiS*)this_aaaabb->eC)->visited=0;}
		this_aaaabb->visited=1; 
	return v_;
	}
}
void* aaaaagF(void* c_aaaabc) {
aaaaagS* this_aaaabd= (aaaaagS*) c_aaaabc;
void*v_=this_aaaabd->v_;
if(this_aaaabd->visited){ 
	return ((aaaaahS*)this_aaaabd->eC)->next(this_aaaabd->eC);
}else {
	if (this_aaaabd->eC!=NULL&&this_aaaabd->visited==0){		((aaaaahS*)this_aaaabd->eC)->visited=0;}
		this_aaaabd->visited=1; 
	return v_;
	}
}
Iterable* aaaaagIterNext(void* aaaabf){ 
Iterable* this=(Iterable*)aaaabf;
if (((aaaaagS*)this->c) != NULL) {
	void* aaaabe = this->value;
	this->value=((aaaaagS*)this->c)->next(this->c);
	incRef(this->value);
	decRef(aaaabe);
	if(this->value)
		return this;
	else
		return NULL;
}
else
	return NULL;
}
void* aaaaajF(void* c_aaaaav) {
aaaaajS* this_aaaaaw= (aaaaajS*) c_aaaaav;
void*v_=this_aaaaaw->v_;
if(this_aaaaaw->visited){ 
	return NULL;
}else {
	this_aaaaaw->visited=1; 
aaaaaiS* aaaaai;
aaaaai = (aaaaaiS*) x3malloc(sizeof(aaaaaiS));
aaaaai->nrefs = 1;
aaaaai->isIter = 0;
aaaaai->isStr = 0;
aaaaai->isEC = 1;
aaaaai->eC = NULL;
aaaaai->next = &aaaaaiF;
aaaaai->visited= 0;
aaaaai->v_=v_;
incRef(v_);
aaaaahS* aaaaah;
aaaaah = (aaaaahS*) x3malloc(sizeof(aaaaahS));
aaaaah->nrefs = 1;
aaaaah->isIter = 0;
aaaaah->isStr = 0;
aaaaah->isEC = 1;
aaaaah->eC = aaaaai;
aaaaah->next = &aaaaahF;
aaaaah->visited= 0;
aaaaah->v_=v_;
incRef(v_);
aaaaagS* aaaaag;
aaaaag = (aaaaagS*) x3malloc(sizeof(aaaaagS));
aaaaag->nrefs = 1;
aaaaag->isIter = 0;
aaaaag->isStr = 0;
aaaaag->isEC = 1;
aaaaag->eC = aaaaah;
aaaaag->next = &aaaaagF;
aaaaag->visited= 0;
aaaaag->v_=v_;
incRef(v_);
Iterable* aaaaax;
aaaaax = (Iterable*) x3malloc(sizeof(Iterable));
aaaaax->isIter = 1;
aaaaax->nrefs = 0;
aaaaax->value = NULL;
aaaaax->c = aaaaag;
aaaaax->additional = NULL;
aaaaax->next = &aaaaagIterNext;
aaaaax->concat = NULL;

	return aaaaax;
	}
}
void* aaaaacF(void* c_aaaabh) {
aaaaacS* this_aaaabi= (aaaaacS*) c_aaaabh;
if(this_aaaabi->visited){ 
	return NULL;
}else {
	this_aaaabi->visited=1; 
Integer* aaaabj;
aaaabj = (Integer*) x3malloc(sizeof(Integer));
(aaaabj->nrefs) = 0;
aaaabj->value = 3;
	return aaaabj;
	}
}
void* aaaaabF(void* c_aaaabk) {
aaaaabS* this_aaaabl= (aaaaabS*) c_aaaabk;
if(this_aaaabl->visited){ 
	return ((aaaaacS*)this_aaaabl->eC)->next(this_aaaabl->eC);
}else {
	if (this_aaaabl->eC!=NULL&&this_aaaabl->visited==0){		((aaaaacS*)this_aaaabl->eC)->visited=0;}
		this_aaaabl->visited=1; 
Integer* aaaabm;
aaaabm = (Integer*) x3malloc(sizeof(Integer));
(aaaabm->nrefs) = 0;
aaaabm->value = 2;
	return aaaabm;
	}
}
void* aaaaaaF(void* c_aaaabn) {
aaaaaaS* this_aaaabo= (aaaaaaS*) c_aaaabn;
if(this_aaaabo->visited){ 
	return ((aaaaabS*)this_aaaabo->eC)->next(this_aaaabo->eC);
}else {
	if (this_aaaabo->eC!=NULL&&this_aaaabo->visited==0){		((aaaaabS*)this_aaaabo->eC)->visited=0;}
		this_aaaabo->visited=1; 
Integer* aaaabp;
aaaabp = (Integer*) x3malloc(sizeof(Integer));
(aaaabp->nrefs) = 0;
aaaabp->value = 1;
	return aaaabp;
	}
}
Iterable* aaaaaaIterNext(void* aaaabr){ 
Iterable* this=(Iterable*)aaaabr;
if (((aaaaaaS*)this->c) != NULL) {
	void* aaaabq = this->value;
	this->value=((aaaaaaS*)this->c)->next(this->c);
	incRef(this->value);
	decRef(aaaabq);
	if(this->value)
		return this;
	else
		return NULL;
}
else
	return NULL;
}
void* aaaaadF(void* c_aaaabt) {
aaaaadS* this_aaaabs= (aaaaadS*) c_aaaabt;
if (this_aaaabs->forC!=NULL&&this_aaaabs->visited==0){
	((aaaaajS*)this_aaaabs->forC)->visited=0;}
this_aaaabs->visited=1; 
if (this_aaaabs->iter==NULL) {
 return NULL;}
if (this_aaaabs->iter->value==NULL) {this_aaaabs->iter=iterGetNext(this_aaaabs->iter);}
if (this_aaaabs->iter==NULL||this_aaaabs->iter->value==NULL) {
 return NULL;}
void*v_=this_aaaabs->iter->value;
	 ((aaaaajS*)this_aaaabs->forC)->v_=v_;
void* ret=((aaaaajS*)this_aaaabs->forC)->next(this_aaaabs->forC);
if (ret==NULL){
	((aaaaajS*)this_aaaabs->forC)->visited=0;
	 this_aaaabs->iter=iterGetNext(this_aaaabs->iter);
if (this_aaaabs->iter==NULL) {
		this_aaaabs->iter= (Iterable *)x3malloc(sizeof(Iterable));
		this_aaaabs->iter->nrefs =this_aaaabs->iterorg->nrefs;
		this_aaaabs->iter->isIter =this_aaaabs->iterorg->isIter;
		this_aaaabs->iter->isStr =this_aaaabs->iterorg->isStr;
		this_aaaabs->iter->value =this_aaaabs->iterorg->value;
		this_aaaabs->iter->c =this_aaaabs->iterorg->c;
		this_aaaabs->iter->additional =this_aaaabs->iterorg->additional;
		this_aaaabs->iter->next =this_aaaabs->iterorg->next;
		this_aaaabs->iter->concat =this_aaaabs->iterorg->concat;
				*((int*)this_aaaabs->iter->c+4)=0;
incRef(this_aaaabs->iterorg->c);
	return NULL;}
	v_=this_aaaabs->iter->value;
	 ((aaaaajS*)this_aaaabs->forC)->v_=v_;
return ((aaaaajS*)this_aaaabs->forC)->next(this_aaaabs->forC);
}
return ret;
}
Iterable* aaaaadIterNext(void* aaaabv){ 
Iterable* this=(Iterable*)aaaabv;
if (((aaaaadS*)this->c) != NULL) {
	void* aaaabu = this->value;
	this->value=((aaaaadS*)this->c)->next(this->c);
	incRef(this->value);
	decRef(aaaabu);
	if(this->value)
		return this;
	else
		return NULL;
}
else
	return NULL;
}
void* aaaaakF(void* c_aaaacj) {
aaaaakS* this_aaaack= (aaaaakS*) c_aaaacj;
if(this_aaaack->visited){ 
	return NULL;
}else {
	this_aaaack->visited=1; 
String* aaaacl;
aaaacl = (String *) x3malloc(sizeof(String));
(aaaacl->isIter) = 0;
aaaacl->value = (char*) x3malloc(sizeof("wa"));
(aaaacl->nrefs) = 0;
(aaaacl->isStr) = 1;
aaaacl->len = sizeof("wa") - 1;
mystrcpy(aaaacl->value, "wa");
	return aaaacl;
	}
}
Iterable* aaaaakIterNext(void* aaaacn){ 
Iterable* this=(Iterable*)aaaacn;
if (((aaaaakS*)this->c) != NULL) {
	void* aaaacm = this->value;
	this->value=((aaaaakS*)this->c)->next(this->c);
	incRef(this->value);
	decRef(aaaacm);
	if(this->value)
		return this;
	else
		return NULL;
}
else
	return NULL;
}
void* aaaaalF(void* c_aaaadb) {
aaaaalS* this_aaaadc= (aaaaalS*) c_aaaadb;
if(this_aaaadc->visited){ 
	return NULL;
}else {
	this_aaaadc->visited=1; 
String* aaaadd;
aaaadd = (String *) x3malloc(sizeof(String));
(aaaadd->isIter) = 0;
aaaadd->value = (char*) x3malloc(sizeof("end"));
(aaaadd->nrefs) = 0;
(aaaadd->isStr) = 1;
aaaadd->len = sizeof("end") - 1;
mystrcpy(aaaadd->value, "end");
	return aaaadd;
	}
}
Iterable* aaaaalIterNext(void* aaaadf){ 
Iterable* this=(Iterable*)aaaadf;
if (((aaaaalS*)this->c) != NULL) {
	void* aaaade = this->value;
	this->value=((aaaaalS*)this->c)->next(this->c);
	incRef(this->value);
	decRef(aaaade);
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
void * c_ = NULL;
void * mm_ = NULL;
void * i_ = NULL;
void * aaaaas = NULL;
void * aaaaat = NULL;






aaaaajS* aaaaaj;
aaaaaj = (aaaaajS*) x3malloc(sizeof(aaaaajS));
aaaaaj->nrefs = 1;
aaaaaj->isIter = 0;
aaaaaj->isStr = 0;
aaaaaj->isEC = 1;
aaaaaj->eC = NULL;
aaaaaj->next = &aaaaajF;
aaaaaj->visited= 0;
aaaaacS* aaaaac;
aaaaac = (aaaaacS*) x3malloc(sizeof(aaaaacS));
aaaaac->nrefs = 1;
aaaaac->isIter = 0;
aaaaac->isStr = 0;
aaaaac->isEC = 1;
aaaaac->eC = NULL;
aaaaac->next = &aaaaacF;
aaaaac->visited= 0;
aaaaabS* aaaaab;
aaaaab = (aaaaabS*) x3malloc(sizeof(aaaaabS));
aaaaab->nrefs = 1;
aaaaab->isIter = 0;
aaaaab->isStr = 0;
aaaaab->isEC = 1;
aaaaab->eC = aaaaac;
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
Iterable* aaaabg;
aaaabg = (Iterable*) x3malloc(sizeof(Iterable));
aaaabg->isIter = 1;
aaaabg->nrefs = 0;
aaaabg->value = NULL;
aaaabg->c = aaaaaa;
aaaabg->additional = NULL;
aaaabg->next = &aaaaaaIterNext;
aaaabg->concat = NULL;

Iterable *aaaabgCopy;
		aaaabgCopy = (Iterable *)x3malloc(sizeof(Iterable));
		aaaabgCopy->nrefs = ((Iterable *)aaaabg)->nrefs;
		aaaabgCopy->isIter = ((Iterable *)aaaabg)->isIter;
		aaaabgCopy->isStr = ((Iterable *)aaaabg)->isStr;
		aaaabgCopy->value = ((Iterable *)aaaabg)->value;
		aaaabgCopy->c = ((Iterable *)aaaabg)->c;
		aaaabgCopy->additional = ((Iterable *)aaaabg)->additional;
		aaaabgCopy->next = ((Iterable *)aaaabg)->next;
		aaaabgCopy->concat = ((Iterable *)aaaabg)->concat;
		incRef((((Iterable*)aaaabgCopy)->c));
aaaaadS* aaaaad;
aaaaad = (aaaaadS*) x3malloc(sizeof(aaaaadS));
aaaaad->nrefs = 1;
aaaaad->isIter = 0;
aaaaad->isStr = 0;
aaaaad->isEC =0;
aaaaad->forC = aaaaaj;
aaaaad->iter = aaaabgCopy;
aaaaad->iterorg = aaaabg;
aaaaad->next = &aaaaadF;
aaaaad->visited= 0;
Iterable* aaaaau;
aaaaau = (Iterable*) x3malloc(sizeof(Iterable));
aaaaau->isIter = 1;
aaaaau->nrefs = 0;
aaaaau->value = NULL;
aaaaau->c = aaaaad;
aaaaau->additional = NULL;
aaaaau->next = &aaaaadIterNext;
aaaaau->concat = NULL;

void * aaaabw = NULL;
aaaabw = c_;
c_ = aaaaau;
incRef(c_);
decRef(aaaabw);






void * aaaaby = NULL;
aaaaby = mm_;
mm_ = NULL;
incRef(mm_);
decRef(aaaaby);






void * aaaabz = NULL;
aaaabz = i_;
i_ = c_;
incRef(i_);
decRef(aaaabz);
decRef(c_);
	if (i_!=NULL) {
		if ((*((int *)(i_+1))) == 0) {
void * aaaaca = NULL;
aaaaca = i_;
			i_ = strToIter( ((String *)i_)->value, ((String *)i_)->len);
incRef(i_);
decRef(aaaaca);
		}
	}
if (i_!=NULL) {
	if (((Iterable*)i_)->c!=NULL) {
		Iterable *aaaacb = NULL;
		aaaacb = (Iterable *)x3malloc(sizeof(Iterable));
		((Iterable*)aaaacb)->nrefs = ((Iterable*)i_)->nrefs;
		((Iterable*)aaaacb)->isIter = ((Iterable*)i_)->isIter;
		((Iterable*)aaaacb)->isStr = ((Iterable*)i_)->isStr;
		((Iterable*)aaaacb)->value = ((Iterable*)i_)->value;
		((Iterable*)aaaacb)->c = ((Iterable*)i_)->c;
		((Iterable*)aaaacb)->additional = ((Iterable*)i_)->additional;
		((Iterable*)aaaacb)->next = ((Iterable*)i_)->next;
		((Iterable*)aaaacb)->concat = ((Iterable*)i_)->concat;
		incRef((((Iterable*)aaaacb)->c));
		i_ = iterGetNext(aaaacb);
		(*((int*)((Iterable*)aaaacb)->c+5)) = 0;
	}
}
	while (i_!=NULL) {
Iterable * aaaaam = NULL;
		aaaaam = (Iterable *)i_;
		incRef(aaaaam);
void * aaaacc = NULL;
aaaacc = i_;
		i_ = aaaaam->value;
		incRef(i_);
		decRef(aaaacc);
		


void * v_ = NULL;
void * aaaaan = NULL;






void * aaaacd = NULL;
aaaacd = v_;
v_ = i_;
incRef(v_);
decRef(aaaacd);
decRef(i_);
	if (v_!=NULL) {
		if ((*((int *)(v_+1))) == 0) {
void * aaaace = NULL;
aaaace = v_;
			v_ = strToIter( ((String *)v_)->value, ((String *)v_)->len);
incRef(v_);
decRef(aaaace);
		}
	}
if (v_!=NULL) {
	if (((Iterable*)v_)->c!=NULL) {
		Iterable *aaaacf = NULL;
		aaaacf = (Iterable *)x3malloc(sizeof(Iterable));
		((Iterable*)aaaacf)->nrefs = ((Iterable*)v_)->nrefs;
		((Iterable*)aaaacf)->isIter = ((Iterable*)v_)->isIter;
		((Iterable*)aaaacf)->isStr = ((Iterable*)v_)->isStr;
		((Iterable*)aaaacf)->value = ((Iterable*)v_)->value;
		((Iterable*)aaaacf)->c = ((Iterable*)v_)->c;
		((Iterable*)aaaacf)->additional = ((Iterable*)v_)->additional;
		((Iterable*)aaaacf)->next = ((Iterable*)v_)->next;
		((Iterable*)aaaacf)->concat = ((Iterable*)v_)->concat;
		incRef((((Iterable*)aaaacf)->c));
		v_ = iterGetNext(aaaacf);
		(*((int*)((Iterable*)aaaacf)->c+5)) = 0;
	}
}
	while (v_!=NULL) {
Iterable * aaaaao = NULL;
		aaaaao = (Iterable *)v_;
		incRef(aaaaao);
void * aaaacg = NULL;
aaaacg = v_;
		v_ = aaaaao->value;
		incRef(v_);
		decRef(aaaacg);
decRef(v_);
		


void * aaaaaq = NULL;
void * aaaaar = NULL;
void * aaaaap = NULL;



void * aaaach = NULL;
aaaach = aaaaaq;
aaaaaq = mm_;
incRef(aaaaaq);
decRef(aaaach);
decRef(mm_);



aaaaakS* aaaaak;
aaaaak = (aaaaakS*) x3malloc(sizeof(aaaaakS));
aaaaak->nrefs = 1;
aaaaak->isIter = 0;
aaaaak->isStr = 0;
aaaaak->isEC = 1;
aaaaak->eC = NULL;
aaaaak->next = &aaaaakF;
aaaaak->visited= 0;
Iterable* aaaaci;
aaaaci = (Iterable*) x3malloc(sizeof(Iterable));
aaaaci->isIter = 1;
aaaaci->nrefs = 0;
aaaaci->value = NULL;
aaaaci->c = aaaaak;
aaaaci->additional = NULL;
aaaaci->next = &aaaaakIterNext;
aaaaci->concat = NULL;

void * aaaaco = NULL;
aaaaco = aaaaar;
aaaaar = aaaaci;
incRef(aaaaar);
decRef(aaaaco);



void *aaaacq;
aaaacq = aaaaaq;
if (aaaacq!=NULL) {
(*((int *)aaaacq))++;
if ((*((int *)aaaaaq+1)) == 0) {
decRef(aaaacq);
aaaacq = strToIter( ((String *)aaaaaq)->value, ((String *)aaaaaq)->len);
incRef(aaaacq);
}
}
void *aaaacr;
aaaacr = aaaaar;
if (aaaacr!=NULL) {
(*((int *)aaaacr))++;
if ((*((int *)aaaaar+1)) == 0) {
decRef(aaaacr);
aaaacr = strToIter( ((String *)aaaaar)->value, ((String *)aaaaar)->len);
incRef(aaaacr);
}
}
Iterable* aaaacp;
aaaacp = concatenate((Iterable*)aaaacq, (Iterable*) aaaacr);
decRef(aaaacq);
decRef(aaaacr);
void * aaaacs = NULL;
aaaacs = mm_;
mm_ = aaaacp;
incRef(mm_);
decRef(aaaacs);
decRef(aaaaaq);
decRef(aaaaar);



void * aaaact = NULL;
aaaact = aaaaap;
aaaaap = aaaaao;
incRef(aaaaap);
decRef(aaaact);
decRef(aaaaao);




void* aaaacu;
aaaacu = iterGetNext((void*) aaaaap);
void * aaaacv = NULL;
aaaacv = v_;
v_ = aaaacu;
incRef(v_);
decRef(aaaacv);
decRef(aaaaap);
	}
decRef(v_);



void * aaaacw = NULL;
aaaacw = aaaaan;
aaaaan = aaaaam;
incRef(aaaaan);
decRef(aaaacw);
decRef(aaaaam);




void* aaaacx;
aaaacx = iterGetNext((void*) aaaaan);
void * aaaacy = NULL;
aaaacy = i_;
i_ = aaaacx;
incRef(i_);
decRef(aaaacy);
decRef(aaaaan);
	}
decRef(i_);






void * aaaacz = NULL;
aaaacz = aaaaas;
aaaaas = mm_;
incRef(aaaaas);
decRef(aaaacz);
decRef(mm_);



aaaaalS* aaaaal;
aaaaal = (aaaaalS*) x3malloc(sizeof(aaaaalS));
aaaaal->nrefs = 1;
aaaaal->isIter = 0;
aaaaal->isStr = 0;
aaaaal->isEC = 1;
aaaaal->eC = NULL;
aaaaal->next = &aaaaalF;
aaaaal->visited= 0;
Iterable* aaaada;
aaaada = (Iterable*) x3malloc(sizeof(Iterable));
aaaada->isIter = 1;
aaaada->nrefs = 0;
aaaada->value = NULL;
aaaada->c = aaaaal;
aaaada->additional = NULL;
aaaada->next = &aaaaalIterNext;
aaaada->concat = NULL;

void * aaaadg = NULL;
aaaadg = aaaaat;
aaaaat = aaaada;
incRef(aaaaat);
decRef(aaaadg);



void *aaaadi;
aaaadi = aaaaas;
if (aaaadi!=NULL) {
(*((int *)aaaadi))++;
if ((*((int *)aaaaas+1)) == 0) {
decRef(aaaadi);
aaaadi = strToIter( ((String *)aaaaas)->value, ((String *)aaaaas)->len);
incRef(aaaadi);
}
}
void *aaaadj;
aaaadj = aaaaat;
if (aaaadj!=NULL) {
(*((int *)aaaadj))++;
if ((*((int *)aaaaat+1)) == 0) {
decRef(aaaadj);
aaaadj = strToIter( ((String *)aaaaat)->value, ((String *)aaaaat)->len);
incRef(aaaadj);
}
}
Iterable* aaaadh;
aaaadh = concatenate((Iterable*)aaaadi, (Iterable*) aaaadj);
decRef(aaaadi);
decRef(aaaadj);
decRef(aaaaas);
decRef(aaaaat);
return aaaadh;
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
