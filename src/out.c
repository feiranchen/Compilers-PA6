#include<stdio.h>
#include "cubex_main.h"
#include "cubex_external_functions.h"
#include "cubex_lib.h"

Iterable* input_= NULL;
int initialized_pqr = 0;
void* aaaaagF(void*);
typedef struct aaaaag_struct {
	int nrefs; 
	int isIter; 
	int isStr; 
	int isEC; 
	int visited;
	void* eC;
	void* (*next)(void*);
	void* y_;
}aaaaagS;
void* aaaaafF(void*);
typedef struct aaaaaf_struct {
	int nrefs; 
	int isIter; 
	int isStr; 
	int isEC; 
	int visited;
	void* eC;
	void* (*next)(void*);
	void* x_;
	void* y_;
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
	void* x_;
	void* y_;
}aaaaaeS;
void* aaaaabF(void*);
typedef struct aaaaab_struct {
	int nrefs; 
	int isIter; 
	int isStr; 
	int isEC; 
	int visited;
	void* forC;
	Iterable* iter;
	Iterable* iterorg;
	void* (*next)(void*);
	void* x_;
	void* y_;
}aaaaabS;
void* aaaaaaF(void*);
typedef struct aaaaaa_struct {
	int nrefs; 
	int isIter; 
	int isStr; 
	int isEC; 
	int visited;
	void* forC;
	Iterable* iter;
	Iterable* iterorg;
	void* (*next)(void*);
	void* x_;
}aaaaaaS;
Iterable* aaaaaaIterNext(void*);
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
void* aaaaaiF(void*);
typedef struct aaaaai_struct {
	int nrefs; 
	int isIter; 
	int isStr; 
	int isEC; 
	int visited;
	void* eC;
	void* (*next)(void*);
}aaaaaiS;
Iterable* aaaaaiIterNext(void*);
void* aaaaajF(void*);
typedef struct aaaaaj_struct {
	int nrefs; 
	int isIter; 
	int isStr; 
	int isEC; 
	int visited;
	void* eC;
	void* (*next)(void*);
}aaaaajS;
Iterable* aaaaajIterNext(void*);
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
void* aaaaamF(void*);
typedef struct aaaaam_struct {
	int nrefs; 
	int isIter; 
	int isStr; 
	int isEC; 
	int visited;
	void* eC;
	void* (*next)(void*);
}aaaaamS;
Iterable* aaaaamIterNext(void*);


void* aaaaagF(void* c_aaaabh) {
aaaaagS* this_aaaabi= (aaaaagS*) c_aaaabh;
void*y_=this_aaaabi->y_;
if(this_aaaabi->visited){ 
	return NULL;
}else {
	this_aaaabi->visited=1; 
	return y_;
	}
}
void* aaaaafF(void* c_aaaabj) {
aaaaafS* this_aaaabk= (aaaaafS*) c_aaaabj;
void*x_=this_aaaabk->x_;
void*y_=this_aaaabk->y_;
((aaaaagS*)this_aaaabk->eC)->y_=this_aaaabk->y_;
if(this_aaaabk->visited){ 
	return ((aaaaagS*)this_aaaabk->eC)->next(this_aaaabk->eC);
}else {
	if (this_aaaabk->eC!=NULL&&this_aaaabk->visited==0){		((aaaaagS*)this_aaaabk->eC)->visited=0;}
		this_aaaabk->visited=1; 
	return x_;
	}
}
void* aaaaaeF(void* c_aaaabl) {
aaaaaeS* this_aaaabm= (aaaaaeS*) c_aaaabl;
void* x_=this_aaaabm->x_;
void* y_=this_aaaabm->y_;
((aaaaafS*)this_aaaabm->ifC)->x_=this_aaaabm->x_;
((aaaaafS*)this_aaaabm->ifC)->y_=this_aaaabm->y_;
if (this_aaaabm->ifC!=NULL&&this_aaaabm->visited==0){	((aaaaafS*)this_aaaabm->ifC)->visited=0;}
this_aaaabm->visited=1; 

Boolean* aaaabn = (Boolean*) x3malloc(sizeof(Boolean));
aaaabn->nrefs = 0;
aaaabn->value = ((Integer*) x_)->value != ((Integer*) y_)->value;
if( ((Boolean *)aaaabn)->value){
	return ((aaaaafS*)this_aaaabm->ifC)->next(this_aaaabm->ifC);
} 
else {
	return NULL;
}
}
void* aaaaabF(void* c_aaaabt) {
aaaaabS* this_aaaabs= (aaaaabS*) c_aaaabt;
((aaaaaeS*)this_aaaabs->forC)->x_=this_aaaabs->x_;
if (this_aaaabs->forC!=NULL&&this_aaaabs->visited==0){
	((aaaaaeS*)this_aaaabs->forC)->visited=0;}
this_aaaabs->visited=1; 
if (this_aaaabs->iter==NULL) {
 return NULL;}
if (this_aaaabs->iter->value==NULL) {this_aaaabs->iter=iterGetNext(this_aaaabs->iter);}
if (this_aaaabs->iter==NULL||this_aaaabs->iter->value==NULL) {
 return NULL;}
void*y_=this_aaaabs->iter->value;
	 ((aaaaaeS*)this_aaaabs->forC)->y_=y_;
void* ret=((aaaaaeS*)this_aaaabs->forC)->next(this_aaaabs->forC);
if (ret==NULL){
	((aaaaaeS*)this_aaaabs->forC)->visited=0;
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
	y_=this_aaaabs->iter->value;
	 ((aaaaaeS*)this_aaaabs->forC)->y_=y_;
return ((aaaaaeS*)this_aaaabs->forC)->next(this_aaaabs->forC);
}
return ret;
}
void* aaaaaaF(void* c_aaaabz) {
aaaaaaS* this_aaaaby= (aaaaaaS*) c_aaaabz;
if (this_aaaaby->forC!=NULL&&this_aaaaby->visited==0){
	((aaaaabS*)this_aaaaby->forC)->visited=0;}
this_aaaaby->visited=1; 
if (this_aaaaby->iter==NULL) {
 return NULL;}
if (this_aaaaby->iter->value==NULL) {this_aaaaby->iter=iterGetNext(this_aaaaby->iter);}
if (this_aaaaby->iter==NULL||this_aaaaby->iter->value==NULL) {
 return NULL;}
void*x_=this_aaaaby->iter->value;
	 ((aaaaabS*)this_aaaaby->forC)->x_=x_;
void* ret=((aaaaabS*)this_aaaaby->forC)->next(this_aaaaby->forC);
if (ret==NULL){
	((aaaaabS*)this_aaaaby->forC)->visited=0;
	 this_aaaaby->iter=iterGetNext(this_aaaaby->iter);
if (this_aaaaby->iter==NULL) {
		this_aaaaby->iter= (Iterable *)x3malloc(sizeof(Iterable));
		this_aaaaby->iter->nrefs =this_aaaaby->iterorg->nrefs;
		this_aaaaby->iter->isIter =this_aaaaby->iterorg->isIter;
		this_aaaaby->iter->isStr =this_aaaaby->iterorg->isStr;
		this_aaaaby->iter->value =this_aaaaby->iterorg->value;
		this_aaaaby->iter->c =this_aaaaby->iterorg->c;
		this_aaaaby->iter->additional =this_aaaaby->iterorg->additional;
		this_aaaaby->iter->next =this_aaaaby->iterorg->next;
		this_aaaaby->iter->concat =this_aaaaby->iterorg->concat;
				*((int*)this_aaaaby->iter->c+4)=0;
incRef(this_aaaaby->iterorg->c);
	return NULL;}
	x_=this_aaaaby->iter->value;
	 ((aaaaabS*)this_aaaaby->forC)->x_=x_;
return ((aaaaabS*)this_aaaaby->forC)->next(this_aaaaby->forC);
}
return ret;
}
Iterable* aaaaaaIterNext(void* aaaacb){ 
Iterable* this=(Iterable*)aaaacb;
if (((aaaaaaS*)this->c) != NULL) {
	void* aaaaca = this->value;
	this->value=((aaaaaaS*)this->c)->next(this->c);
	incRef(this->value);
	decRef(aaaaca);
	if(this->value)
		return this;
	else
		return NULL;
}
else
	return NULL;
}
void* aaaaahF(void* c_aaaacx) {
aaaaahS* this_aaaacy= (aaaaahS*) c_aaaacx;
if(this_aaaacy->visited){ 
	return NULL;
}else {
	this_aaaacy->visited=1; 
String* aaaacz;
aaaacz = (String *) x3malloc(sizeof(String));
(aaaacz->isIter) = 0;
aaaacz->value = (char*) x3malloc(sizeof("A"));
(aaaacz->nrefs) = 0;
(aaaacz->isStr) = 1;
aaaacz->len = sizeof("A") - 1;
mystrcpy(aaaacz->value, "A");
	return aaaacz;
	}
}
Iterable* aaaaahIterNext(void* aaaadb){ 
Iterable* this=(Iterable*)aaaadb;
if (((aaaaahS*)this->c) != NULL) {
	void* aaaada = this->value;
	this->value=((aaaaahS*)this->c)->next(this->c);
	incRef(this->value);
	decRef(aaaada);
	if(this->value)
		return this;
	else
		return NULL;
}
else
	return NULL;
}
void* aaaaaiF(void* c_aaaadi) {
aaaaaiS* this_aaaadj= (aaaaaiS*) c_aaaadi;
if(this_aaaadj->visited){ 
	return NULL;
}else {
	this_aaaadj->visited=1; 
String* aaaadk;
aaaadk = (String *) x3malloc(sizeof(String));
(aaaadk->isIter) = 0;
aaaadk->value = (char*) x3malloc(sizeof("B"));
(aaaadk->nrefs) = 0;
(aaaadk->isStr) = 1;
aaaadk->len = sizeof("B") - 1;
mystrcpy(aaaadk->value, "B");
	return aaaadk;
	}
}
Iterable* aaaaaiIterNext(void* aaaadm){ 
Iterable* this=(Iterable*)aaaadm;
if (((aaaaaiS*)this->c) != NULL) {
	void* aaaadl = this->value;
	this->value=((aaaaaiS*)this->c)->next(this->c);
	incRef(this->value);
	decRef(aaaadl);
	if(this->value)
		return this;
	else
		return NULL;
}
else
	return NULL;
}
void* aaaaajF(void* c_aaaadt) {
aaaaajS* this_aaaadu= (aaaaajS*) c_aaaadt;
if(this_aaaadu->visited){ 
	return NULL;
}else {
	this_aaaadu->visited=1; 
String* aaaadv;
aaaadv = (String *) x3malloc(sizeof(String));
(aaaadv->isIter) = 0;
aaaadv->value = (char*) x3malloc(sizeof("C"));
(aaaadv->nrefs) = 0;
(aaaadv->isStr) = 1;
aaaadv->len = sizeof("C") - 1;
mystrcpy(aaaadv->value, "C");
	return aaaadv;
	}
}
Iterable* aaaaajIterNext(void* aaaadx){ 
Iterable* this=(Iterable*)aaaadx;
if (((aaaaajS*)this->c) != NULL) {
	void* aaaadw = this->value;
	this->value=((aaaaajS*)this->c)->next(this->c);
	incRef(this->value);
	decRef(aaaadw);
	if(this->value)
		return this;
	else
		return NULL;
}
else
	return NULL;
}
void* aaaaakF(void* c_aaaaee) {
aaaaakS* this_aaaaef= (aaaaakS*) c_aaaaee;
if(this_aaaaef->visited){ 
	return NULL;
}else {
	this_aaaaef->visited=1; 
String* aaaaeg;
aaaaeg = (String *) x3malloc(sizeof(String));
(aaaaeg->isIter) = 0;
aaaaeg->value = (char*) x3malloc(sizeof("D"));
(aaaaeg->nrefs) = 0;
(aaaaeg->isStr) = 1;
aaaaeg->len = sizeof("D") - 1;
mystrcpy(aaaaeg->value, "D");
	return aaaaeg;
	}
}
Iterable* aaaaakIterNext(void* aaaaei){ 
Iterable* this=(Iterable*)aaaaei;
if (((aaaaakS*)this->c) != NULL) {
	void* aaaaeh = this->value;
	this->value=((aaaaakS*)this->c)->next(this->c);
	incRef(this->value);
	decRef(aaaaeh);
	if(this->value)
		return this;
	else
		return NULL;
}
else
	return NULL;
}
void* aaaaalF(void* c_aaaaep) {
aaaaalS* this_aaaaeq= (aaaaalS*) c_aaaaep;
if(this_aaaaeq->visited){ 
	return NULL;
}else {
	this_aaaaeq->visited=1; 
String* aaaaer;
aaaaer = (String *) x3malloc(sizeof(String));
(aaaaer->isIter) = 0;
aaaaer->value = (char*) x3malloc(sizeof("E"));
(aaaaer->nrefs) = 0;
(aaaaer->isStr) = 1;
aaaaer->len = sizeof("E") - 1;
mystrcpy(aaaaer->value, "E");
	return aaaaer;
	}
}
Iterable* aaaaalIterNext(void* aaaaet){ 
Iterable* this=(Iterable*)aaaaet;
if (((aaaaalS*)this->c) != NULL) {
	void* aaaaes = this->value;
	this->value=((aaaaalS*)this->c)->next(this->c);
	incRef(this->value);
	decRef(aaaaes);
	if(this->value)
		return this;
	else
		return NULL;
}
else
	return NULL;
}
void* aaaaamF(void* c_aaaaev) {
aaaaamS* this_aaaaew= (aaaaamS*) c_aaaaev;
if(this_aaaaew->visited){ 
	return NULL;
}else {
	this_aaaaew->visited=1; 
String* aaaaex;
aaaaex = (String *) x3malloc(sizeof(String));
(aaaaex->isIter) = 0;
aaaaex->value = (char*) x3malloc(sizeof("a"));
(aaaaex->nrefs) = 0;
(aaaaex->isStr) = 1;
aaaaex->len = sizeof("a") - 1;
mystrcpy(aaaaex->value, "a");
	return aaaaex;
	}
}
Iterable* aaaaamIterNext(void* aaaaez){ 
Iterable* this=(Iterable*)aaaaez;
if (((aaaaamS*)this->c) != NULL) {
	void* aaaaey = this->value;
	this->value=((aaaaamS*)this->c)->next(this->c);
	incRef(this->value);
	decRef(aaaaey);
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
void * lst_ = NULL;
void * i_ = NULL;
void * u_ = NULL;
void * aaaaar = NULL;
void * aaaaas = NULL;
void * aaaaat = NULL;
void * aaaaau = NULL;
void * aaaaav = NULL;
void * aaaaaw = NULL;
void * aaaaax = NULL;
void * aaaaay = NULL;
void * aaaaaz = NULL;
void * aaaaba = NULL;
void * aaaabb = NULL;
void * aaaabc = NULL;
void * aaaabd = NULL;
void * aaaabe = NULL;
void * aaaabf = NULL;






aaaaagS* aaaaag;
aaaaag = (aaaaagS*) x3malloc(sizeof(aaaaagS));
aaaaag->nrefs = 1;
aaaaag->isIter = 0;
aaaaag->isStr = 0;
aaaaag->isEC = 1;
aaaaag->eC = NULL;
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
aaaaaeS* aaaaae;
aaaaae = (aaaaaeS*) x3malloc(sizeof(aaaaaeS));
aaaaae->nrefs = 1;
aaaaae->isIter = 0;
aaaaae->isStr = 0;
aaaaae->isEC =0;
aaaaae->ifC = aaaaaf;
aaaaae->next = &aaaaaeF;
aaaaae->visited= 0;
Integer* aaaabo;
aaaabo = (Integer*) x3malloc(sizeof(Integer));
(aaaabo->nrefs) = 0;
aaaabo->value = 1;
Integer* aaaabp;
aaaabp = (Integer*) x3malloc(sizeof(Integer));
(aaaabp->nrefs) = 0;
aaaabp->value = 10;
Iterable* aaaabq;
aaaabq = (Iterable*) x3malloc(sizeof(Iterable));
aaaabq->isIter = 1;
aaaabq->nrefs = 0;
aaaabq->value = aaaabo;
aaaabq->additional = aaaabp;
aaaabq->next = &Integer_through;
aaaabq->concat = NULL;
void * aaaabr = NULL;
aaaabr=checkIter(aaaabq);
Iterable *aaaabrCopy;
		aaaabrCopy = (Iterable *)x3malloc(sizeof(Iterable));
		aaaabrCopy->nrefs = ((Iterable *)aaaabr)->nrefs;
		aaaabrCopy->isIter = ((Iterable *)aaaabr)->isIter;
		aaaabrCopy->isStr = ((Iterable *)aaaabr)->isStr;
		aaaabrCopy->value = ((Iterable *)aaaabr)->value;
		aaaabrCopy->c = ((Iterable *)aaaabr)->c;
		aaaabrCopy->additional = ((Iterable *)aaaabr)->additional;
		aaaabrCopy->next = ((Iterable *)aaaabr)->next;
		aaaabrCopy->concat = ((Iterable *)aaaabr)->concat;
		incRef((((Iterable*)aaaabrCopy)->c));
aaaaabS* aaaaab;
aaaaab = (aaaaabS*) x3malloc(sizeof(aaaaabS));
aaaaab->nrefs = 1;
aaaaab->isIter = 0;
aaaaab->isStr = 0;
aaaaab->isEC =0;
aaaaab->forC = aaaaae;
aaaaab->iter = aaaabrCopy;
aaaaab->iterorg = aaaabr;
aaaaab->next = &aaaaabF;
aaaaab->visited= 0;
Integer* aaaabu;
aaaabu = (Integer*) x3malloc(sizeof(Integer));
(aaaabu->nrefs) = 0;
aaaabu->value = 1;
Integer* aaaabv;
aaaabv = (Integer*) x3malloc(sizeof(Integer));
(aaaabv->nrefs) = 0;
aaaabv->value = 10;
Iterable* aaaabw;
aaaabw = (Iterable*) x3malloc(sizeof(Iterable));
aaaabw->isIter = 1;
aaaabw->nrefs = 0;
aaaabw->value = aaaabu;
aaaabw->additional = aaaabv;
aaaabw->next = &Integer_through;
aaaabw->concat = NULL;
void * aaaabx = NULL;
aaaabx=checkIter(aaaabw);
Iterable *aaaabxCopy;
		aaaabxCopy = (Iterable *)x3malloc(sizeof(Iterable));
		aaaabxCopy->nrefs = ((Iterable *)aaaabx)->nrefs;
		aaaabxCopy->isIter = ((Iterable *)aaaabx)->isIter;
		aaaabxCopy->isStr = ((Iterable *)aaaabx)->isStr;
		aaaabxCopy->value = ((Iterable *)aaaabx)->value;
		aaaabxCopy->c = ((Iterable *)aaaabx)->c;
		aaaabxCopy->additional = ((Iterable *)aaaabx)->additional;
		aaaabxCopy->next = ((Iterable *)aaaabx)->next;
		aaaabxCopy->concat = ((Iterable *)aaaabx)->concat;
		incRef((((Iterable*)aaaabxCopy)->c));
aaaaaaS* aaaaaa;
aaaaaa = (aaaaaaS*) x3malloc(sizeof(aaaaaaS));
aaaaaa->nrefs = 1;
aaaaaa->isIter = 0;
aaaaaa->isStr = 0;
aaaaaa->isEC =0;
aaaaaa->forC = aaaaab;
aaaaaa->iter = aaaabxCopy;
aaaaaa->iterorg = aaaabx;
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

void * aaaacc = NULL;
aaaacc = lst_;
lst_ = aaaabg;
incRef(lst_);
decRef(aaaacc);






Integer* aaaacd;
aaaacd = (Integer*) x3malloc(sizeof(Integer));
(aaaacd->nrefs) = 0;
aaaacd->value = 0;
void * aaaace = NULL;
aaaace = i_;
i_ = aaaacd;
incRef(i_);
decRef(aaaace);






void * aaaacf = NULL;
aaaacf = u_;
u_ = lst_;
incRef(u_);
decRef(aaaacf);
decRef(lst_);
	if (u_!=NULL) {
		if ((*((int *)(u_+1))) == 0) {
void * aaaacg = NULL;
aaaacg = u_;
			u_ = strToIter( ((String *)u_)->value, ((String *)u_)->len);
incRef(u_);
decRef(aaaacg);
		}
	}
if (u_!=NULL) {
	if (((Iterable*)u_)->c!=NULL) {
		Iterable *aaaach = NULL;
		aaaach = (Iterable *)x3malloc(sizeof(Iterable));
		((Iterable*)aaaach)->nrefs = ((Iterable*)u_)->nrefs;
		((Iterable*)aaaach)->isIter = ((Iterable*)u_)->isIter;
		((Iterable*)aaaach)->isStr = ((Iterable*)u_)->isStr;
		((Iterable*)aaaach)->value = ((Iterable*)u_)->value;
		((Iterable*)aaaach)->c = ((Iterable*)u_)->c;
		((Iterable*)aaaach)->additional = ((Iterable*)u_)->additional;
		((Iterable*)aaaach)->next = ((Iterable*)u_)->next;
		((Iterable*)aaaach)->concat = ((Iterable*)u_)->concat;
		incRef((((Iterable*)aaaach)->c));
		u_ = iterGetNext(aaaach);
		(*((int*)((Iterable*)aaaach)->c+5)) = 0;
	}
}
	while (u_!=NULL) {
Iterable * aaaaan = NULL;
		aaaaan = (Iterable *)u_;
		incRef(aaaaan);
void * aaaaci = NULL;
aaaaci = u_;
		u_ = aaaaan->value;
		incRef(u_);
		decRef(aaaaci);
decRef(u_);
		


void * aaaaap = NULL;
void * aaaaaq = NULL;
void * aaaaao = NULL;






void * aaaacj = NULL;
aaaacj = aaaaap;
aaaaap = i_;
incRef(aaaaap);
decRef(aaaacj);
decRef(i_);



Integer* aaaack;
aaaack = (Integer*) x3malloc(sizeof(Integer));
(aaaack->nrefs) = 0;
aaaack->value = 1;
void * aaaacl = NULL;
aaaacl = aaaaaq;
aaaaaq = aaaack;
incRef(aaaaaq);
decRef(aaaacl);




Integer* aaaacm;
aaaacm  = (Integer*) x3malloc(sizeof(Integer));
aaaacm->nrefs = 0;
aaaacm->value=((Integer*)aaaaap)->value + ((Integer*)aaaaaq)->value;
void * aaaacn = NULL;
aaaacn = i_;
i_ = aaaacm;
incRef(i_);
decRef(aaaacn);
decRef(aaaaap);
decRef(aaaaaq);



void * aaaaco = NULL;
aaaaco = aaaaao;
aaaaao = aaaaan;
incRef(aaaaao);
decRef(aaaaco);
decRef(aaaaan);




void* aaaacp;
aaaacp = iterGetNext((void*) aaaaao);
void * aaaacq = NULL;
aaaacq = u_;
u_ = aaaacp;
incRef(u_);
decRef(aaaacq);
decRef(aaaaao);
	}
decRef(u_);






void * aaaacr = NULL;
aaaacr = aaaaar;
aaaaar = i_;
incRef(aaaaar);
decRef(aaaacr);



Integer* aaaacs;
aaaacs = (Integer*) x3malloc(sizeof(Integer));
(aaaacs->nrefs) = 0;
aaaacs->value = 100;
void * aaaact = NULL;
aaaact = aaaaas;
aaaaas = aaaacs;
incRef(aaaaas);
decRef(aaaact);




Boolean* aaaacu = (Boolean*) x3malloc(sizeof(Boolean));
aaaacu->nrefs = 0;
aaaacu->value = ((Integer*) aaaaar)->value > ((Integer*) aaaaas)->value;
void * aaaacv = NULL;
aaaacv = aaaaat;
aaaaat = aaaacu;
incRef(aaaaat);
decRef(aaaacv);
decRef(aaaaar);
decRef(aaaaas);



if ( ((Boolean *)aaaaat)->value) {
decRef(i_);
decRef(aaaaat);






aaaaahS* aaaaah;
aaaaah = (aaaaahS*) x3malloc(sizeof(aaaaahS));
aaaaah->nrefs = 1;
aaaaah->isIter = 0;
aaaaah->isStr = 0;
aaaaah->isEC = 1;
aaaaah->eC = NULL;
aaaaah->next = &aaaaahF;
aaaaah->visited= 0;
Iterable* aaaacw;
aaaacw = (Iterable*) x3malloc(sizeof(Iterable));
aaaacw->isIter = 1;
aaaacw->nrefs = 0;
aaaacw->value = NULL;
aaaacw->c = aaaaah;
aaaacw->additional = NULL;
aaaacw->next = &aaaaahIterNext;
aaaacw->concat = NULL;

return aaaacw;
}
decRef(aaaaat);






void * aaaadc = NULL;
aaaadc = aaaaau;
aaaaau = i_;
incRef(aaaaau);
decRef(aaaadc);



Integer* aaaadd;
aaaadd = (Integer*) x3malloc(sizeof(Integer));
(aaaadd->nrefs) = 0;
aaaadd->value = 91;
void * aaaade = NULL;
aaaade = aaaaav;
aaaaav = aaaadd;
incRef(aaaaav);
decRef(aaaade);




Boolean* aaaadf = (Boolean*) x3malloc(sizeof(Boolean));
aaaadf->nrefs = 0;
aaaadf->value = ((Integer*) aaaaau)->value > ((Integer*) aaaaav)->value;
void * aaaadg = NULL;
aaaadg = aaaaaw;
aaaaaw = aaaadf;
incRef(aaaaaw);
decRef(aaaadg);
decRef(aaaaau);
decRef(aaaaav);



if ( ((Boolean *)aaaaaw)->value) {
decRef(i_);
decRef(aaaaaw);






aaaaaiS* aaaaai;
aaaaai = (aaaaaiS*) x3malloc(sizeof(aaaaaiS));
aaaaai->nrefs = 1;
aaaaai->isIter = 0;
aaaaai->isStr = 0;
aaaaai->isEC = 1;
aaaaai->eC = NULL;
aaaaai->next = &aaaaaiF;
aaaaai->visited= 0;
Iterable* aaaadh;
aaaadh = (Iterable*) x3malloc(sizeof(Iterable));
aaaadh->isIter = 1;
aaaadh->nrefs = 0;
aaaadh->value = NULL;
aaaadh->c = aaaaai;
aaaadh->additional = NULL;
aaaadh->next = &aaaaaiIterNext;
aaaadh->concat = NULL;

return aaaadh;
}
decRef(aaaaaw);






void * aaaadn = NULL;
aaaadn = aaaaax;
aaaaax = i_;
incRef(aaaaax);
decRef(aaaadn);



Integer* aaaado;
aaaado = (Integer*) x3malloc(sizeof(Integer));
(aaaado->nrefs) = 0;
aaaado->value = 80;
void * aaaadp = NULL;
aaaadp = aaaaay;
aaaaay = aaaado;
incRef(aaaaay);
decRef(aaaadp);




Boolean* aaaadq = (Boolean*) x3malloc(sizeof(Boolean));
aaaadq->nrefs = 0;
aaaadq->value = ((Integer*) aaaaax)->value > ((Integer*) aaaaay)->value;
void * aaaadr = NULL;
aaaadr = aaaaaz;
aaaaaz = aaaadq;
incRef(aaaaaz);
decRef(aaaadr);
decRef(aaaaax);
decRef(aaaaay);



if ( ((Boolean *)aaaaaz)->value) {
decRef(i_);
decRef(aaaaaz);






aaaaajS* aaaaaj;
aaaaaj = (aaaaajS*) x3malloc(sizeof(aaaaajS));
aaaaaj->nrefs = 1;
aaaaaj->isIter = 0;
aaaaaj->isStr = 0;
aaaaaj->isEC = 1;
aaaaaj->eC = NULL;
aaaaaj->next = &aaaaajF;
aaaaaj->visited= 0;
Iterable* aaaads;
aaaads = (Iterable*) x3malloc(sizeof(Iterable));
aaaads->isIter = 1;
aaaads->nrefs = 0;
aaaads->value = NULL;
aaaads->c = aaaaaj;
aaaads->additional = NULL;
aaaads->next = &aaaaajIterNext;
aaaads->concat = NULL;

return aaaads;
}
decRef(aaaaaz);






void * aaaady = NULL;
aaaady = aaaaba;
aaaaba = i_;
incRef(aaaaba);
decRef(aaaady);



Integer* aaaadz;
aaaadz = (Integer*) x3malloc(sizeof(Integer));
(aaaadz->nrefs) = 0;
aaaadz->value = 10;
void * aaaaea = NULL;
aaaaea = aaaabb;
aaaabb = aaaadz;
incRef(aaaabb);
decRef(aaaaea);




Boolean* aaaaeb = (Boolean*) x3malloc(sizeof(Boolean));
aaaaeb->nrefs = 0;
aaaaeb->value = ((Integer*) aaaaba)->value > ((Integer*) aaaabb)->value;
void * aaaaec = NULL;
aaaaec = aaaabc;
aaaabc = aaaaeb;
incRef(aaaabc);
decRef(aaaaec);
decRef(aaaaba);
decRef(aaaabb);



if ( ((Boolean *)aaaabc)->value) {
decRef(i_);
decRef(aaaabc);






aaaaakS* aaaaak;
aaaaak = (aaaaakS*) x3malloc(sizeof(aaaaakS));
aaaaak->nrefs = 1;
aaaaak->isIter = 0;
aaaaak->isStr = 0;
aaaaak->isEC = 1;
aaaaak->eC = NULL;
aaaaak->next = &aaaaakF;
aaaaak->visited= 0;
Iterable* aaaaed;
aaaaed = (Iterable*) x3malloc(sizeof(Iterable));
aaaaed->isIter = 1;
aaaaed->nrefs = 0;
aaaaed->value = NULL;
aaaaed->c = aaaaak;
aaaaed->additional = NULL;
aaaaed->next = &aaaaakIterNext;
aaaaed->concat = NULL;

return aaaaed;
}
decRef(aaaabc);






void * aaaaej = NULL;
aaaaej = aaaabd;
aaaabd = i_;
incRef(aaaabd);
decRef(aaaaej);
decRef(i_);



Integer* aaaaek;
aaaaek = (Integer*) x3malloc(sizeof(Integer));
(aaaaek->nrefs) = 0;
aaaaek->value = 0;
void * aaaael = NULL;
aaaael = aaaabe;
aaaabe = aaaaek;
incRef(aaaabe);
decRef(aaaael);




Boolean* aaaaem = (Boolean*) x3malloc(sizeof(Boolean));
aaaaem->nrefs = 0;
aaaaem->value = ((Integer*) aaaabd)->value > ((Integer*) aaaabe)->value;
void * aaaaen = NULL;
aaaaen = aaaabf;
aaaabf = aaaaem;
incRef(aaaabf);
decRef(aaaaen);
decRef(aaaabd);
decRef(aaaabe);



if ( ((Boolean *)aaaabf)->value) {
decRef(aaaabf);






aaaaalS* aaaaal;
aaaaal = (aaaaalS*) x3malloc(sizeof(aaaaalS));
aaaaal->nrefs = 1;
aaaaal->isIter = 0;
aaaaal->isStr = 0;
aaaaal->isEC = 1;
aaaaal->eC = NULL;
aaaaal->next = &aaaaalF;
aaaaal->visited= 0;
Iterable* aaaaeo;
aaaaeo = (Iterable*) x3malloc(sizeof(Iterable));
aaaaeo->isIter = 1;
aaaaeo->nrefs = 0;
aaaaeo->value = NULL;
aaaaeo->c = aaaaal;
aaaaeo->additional = NULL;
aaaaeo->next = &aaaaalIterNext;
aaaaeo->concat = NULL;

return aaaaeo;
}
decRef(aaaabf);






aaaaamS* aaaaam;
aaaaam = (aaaaamS*) x3malloc(sizeof(aaaaamS));
aaaaam->nrefs = 1;
aaaaam->isIter = 0;
aaaaam->isStr = 0;
aaaaam->isEC = 1;
aaaaam->eC = NULL;
aaaaam->next = &aaaaamF;
aaaaam->visited= 0;
Iterable* aaaaeu;
aaaaeu = (Iterable*) x3malloc(sizeof(Iterable));
aaaaeu->isIter = 1;
aaaaeu->nrefs = 0;
aaaaeu->value = NULL;
aaaaeu->c = aaaaam;
aaaaeu->additional = NULL;
aaaaeu->next = &aaaaamIterNext;
aaaaeu->concat = NULL;

return aaaaeu;
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
