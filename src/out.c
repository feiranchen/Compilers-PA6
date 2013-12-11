#include<stdio.h>
#include "cubex_main.h"
#include "cubex_external_functions.h"
#include "cubex_lib.h"

Iterable* input_= NULL;
int initialized_pqr = 0;
void* aaaaadF(void*);
typedef struct aaaaad_struct {
	int nrefs; 
	int isIter; 
	int isStr; 
	int isEC; 
	int visited;
	void* eC;
	void* (*next)(void*);
	void* i_;
}aaaaadS;
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
	void* i_;
}aaaaaaS;
Iterable* aaaaaaIterNext(void*);
void* aaaaaeF(void*);
typedef struct aaaaae_struct {
	int nrefs; 
	int isIter; 
	int isStr; 
	int isEC; 
	int visited;
	void* eC;
	void* (*next)(void*);
}aaaaaeS;
Iterable* aaaaaeIterNext(void*);
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
Iterable* aaaaafIterNext(void*);
void* aaaaagF(void*);
typedef struct aaaaag_struct {
	int nrefs; 
	int isIter; 
	int isStr; 
	int isEC; 
	int visited;
	void* eC;
	void* (*next)(void*);
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


void* aaaaadF(void* c_aaaabo) {
aaaaadS* this_aaaabp= (aaaaadS*) c_aaaabo;
void*i_=this_aaaabp->i_;
if(this_aaaabp->visited){ 
	return NULL;
}else {
	this_aaaabp->visited=1; 

Integer* aaaabr;
aaaabr = (Integer*) x3malloc(sizeof(Integer));
(aaaabr->nrefs) = 0;
aaaabr->value = 2;
Integer* aaaabq;
aaaabq  = (Integer*) x3malloc(sizeof(Integer));
aaaabq->nrefs = 0;
aaaabq->value=((Integer*)aaaabr)->value * ((Integer*)i_)->value;
x3free(aaaabr);
	return aaaabq;
	}
}
void* aaaaaaF(void* c_aaaabx) {
aaaaaaS* this_aaaabw= (aaaaaaS*) c_aaaabx;
if (this_aaaabw->forC!=NULL&&this_aaaabw->visited==0){
	((aaaaadS*)this_aaaabw->forC)->visited=0;}
this_aaaabw->visited=1; 
if (this_aaaabw->iter==NULL) {
 return NULL;}
if (this_aaaabw->iter->value==NULL) {this_aaaabw->iter=iterGetNext(this_aaaabw->iter);}
if (this_aaaabw->iter==NULL||this_aaaabw->iter->value==NULL) {
 return NULL;}
void*i_=this_aaaabw->iter->value;
	 ((aaaaadS*)this_aaaabw->forC)->i_=i_;
void* ret=((aaaaadS*)this_aaaabw->forC)->next(this_aaaabw->forC);
if (ret==NULL){
	((aaaaadS*)this_aaaabw->forC)->visited=0;
	 this_aaaabw->iter=iterGetNext(this_aaaabw->iter);
if (this_aaaabw->iter==NULL) {
		this_aaaabw->iter= (Iterable *)x3malloc(sizeof(Iterable));
		this_aaaabw->iter->nrefs =this_aaaabw->iterorg->nrefs;
		this_aaaabw->iter->isIter =this_aaaabw->iterorg->isIter;
		this_aaaabw->iter->isStr =this_aaaabw->iterorg->isStr;
		this_aaaabw->iter->value =this_aaaabw->iterorg->value;
		this_aaaabw->iter->c =this_aaaabw->iterorg->c;
		this_aaaabw->iter->additional =this_aaaabw->iterorg->additional;
		this_aaaabw->iter->next =this_aaaabw->iterorg->next;
		this_aaaabw->iter->concat =this_aaaabw->iterorg->concat;
				*((int*)this_aaaabw->iter->c+4)=0;
incRef(this_aaaabw->iterorg->c);
	return NULL;}
	i_=this_aaaabw->iter->value;
	 ((aaaaadS*)this_aaaabw->forC)->i_=i_;
return ((aaaaadS*)this_aaaabw->forC)->next(this_aaaabw->forC);
}
return ret;
}
Iterable* aaaaaaIterNext(void* aaaabz){ 
Iterable* this=(Iterable*)aaaabz;
if (((aaaaaaS*)this->c) != NULL) {
	void* aaaaby = this->value;
	this->value=((aaaaaaS*)this->c)->next(this->c);
	incRef(this->value);
	decRef(aaaaby);
	if(this->value)
		return this;
	else
		return NULL;
}
else
	return NULL;
}
void* aaaaaeF(void* c_aaaaco) {
aaaaaeS* this_aaaacp= (aaaaaeS*) c_aaaaco;
if(this_aaaacp->visited){ 
	return NULL;
}else {
	this_aaaacp->visited=1; 
String* aaaacq;
aaaacq = (String *) x3malloc(sizeof(String));
(aaaacq->isIter) = 0;
aaaacq->value = (char*) x3malloc(sizeof("2"));
(aaaacq->nrefs) = 0;
(aaaacq->isStr) = 1;
aaaacq->len = sizeof("2") - 1;
mystrcpy(aaaacq->value, "2");
	return aaaacq;
	}
}
Iterable* aaaaaeIterNext(void* aaaacs){ 
Iterable* this=(Iterable*)aaaacs;
if (((aaaaaeS*)this->c) != NULL) {
	void* aaaacr = this->value;
	this->value=((aaaaaeS*)this->c)->next(this->c);
	incRef(this->value);
	decRef(aaaacr);
	if(this->value)
		return this;
	else
		return NULL;
}
else
	return NULL;
}
void* aaaaafF(void* c_aaaadf) {
aaaaafS* this_aaaadg= (aaaaafS*) c_aaaadf;
if(this_aaaadg->visited){ 
	return NULL;
}else {
	this_aaaadg->visited=1; 
String* aaaadh;
aaaadh = (String *) x3malloc(sizeof(String));
(aaaadh->isIter) = 0;
aaaadh->value = (char*) x3malloc(sizeof("4"));
(aaaadh->nrefs) = 0;
(aaaadh->isStr) = 1;
aaaadh->len = sizeof("4") - 1;
mystrcpy(aaaadh->value, "4");
	return aaaadh;
	}
}
Iterable* aaaaafIterNext(void* aaaadj){ 
Iterable* this=(Iterable*)aaaadj;
if (((aaaaafS*)this->c) != NULL) {
	void* aaaadi = this->value;
	this->value=((aaaaafS*)this->c)->next(this->c);
	incRef(this->value);
	decRef(aaaadi);
	if(this->value)
		return this;
	else
		return NULL;
}
else
	return NULL;
}
void* aaaaagF(void* c_aaaadw) {
aaaaagS* this_aaaadx= (aaaaagS*) c_aaaadw;
if(this_aaaadx->visited){ 
	return NULL;
}else {
	this_aaaadx->visited=1; 
String* aaaady;
aaaady = (String *) x3malloc(sizeof(String));
(aaaady->isIter) = 0;
aaaady->value = (char*) x3malloc(sizeof("6"));
(aaaady->nrefs) = 0;
(aaaady->isStr) = 1;
aaaady->len = sizeof("6") - 1;
mystrcpy(aaaady->value, "6");
	return aaaady;
	}
}
Iterable* aaaaagIterNext(void* aaaaea){ 
Iterable* this=(Iterable*)aaaaea;
if (((aaaaagS*)this->c) != NULL) {
	void* aaaadz = this->value;
	this->value=((aaaaagS*)this->c)->next(this->c);
	incRef(this->value);
	decRef(aaaadz);
	if(this->value)
		return this;
	else
		return NULL;
}
else
	return NULL;
}
void* aaaaahF(void* c_aaaaen) {
aaaaahS* this_aaaaeo= (aaaaahS*) c_aaaaen;
if(this_aaaaeo->visited){ 
	return NULL;
}else {
	this_aaaaeo->visited=1; 
String* aaaaep;
aaaaep = (String *) x3malloc(sizeof(String));
(aaaaep->isIter) = 0;
aaaaep->value = (char*) x3malloc(sizeof("8"));
(aaaaep->nrefs) = 0;
(aaaaep->isStr) = 1;
aaaaep->len = sizeof("8") - 1;
mystrcpy(aaaaep->value, "8");
	return aaaaep;
	}
}
Iterable* aaaaahIterNext(void* aaaaer){ 
Iterable* this=(Iterable*)aaaaer;
if (((aaaaahS*)this->c) != NULL) {
	void* aaaaeq = this->value;
	this->value=((aaaaahS*)this->c)->next(this->c);
	incRef(this->value);
	decRef(aaaaeq);
	if(this->value)
		return this;
	else
		return NULL;
}
else
	return NULL;
}
void* aaaaaiF(void* c_aaaafe) {
aaaaaiS* this_aaaaff= (aaaaaiS*) c_aaaafe;
if(this_aaaaff->visited){ 
	return NULL;
}else {
	this_aaaaff->visited=1; 
String* aaaafg;
aaaafg = (String *) x3malloc(sizeof(String));
(aaaafg->isIter) = 0;
aaaafg->value = (char*) x3malloc(sizeof("10"));
(aaaafg->nrefs) = 0;
(aaaafg->isStr) = 1;
aaaafg->len = sizeof("10") - 1;
mystrcpy(aaaafg->value, "10");
	return aaaafg;
	}
}
Iterable* aaaaaiIterNext(void* aaaafi){ 
Iterable* this=(Iterable*)aaaafi;
if (((aaaaaiS*)this->c) != NULL) {
	void* aaaafh = this->value;
	this->value=((aaaaaiS*)this->c)->next(this->c);
	incRef(this->value);
	decRef(aaaafh);
	if(this->value)
		return this;
	else
		return NULL;
}
else
	return NULL;
}
void* aaaaajF(void* c_aaaafq) {
aaaaajS* this_aaaafr= (aaaaajS*) c_aaaafq;
if(this_aaaafr->visited){ 
	return NULL;
}else {
	this_aaaafr->visited=1; 
String* aaaafs;
aaaafs = (String *) x3malloc(sizeof(String));
(aaaafs->isIter) = 0;
aaaafs->value = (char*) x3malloc(sizeof("This should not appear"));
(aaaafs->nrefs) = 0;
(aaaafs->isStr) = 1;
aaaafs->len = sizeof("This should not appear") - 1;
mystrcpy(aaaafs->value, "This should not appear");
	return aaaafs;
	}
}
Iterable* aaaaajIterNext(void* aaaafu){ 
Iterable* this=(Iterable*)aaaafu;
if (((aaaaajS*)this->c) != NULL) {
	void* aaaaft = this->value;
	this->value=((aaaaajS*)this->c)->next(this->c);
	incRef(this->value);
	decRef(aaaaft);
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
void * evens_ = NULL;
void * output_ = NULL;
void * j_ = NULL;






aaaaadS* aaaaad;
aaaaad = (aaaaadS*) x3malloc(sizeof(aaaaadS));
aaaaad->nrefs = 1;
aaaaad->isIter = 0;
aaaaad->isStr = 0;
aaaaad->isEC = 1;
aaaaad->eC = NULL;
aaaaad->next = &aaaaadF;
aaaaad->visited= 0;
Integer* aaaabs;
aaaabs = (Integer*) x3malloc(sizeof(Integer));
(aaaabs->nrefs) = 0;
aaaabs->value = 1;
Integer* aaaabt;
aaaabt = (Integer*) x3malloc(sizeof(Integer));
(aaaabt->nrefs) = 0;
aaaabt->value = 5;
Iterable* aaaabu;
aaaabu = (Iterable*) x3malloc(sizeof(Iterable));
aaaabu->isIter = 1;
aaaabu->nrefs = 0;
aaaabu->value = aaaabs;
aaaabu->additional = aaaabt;
aaaabu->next = &Integer_through;
aaaabu->concat = NULL;
void * aaaabv = NULL;
aaaabv=checkIter(aaaabu);
Iterable *aaaabvCopy;
		aaaabvCopy = (Iterable *)x3malloc(sizeof(Iterable));
		aaaabvCopy->nrefs = ((Iterable *)aaaabv)->nrefs;
		aaaabvCopy->isIter = ((Iterable *)aaaabv)->isIter;
		aaaabvCopy->isStr = ((Iterable *)aaaabv)->isStr;
		aaaabvCopy->value = ((Iterable *)aaaabv)->value;
		aaaabvCopy->c = ((Iterable *)aaaabv)->c;
		aaaabvCopy->additional = ((Iterable *)aaaabv)->additional;
		aaaabvCopy->next = ((Iterable *)aaaabv)->next;
		aaaabvCopy->concat = ((Iterable *)aaaabv)->concat;
		incRef((((Iterable*)aaaabvCopy)->c));
aaaaaaS* aaaaaa;
aaaaaa = (aaaaaaS*) x3malloc(sizeof(aaaaaaS));
aaaaaa->nrefs = 1;
aaaaaa->isIter = 0;
aaaaaa->isStr = 0;
aaaaaa->isEC =0;
aaaaaa->forC = aaaaad;
aaaaaa->iter = aaaabvCopy;
aaaaaa->iterorg = aaaabv;
aaaaaa->next = &aaaaaaF;
aaaaaa->visited= 0;
Iterable* aaaabn;
aaaabn = (Iterable*) x3malloc(sizeof(Iterable));
aaaabn->isIter = 1;
aaaabn->nrefs = 0;
aaaabn->value = NULL;
aaaabn->c = aaaaaa;
aaaabn->additional = NULL;
aaaabn->next = &aaaaaaIterNext;
aaaabn->concat = NULL;

void * aaaaca = NULL;
aaaaca = evens_;
evens_ = aaaabn;
incRef(evens_);
decRef(aaaaca);






void * aaaacc = NULL;
aaaacc = output_;
output_ = NULL;
incRef(output_);
decRef(aaaacc);






void * aaaacd = NULL;
aaaacd = j_;
j_ = evens_;
incRef(j_);
decRef(aaaacd);
decRef(evens_);
	if (j_!=NULL) {
		if ((*((int *)(j_+1))) == 0) {
void * aaaace = NULL;
aaaace = j_;
			j_ = strToIter( ((String *)j_)->value, ((String *)j_)->len);
incRef(j_);
decRef(aaaace);
		}
	}
if (j_!=NULL) {
	if (((Iterable*)j_)->c!=NULL) {
		Iterable *aaaacf = NULL;
		aaaacf = (Iterable *)x3malloc(sizeof(Iterable));
		((Iterable*)aaaacf)->nrefs = ((Iterable*)j_)->nrefs;
		((Iterable*)aaaacf)->isIter = ((Iterable*)j_)->isIter;
		((Iterable*)aaaacf)->isStr = ((Iterable*)j_)->isStr;
		((Iterable*)aaaacf)->value = ((Iterable*)j_)->value;
		((Iterable*)aaaacf)->c = ((Iterable*)j_)->c;
		((Iterable*)aaaacf)->additional = ((Iterable*)j_)->additional;
		((Iterable*)aaaacf)->next = ((Iterable*)j_)->next;
		((Iterable*)aaaacf)->concat = ((Iterable*)j_)->concat;
		incRef((((Iterable*)aaaacf)->c));
		j_ = iterGetNext(aaaacf);
		(*((int*)((Iterable*)aaaacf)->c+5)) = 0;
	}
}
	while (j_!=NULL) {
Iterable * aaaaak = NULL;
		aaaaak = (Iterable *)j_;
		incRef(aaaaak);
void * aaaacg = NULL;
aaaacg = j_;
		j_ = aaaaak->value;
		incRef(j_);
		decRef(aaaacg);
		


void * aaaaam = NULL;
void * aaaaan = NULL;
void * aaaaao = NULL;
void * aaaaar = NULL;
void * aaaaas = NULL;
void * aaaaat = NULL;
void * aaaaaw = NULL;
void * aaaaax = NULL;
void * aaaaay = NULL;
void * aaaabb = NULL;
void * aaaabc = NULL;
void * aaaabd = NULL;
void * aaaabg = NULL;
void * aaaabh = NULL;
void * aaaabi = NULL;
void * aaaaal = NULL;






void * aaaach = NULL;
aaaach = aaaaam;
aaaaam = j_;
incRef(aaaaam);
decRef(aaaach);



Integer* aaaaci;
aaaaci = (Integer*) x3malloc(sizeof(Integer));
(aaaaci->nrefs) = 0;
aaaaci->value = 2;
void * aaaacj = NULL;
aaaacj = aaaaan;
aaaaan = aaaaci;
incRef(aaaaan);
decRef(aaaacj);




Boolean* aaaack = (Boolean*) x3malloc(sizeof(Boolean));
aaaack->nrefs = 0;
aaaack->value = ((Integer*) aaaaam)->value == ((Integer*) aaaaan)->value;
void * aaaacl = NULL;
aaaacl = aaaaao;
aaaaao = aaaack;
incRef(aaaaao);
decRef(aaaacl);
decRef(aaaaam);
decRef(aaaaan);



if ( ((Boolean *)aaaaao)->value) {
decRef(aaaaao);



void * aaaaap = NULL;
void * aaaaaq = NULL;






void * aaaacm = NULL;
aaaacm = aaaaap;
aaaaap = output_;
incRef(aaaaap);
decRef(aaaacm);
decRef(output_);



aaaaaeS* aaaaae;
aaaaae = (aaaaaeS*) x3malloc(sizeof(aaaaaeS));
aaaaae->nrefs = 1;
aaaaae->isIter = 0;
aaaaae->isStr = 0;
aaaaae->isEC = 1;
aaaaae->eC = NULL;
aaaaae->next = &aaaaaeF;
aaaaae->visited= 0;
Iterable* aaaacn;
aaaacn = (Iterable*) x3malloc(sizeof(Iterable));
aaaacn->isIter = 1;
aaaacn->nrefs = 0;
aaaacn->value = NULL;
aaaacn->c = aaaaae;
aaaacn->additional = NULL;
aaaacn->next = &aaaaaeIterNext;
aaaacn->concat = NULL;

void * aaaact = NULL;
aaaact = aaaaaq;
aaaaaq = aaaacn;
incRef(aaaaaq);
decRef(aaaact);



void *aaaacv;
aaaacv = aaaaap;
if (aaaacv!=NULL) {
(*((int *)aaaacv))++;
if ((*((int *)aaaaap+1)) == 0) {
decRef(aaaacv);
aaaacv = strToIter( ((String *)aaaaap)->value, ((String *)aaaaap)->len);
incRef(aaaacv);
}
}
void *aaaacw;
aaaacw = aaaaaq;
if (aaaacw!=NULL) {
(*((int *)aaaacw))++;
if ((*((int *)aaaaaq+1)) == 0) {
decRef(aaaacw);
aaaacw = strToIter( ((String *)aaaaaq)->value, ((String *)aaaaaq)->len);
incRef(aaaacw);
}
}
Iterable* aaaacu;
aaaacu = concatenate((Iterable*)aaaacv, (Iterable*) aaaacw);
decRef(aaaacv);
decRef(aaaacw);
void * aaaacx = NULL;
aaaacx = output_;
output_ = aaaacu;
incRef(output_);
decRef(aaaacx);
decRef(aaaaap);
decRef(aaaaaq);
}
decRef(aaaaao);






void * aaaacy = NULL;
aaaacy = aaaaar;
aaaaar = j_;
incRef(aaaaar);
decRef(aaaacy);



Integer* aaaacz;
aaaacz = (Integer*) x3malloc(sizeof(Integer));
(aaaacz->nrefs) = 0;
aaaacz->value = 4;
void * aaaada = NULL;
aaaada = aaaaas;
aaaaas = aaaacz;
incRef(aaaaas);
decRef(aaaada);




Boolean* aaaadb = (Boolean*) x3malloc(sizeof(Boolean));
aaaadb->nrefs = 0;
aaaadb->value = ((Integer*) aaaaar)->value == ((Integer*) aaaaas)->value;
void * aaaadc = NULL;
aaaadc = aaaaat;
aaaaat = aaaadb;
incRef(aaaaat);
decRef(aaaadc);
decRef(aaaaar);
decRef(aaaaas);



if ( ((Boolean *)aaaaat)->value) {
decRef(aaaaat);



void * aaaaau = NULL;
void * aaaaav = NULL;






void * aaaadd = NULL;
aaaadd = aaaaau;
aaaaau = output_;
incRef(aaaaau);
decRef(aaaadd);
decRef(output_);



aaaaafS* aaaaaf;
aaaaaf = (aaaaafS*) x3malloc(sizeof(aaaaafS));
aaaaaf->nrefs = 1;
aaaaaf->isIter = 0;
aaaaaf->isStr = 0;
aaaaaf->isEC = 1;
aaaaaf->eC = NULL;
aaaaaf->next = &aaaaafF;
aaaaaf->visited= 0;
Iterable* aaaade;
aaaade = (Iterable*) x3malloc(sizeof(Iterable));
aaaade->isIter = 1;
aaaade->nrefs = 0;
aaaade->value = NULL;
aaaade->c = aaaaaf;
aaaade->additional = NULL;
aaaade->next = &aaaaafIterNext;
aaaade->concat = NULL;

void * aaaadk = NULL;
aaaadk = aaaaav;
aaaaav = aaaade;
incRef(aaaaav);
decRef(aaaadk);



void *aaaadm;
aaaadm = aaaaau;
if (aaaadm!=NULL) {
(*((int *)aaaadm))++;
if ((*((int *)aaaaau+1)) == 0) {
decRef(aaaadm);
aaaadm = strToIter( ((String *)aaaaau)->value, ((String *)aaaaau)->len);
incRef(aaaadm);
}
}
void *aaaadn;
aaaadn = aaaaav;
if (aaaadn!=NULL) {
(*((int *)aaaadn))++;
if ((*((int *)aaaaav+1)) == 0) {
decRef(aaaadn);
aaaadn = strToIter( ((String *)aaaaav)->value, ((String *)aaaaav)->len);
incRef(aaaadn);
}
}
Iterable* aaaadl;
aaaadl = concatenate((Iterable*)aaaadm, (Iterable*) aaaadn);
decRef(aaaadm);
decRef(aaaadn);
void * aaaado = NULL;
aaaado = output_;
output_ = aaaadl;
incRef(output_);
decRef(aaaado);
decRef(aaaaau);
decRef(aaaaav);
}
decRef(aaaaat);






void * aaaadp = NULL;
aaaadp = aaaaaw;
aaaaaw = j_;
incRef(aaaaaw);
decRef(aaaadp);



Integer* aaaadq;
aaaadq = (Integer*) x3malloc(sizeof(Integer));
(aaaadq->nrefs) = 0;
aaaadq->value = 6;
void * aaaadr = NULL;
aaaadr = aaaaax;
aaaaax = aaaadq;
incRef(aaaaax);
decRef(aaaadr);




Boolean* aaaads = (Boolean*) x3malloc(sizeof(Boolean));
aaaads->nrefs = 0;
aaaads->value = ((Integer*) aaaaaw)->value == ((Integer*) aaaaax)->value;
void * aaaadt = NULL;
aaaadt = aaaaay;
aaaaay = aaaads;
incRef(aaaaay);
decRef(aaaadt);
decRef(aaaaaw);
decRef(aaaaax);



if ( ((Boolean *)aaaaay)->value) {
decRef(aaaaay);



void * aaaaaz = NULL;
void * aaaaba = NULL;






void * aaaadu = NULL;
aaaadu = aaaaaz;
aaaaaz = output_;
incRef(aaaaaz);
decRef(aaaadu);
decRef(output_);



aaaaagS* aaaaag;
aaaaag = (aaaaagS*) x3malloc(sizeof(aaaaagS));
aaaaag->nrefs = 1;
aaaaag->isIter = 0;
aaaaag->isStr = 0;
aaaaag->isEC = 1;
aaaaag->eC = NULL;
aaaaag->next = &aaaaagF;
aaaaag->visited= 0;
Iterable* aaaadv;
aaaadv = (Iterable*) x3malloc(sizeof(Iterable));
aaaadv->isIter = 1;
aaaadv->nrefs = 0;
aaaadv->value = NULL;
aaaadv->c = aaaaag;
aaaadv->additional = NULL;
aaaadv->next = &aaaaagIterNext;
aaaadv->concat = NULL;

void * aaaaeb = NULL;
aaaaeb = aaaaba;
aaaaba = aaaadv;
incRef(aaaaba);
decRef(aaaaeb);



void *aaaaed;
aaaaed = aaaaaz;
if (aaaaed!=NULL) {
(*((int *)aaaaed))++;
if ((*((int *)aaaaaz+1)) == 0) {
decRef(aaaaed);
aaaaed = strToIter( ((String *)aaaaaz)->value, ((String *)aaaaaz)->len);
incRef(aaaaed);
}
}
void *aaaaee;
aaaaee = aaaaba;
if (aaaaee!=NULL) {
(*((int *)aaaaee))++;
if ((*((int *)aaaaba+1)) == 0) {
decRef(aaaaee);
aaaaee = strToIter( ((String *)aaaaba)->value, ((String *)aaaaba)->len);
incRef(aaaaee);
}
}
Iterable* aaaaec;
aaaaec = concatenate((Iterable*)aaaaed, (Iterable*) aaaaee);
decRef(aaaaed);
decRef(aaaaee);
void * aaaaef = NULL;
aaaaef = output_;
output_ = aaaaec;
incRef(output_);
decRef(aaaaef);
decRef(aaaaaz);
decRef(aaaaba);
}
decRef(aaaaay);






void * aaaaeg = NULL;
aaaaeg = aaaabb;
aaaabb = j_;
incRef(aaaabb);
decRef(aaaaeg);



Integer* aaaaeh;
aaaaeh = (Integer*) x3malloc(sizeof(Integer));
(aaaaeh->nrefs) = 0;
aaaaeh->value = 8;
void * aaaaei = NULL;
aaaaei = aaaabc;
aaaabc = aaaaeh;
incRef(aaaabc);
decRef(aaaaei);




Boolean* aaaaej = (Boolean*) x3malloc(sizeof(Boolean));
aaaaej->nrefs = 0;
aaaaej->value = ((Integer*) aaaabb)->value == ((Integer*) aaaabc)->value;
void * aaaaek = NULL;
aaaaek = aaaabd;
aaaabd = aaaaej;
incRef(aaaabd);
decRef(aaaaek);
decRef(aaaabb);
decRef(aaaabc);



if ( ((Boolean *)aaaabd)->value) {
decRef(aaaabd);



void * aaaabe = NULL;
void * aaaabf = NULL;






void * aaaael = NULL;
aaaael = aaaabe;
aaaabe = output_;
incRef(aaaabe);
decRef(aaaael);
decRef(output_);



aaaaahS* aaaaah;
aaaaah = (aaaaahS*) x3malloc(sizeof(aaaaahS));
aaaaah->nrefs = 1;
aaaaah->isIter = 0;
aaaaah->isStr = 0;
aaaaah->isEC = 1;
aaaaah->eC = NULL;
aaaaah->next = &aaaaahF;
aaaaah->visited= 0;
Iterable* aaaaem;
aaaaem = (Iterable*) x3malloc(sizeof(Iterable));
aaaaem->isIter = 1;
aaaaem->nrefs = 0;
aaaaem->value = NULL;
aaaaem->c = aaaaah;
aaaaem->additional = NULL;
aaaaem->next = &aaaaahIterNext;
aaaaem->concat = NULL;

void * aaaaes = NULL;
aaaaes = aaaabf;
aaaabf = aaaaem;
incRef(aaaabf);
decRef(aaaaes);



void *aaaaeu;
aaaaeu = aaaabe;
if (aaaaeu!=NULL) {
(*((int *)aaaaeu))++;
if ((*((int *)aaaabe+1)) == 0) {
decRef(aaaaeu);
aaaaeu = strToIter( ((String *)aaaabe)->value, ((String *)aaaabe)->len);
incRef(aaaaeu);
}
}
void *aaaaev;
aaaaev = aaaabf;
if (aaaaev!=NULL) {
(*((int *)aaaaev))++;
if ((*((int *)aaaabf+1)) == 0) {
decRef(aaaaev);
aaaaev = strToIter( ((String *)aaaabf)->value, ((String *)aaaabf)->len);
incRef(aaaaev);
}
}
Iterable* aaaaet;
aaaaet = concatenate((Iterable*)aaaaeu, (Iterable*) aaaaev);
decRef(aaaaeu);
decRef(aaaaev);
void * aaaaew = NULL;
aaaaew = output_;
output_ = aaaaet;
incRef(output_);
decRef(aaaaew);
decRef(aaaabe);
decRef(aaaabf);
}
decRef(aaaabd);






void * aaaaex = NULL;
aaaaex = aaaabg;
aaaabg = j_;
incRef(aaaabg);
decRef(aaaaex);
decRef(j_);



Integer* aaaaey;
aaaaey = (Integer*) x3malloc(sizeof(Integer));
(aaaaey->nrefs) = 0;
aaaaey->value = 10;
void * aaaaez = NULL;
aaaaez = aaaabh;
aaaabh = aaaaey;
incRef(aaaabh);
decRef(aaaaez);




Boolean* aaaafa = (Boolean*) x3malloc(sizeof(Boolean));
aaaafa->nrefs = 0;
aaaafa->value = ((Integer*) aaaabg)->value == ((Integer*) aaaabh)->value;
void * aaaafb = NULL;
aaaafb = aaaabi;
aaaabi = aaaafa;
incRef(aaaabi);
decRef(aaaafb);
decRef(aaaabg);
decRef(aaaabh);



if ( ((Boolean *)aaaabi)->value) {
decRef(aaaabi);



void * aaaabj = NULL;
void * aaaabk = NULL;






void * aaaafc = NULL;
aaaafc = aaaabj;
aaaabj = output_;
incRef(aaaabj);
decRef(aaaafc);
decRef(output_);



aaaaaiS* aaaaai;
aaaaai = (aaaaaiS*) x3malloc(sizeof(aaaaaiS));
aaaaai->nrefs = 1;
aaaaai->isIter = 0;
aaaaai->isStr = 0;
aaaaai->isEC = 1;
aaaaai->eC = NULL;
aaaaai->next = &aaaaaiF;
aaaaai->visited= 0;
Iterable* aaaafd;
aaaafd = (Iterable*) x3malloc(sizeof(Iterable));
aaaafd->isIter = 1;
aaaafd->nrefs = 0;
aaaafd->value = NULL;
aaaafd->c = aaaaai;
aaaafd->additional = NULL;
aaaafd->next = &aaaaaiIterNext;
aaaafd->concat = NULL;

void * aaaafj = NULL;
aaaafj = aaaabk;
aaaabk = aaaafd;
incRef(aaaabk);
decRef(aaaafj);



void *aaaafl;
aaaafl = aaaabj;
if (aaaafl!=NULL) {
(*((int *)aaaafl))++;
if ((*((int *)aaaabj+1)) == 0) {
decRef(aaaafl);
aaaafl = strToIter( ((String *)aaaabj)->value, ((String *)aaaabj)->len);
incRef(aaaafl);
}
}
void *aaaafm;
aaaafm = aaaabk;
if (aaaafm!=NULL) {
(*((int *)aaaafm))++;
if ((*((int *)aaaabk+1)) == 0) {
decRef(aaaafm);
aaaafm = strToIter( ((String *)aaaabk)->value, ((String *)aaaabk)->len);
incRef(aaaafm);
}
}
Iterable* aaaafk;
aaaafk = concatenate((Iterable*)aaaafl, (Iterable*) aaaafm);
decRef(aaaafl);
decRef(aaaafm);
void * aaaafn = NULL;
aaaafn = output_;
output_ = aaaafk;
incRef(output_);
decRef(aaaafn);
decRef(aaaabj);
decRef(aaaabk);
}
else {
decRef(aaaabi);



void * aaaabl = NULL;
void * aaaabm = NULL;






void * aaaafo = NULL;
aaaafo = aaaabl;
aaaabl = output_;
incRef(aaaabl);
decRef(aaaafo);
decRef(output_);



aaaaajS* aaaaaj;
aaaaaj = (aaaaajS*) x3malloc(sizeof(aaaaajS));
aaaaaj->nrefs = 1;
aaaaaj->isIter = 0;
aaaaaj->isStr = 0;
aaaaaj->isEC = 1;
aaaaaj->eC = NULL;
aaaaaj->next = &aaaaajF;
aaaaaj->visited= 0;
Iterable* aaaafp;
aaaafp = (Iterable*) x3malloc(sizeof(Iterable));
aaaafp->isIter = 1;
aaaafp->nrefs = 0;
aaaafp->value = NULL;
aaaafp->c = aaaaaj;
aaaafp->additional = NULL;
aaaafp->next = &aaaaajIterNext;
aaaafp->concat = NULL;

void * aaaafv = NULL;
aaaafv = aaaabm;
aaaabm = aaaafp;
incRef(aaaabm);
decRef(aaaafv);



void *aaaafx;
aaaafx = aaaabl;
if (aaaafx!=NULL) {
(*((int *)aaaafx))++;
if ((*((int *)aaaabl+1)) == 0) {
decRef(aaaafx);
aaaafx = strToIter( ((String *)aaaabl)->value, ((String *)aaaabl)->len);
incRef(aaaafx);
}
}
void *aaaafy;
aaaafy = aaaabm;
if (aaaafy!=NULL) {
(*((int *)aaaafy))++;
if ((*((int *)aaaabm+1)) == 0) {
decRef(aaaafy);
aaaafy = strToIter( ((String *)aaaabm)->value, ((String *)aaaabm)->len);
incRef(aaaafy);
}
}
Iterable* aaaafw;
aaaafw = concatenate((Iterable*)aaaafx, (Iterable*) aaaafy);
decRef(aaaafx);
decRef(aaaafy);
void * aaaafz = NULL;
aaaafz = output_;
output_ = aaaafw;
incRef(output_);
decRef(aaaafz);
decRef(aaaabl);
decRef(aaaabm);
}



void * aaaaga = NULL;
aaaaga = aaaaal;
aaaaal = aaaaak;
incRef(aaaaal);
decRef(aaaaga);
decRef(aaaaak);




void* aaaagb;
aaaagb = iterGetNext((void*) aaaaal);
void * aaaagc = NULL;
aaaagc = j_;
j_ = aaaagb;
incRef(j_);
decRef(aaaagc);
decRef(aaaaal);
	}
decRef(j_);






if (output_!= NULL) {
(*(int *)output_)--;
}
return output_;
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
