#include<stdio.h>
#include "cubex_main.h"
#include "cubex_external_functions.h"
#include "cubex_lib.h"

Iterable* input_= NULL;
int initialized_pqr = 0;
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
void* aaaaadF(void*);
typedef struct aaaaad_struct {
	int nrefs; 
	int isIter; 
	int isStr; 
	int isEC; 
	int visited;
	void* eC;
	void* (*next)(void*);
}aaaaadS;
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

void* coolname_() {



void * int_ = NULL;
void * aaaaag = NULL;
void * aaaaah = NULL;
void * num_ = NULL;
void * aaaaat = NULL;
void * aaaaau = NULL;
void * aaaaav = NULL;
void * aaaaaw = NULL;
void * aaaaar = NULL;
void * aaaaas = NULL;
void * aaaaax = NULL;






Integer* aaaaay;
aaaaay = (Integer*) x3malloc(sizeof(Integer));
(aaaaay->nrefs) = 0;
aaaaay->value = 20;
void * aaaaaz = NULL;
aaaaaz = int_;
int_ = aaaaay;
incRef(int_);
decRef(aaaaaz);






Integer* aaaaba;
aaaaba = (Integer*) x3malloc(sizeof(Integer));
(aaaaba->nrefs) = 0;
aaaaba->value = 1;
void * aaaabb = NULL;
aaaabb = aaaaag;
aaaaag = aaaaba;
incRef(aaaaag);
decRef(aaaabb);



Integer* aaaabc;
aaaabc = (Integer*) x3malloc(sizeof(Integer));
(aaaabc->nrefs) = 0;
aaaabc->value = 100;
void * aaaabd = NULL;
aaaabd = aaaaah;
aaaaah = aaaabc;
incRef(aaaaah);
decRef(aaaabd);



Integer* aaaabf;
aaaabf = (Integer*) x3malloc(sizeof(Integer));
aaaabf->value = ((Integer *)aaaaag)->value + 1;
aaaabf->nrefs = 1;
Integer* aaaabg;
aaaabg = (Integer*) x3malloc(sizeof(Integer));
aaaabg->value = ((Integer *)aaaaah)->value - 1;
aaaabg->nrefs = 1;
Iterable* aaaabe;
aaaabe = (Iterable*) x3malloc(sizeof(Iterable));
aaaabe->isIter = 1;
aaaabe->nrefs = 0;
aaaabe->value = aaaabf;
aaaabe->additional = aaaabg;
aaaabe->next = &Integer_through;
aaaabe->concat = NULL;
void * aaaabi = NULL;
aaaabi=checkIter(aaaabe);
void * aaaabj = NULL;
aaaabj = num_;
num_ = aaaabi;
incRef(num_);
decRef(aaaabj);
decRef(aaaaag);
decRef(aaaaah);
	if (num_!=NULL) {
		if ((*((int *)(num_+1))) == 0) {
void * aaaabk = NULL;
aaaabk = num_;
			num_ = strToIter( ((String *)num_)->value, ((String *)num_)->len);
incRef(num_);
decRef(aaaabk);
		}
	}
if (num_!=NULL) {
	if (((Iterable*)num_)->c!=NULL) {
		Iterable *aaaabl = NULL;
		aaaabl = (Iterable *)x3malloc(sizeof(Iterable));
		((Iterable*)aaaabl)->nrefs = ((Iterable*)num_)->nrefs;
		((Iterable*)aaaabl)->isIter = ((Iterable*)num_)->isIter;
		((Iterable*)aaaabl)->isStr = ((Iterable*)num_)->isStr;
		((Iterable*)aaaabl)->value = ((Iterable*)num_)->value;
		((Iterable*)aaaabl)->c = ((Iterable*)num_)->c;
		((Iterable*)aaaabl)->additional = ((Iterable*)num_)->additional;
		((Iterable*)aaaabl)->next = ((Iterable*)num_)->next;
		((Iterable*)aaaabl)->concat = ((Iterable*)num_)->concat;
		incRef((((Iterable*)aaaabl)->c));
		num_ = iterGetNext(aaaabl);
		(*((int*)((Iterable*)aaaabl)->c+5)) = 0;
	}
}
	while (num_!=NULL) {
Iterable * aaaaai = NULL;
		aaaaai = (Iterable *)num_;
		incRef(aaaaai);
void * aaaabm = NULL;
aaaabm = num_;
		num_ = aaaaai->value;
		incRef(num_);
		decRef(aaaabm);
		


void * aaaaak = NULL;
void * aaaaal = NULL;
void * aaaaam = NULL;
void * aaaaaj = NULL;






void * aaaabn = NULL;
aaaabn = aaaaak;
aaaaak = num_;
incRef(aaaaak);
decRef(aaaabn);



Integer* aaaabo;
aaaabo = (Integer*) x3malloc(sizeof(Integer));
(aaaabo->nrefs) = 0;
aaaabo->value = 75;
void * aaaabp = NULL;
aaaabp = aaaaal;
aaaaal = aaaabo;
incRef(aaaaal);
decRef(aaaabp);




Boolean* aaaabq = (Boolean*) x3malloc(sizeof(Boolean));
aaaabq->nrefs = 0;
aaaabq->value = ((Integer*) aaaaak)->value != ((Integer*) aaaaal)->value;
void * aaaabr = NULL;
aaaabr = aaaaam;
aaaaam = aaaabq;
incRef(aaaaam);
decRef(aaaabr);
decRef(aaaaak);
decRef(aaaaal);



if ( ((Boolean *)aaaaam)->value) {
decRef(num_);
decRef(aaaaam);



}
else {
decRef(aaaaam);



void * aaaaan = NULL;
void * aaaaao = NULL;
void * t_ = NULL;






void * aaaabs = NULL;
aaaabs = aaaaan;
aaaaan = num_;
incRef(aaaaan);
decRef(aaaabs);
decRef(num_);



Integer* aaaabt;
aaaabt = (Integer*) x3malloc(sizeof(Integer));
(aaaabt->nrefs) = 0;
aaaabt->value = 3;
void * aaaabu = NULL;
aaaabu = aaaaao;
aaaaao = aaaabt;
incRef(aaaaao);
decRef(aaaabu);




Iterable* aaaabv;
Integer* aaaabw;
if(((Integer*)aaaaao)->value == 0) 
	aaaabv = NULL;
else {
	aaaabw  = (Integer*) x3malloc(sizeof(Integer));
	aaaabw->nrefs = 0;
	aaaabw->value=((Integer*)aaaaan)->value / ((Integer*)aaaaao)->value;
	aaaabv = (Iterable*) x3malloc(sizeof(Iterable));
	aaaabv->isIter = 1;
aaaabv->nrefs = 0;
	aaaabv->value = aaaabw;
	aaaabv->additional = NULL;
	aaaabv->next = NULL;
	aaaabv->concat = NULL;
incRef(aaaabw);
}
void * aaaabx = NULL;
aaaabx = t_;
t_ = aaaabv;
incRef(t_);
decRef(aaaabx);
decRef(aaaaan);
decRef(aaaaao);
	if (t_!=NULL) {
		if ((*((int *)(t_+1))) == 0) {
void * aaaaby = NULL;
aaaaby = t_;
			t_ = strToIter( ((String *)t_)->value, ((String *)t_)->len);
incRef(t_);
decRef(aaaaby);
		}
	}
if (t_!=NULL) {
	if (((Iterable*)t_)->c!=NULL) {
		Iterable *aaaabz = NULL;
		aaaabz = (Iterable *)x3malloc(sizeof(Iterable));
		((Iterable*)aaaabz)->nrefs = ((Iterable*)t_)->nrefs;
		((Iterable*)aaaabz)->isIter = ((Iterable*)t_)->isIter;
		((Iterable*)aaaabz)->isStr = ((Iterable*)t_)->isStr;
		((Iterable*)aaaabz)->value = ((Iterable*)t_)->value;
		((Iterable*)aaaabz)->c = ((Iterable*)t_)->c;
		((Iterable*)aaaabz)->additional = ((Iterable*)t_)->additional;
		((Iterable*)aaaabz)->next = ((Iterable*)t_)->next;
		((Iterable*)aaaabz)->concat = ((Iterable*)t_)->concat;
		incRef((((Iterable*)aaaabz)->c));
		t_ = iterGetNext(aaaabz);
		(*((int*)((Iterable*)aaaabz)->c+5)) = 0;
	}
}
	while (t_!=NULL) {
Iterable * aaaaap = NULL;
		aaaaap = (Iterable *)t_;
		incRef(aaaaap);
void * aaaaca = NULL;
aaaaca = t_;
		t_ = aaaaap->value;
		incRef(t_);
		decRef(aaaaca);
decRef(int_);
		


void * aaaaaq = NULL;






void * aaaacb = NULL;
aaaacb = int_;
int_ = t_;
incRef(int_);
decRef(aaaacb);
decRef(t_);



void * aaaacc = NULL;
aaaacc = aaaaaq;
aaaaaq = aaaaap;
incRef(aaaaaq);
decRef(aaaacc);
decRef(aaaaap);




void* aaaacd;
aaaacd = iterGetNext((void*) aaaaaq);
void * aaaace = NULL;
aaaace = t_;
t_ = aaaacd;
incRef(t_);
decRef(aaaace);
decRef(aaaaaq);
	}
decRef(t_);
}



void * aaaacf = NULL;
aaaacf = aaaaaj;
aaaaaj = aaaaai;
incRef(aaaaaj);
decRef(aaaacf);
decRef(aaaaai);




void* aaaacg;
aaaacg = iterGetNext((void*) aaaaaj);
void * aaaach = NULL;
aaaach = num_;
num_ = aaaacg;
incRef(num_);
decRef(aaaach);
decRef(aaaaaj);
	}
decRef(num_);






void * aaaaci = NULL;
aaaaci = aaaaat;
aaaaat = int_;
incRef(aaaaat);
decRef(aaaaci);



Integer* aaaacj;
aaaacj = (Integer*) x3malloc(sizeof(Integer));
(aaaacj->nrefs) = 0;
aaaacj->value = 21;
void * aaaack = NULL;
aaaack = aaaaau;
aaaaau = aaaacj;
incRef(aaaaau);
decRef(aaaack);



void * aaaacl = NULL;
aaaacl = aaaaav;
aaaaav = int_;
incRef(aaaaav);
decRef(aaaacl);
decRef(int_);



Integer* aaaacm;
aaaacm = (Integer*) x3malloc(sizeof(Integer));
(aaaacm->nrefs) = 0;
aaaacm->value = 25;
void * aaaacn = NULL;
aaaacn = aaaaaw;
aaaaaw = aaaacm;
incRef(aaaaaw);
decRef(aaaacn);




Boolean* aaaaco = (Boolean*) x3malloc(sizeof(Boolean));
aaaaco->nrefs = 0;
aaaaco->value = ((Integer*) aaaaat)->value > ((Integer*) aaaaau)->value;
void * aaaacp = NULL;
aaaacp = aaaaar;
aaaaar = aaaaco;
incRef(aaaaar);
decRef(aaaacp);
decRef(aaaaat);
decRef(aaaaau);




Boolean* aaaacq = (Boolean*) x3malloc(sizeof(Boolean));
aaaacq->nrefs = 0;
aaaacq->value = ((Integer*) aaaaav)->value == ((Integer*) aaaaaw)->value;
void * aaaacr = NULL;
aaaacr = aaaaas;
aaaaas = aaaacq;
incRef(aaaaas);
decRef(aaaacr);
decRef(aaaaav);
decRef(aaaaaw);




Boolean* aaaacs;
aaaacs = (Boolean*) x3malloc(sizeof(Boolean));
aaaacs->nrefs = 0;
aaaacs->value=((Boolean*)aaaaar)->value && ((Boolean*)aaaaas)->value;
void * aaaact = NULL;
aaaact = aaaaax;
aaaaax = aaaacs;
incRef(aaaaax);
decRef(aaaact);
decRef(aaaaar);
decRef(aaaaas);



if ( ((Boolean *)aaaaax)->value) {
decRef(aaaaax);









aaaaaeS* aaaaae;
aaaaae = (aaaaaeS*) x3malloc(sizeof(aaaaaeS));
aaaaae->nrefs = 1;
aaaaae->isIter = 0;
aaaaae->isStr = 0;
aaaaae->isEC = 1;
aaaaae->eC = NULL;
aaaaae->next = &aaaaaeF;
aaaaae->visited= 0;
aaaaadS* aaaaad;
aaaaad = (aaaaadS*) x3malloc(sizeof(aaaaadS));
aaaaad->nrefs = 1;
aaaaad->isIter = 0;
aaaaad->isStr = 0;
aaaaad->isEC = 1;
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
Iterable* aaaacu;
aaaacu = (Iterable*) x3malloc(sizeof(Iterable));
aaaacu->isIter = 1;
aaaacu->nrefs = 0;
aaaacu->value = NULL;
aaaacu->c = aaaaac;
aaaacu->additional = NULL;
aaaacu->next = &aaaaacIterNext;
aaaacu->concat = NULL;

return aaaacu;
}
decRef(aaaaax);






return NULL;
}

void* aaaaaeF(void* c_aaaacv) {
aaaaaeS* this_aaaacw= (aaaaaeS*) c_aaaacv;
if(this_aaaacw->visited){ 
	return NULL;
}else {
	this_aaaacw->visited=1; 

Integer* aaaacy;
aaaacy = (Integer*) x3malloc(sizeof(Integer));
(aaaacy->nrefs) = 0;
aaaacy->value = 115;
Character* aaaacx;
aaaacx = (Character*) x3malloc(sizeof(Character));
aaaacx->value = unichar (((Integer*)aaaacy)->value);
	return aaaacx;
	}
}
void* aaaaadF(void* c_aaaacz) {
aaaaadS* this_aaaada= (aaaaadS*) c_aaaacz;
if(this_aaaada->visited){ 
	return ((aaaaaeS*)this_aaaada->eC)->next(this_aaaada->eC);
}else {
	if (this_aaaada->eC!=NULL&&this_aaaada->visited==0){		((aaaaaeS*)this_aaaada->eC)->visited=0;}
		this_aaaada->visited=1; 

Integer* aaaadc;
aaaadc = (Integer*) x3malloc(sizeof(Integer));
(aaaadc->nrefs) = 0;
aaaadc->value = 101;
Character* aaaadb;
aaaadb = (Character*) x3malloc(sizeof(Character));
aaaadb->value = unichar (((Integer*)aaaadc)->value);
	return aaaadb;
	}
}
void* aaaaacF(void* c_aaaadd) {
aaaaacS* this_aaaade= (aaaaacS*) c_aaaadd;
if(this_aaaade->visited){ 
	return ((aaaaadS*)this_aaaade->eC)->next(this_aaaade->eC);
}else {
	if (this_aaaade->eC!=NULL&&this_aaaade->visited==0){		((aaaaadS*)this_aaaade->eC)->visited=0;}
		this_aaaade->visited=1; 

Integer* aaaadg;
aaaadg = (Integer*) x3malloc(sizeof(Integer));
(aaaadg->nrefs) = 0;
aaaadg->value = 121;
Character* aaaadf;
aaaadf = (Character*) x3malloc(sizeof(Character));
aaaadf->value = unichar (((Integer*)aaaadg)->value);
	return aaaadf;
	}
}
Iterable* aaaaacIterNext(void* aaaadi){ 
Iterable* this=(Iterable*)aaaadi;
if (((aaaaacS*)this->c) != NULL) {
	void* aaaadh = this->value;
	this->value=((aaaaacS*)this->c)->next(this->c);
	incRef(this->value);
	decRef(aaaadh);
	if(this->value)
		return this;
	else
		return NULL;
}
else
	return NULL;
}
void* aaaaafF(void* c_aaaadl) {
aaaaafS* this_aaaadm= (aaaaafS*) c_aaaadl;
if(this_aaaadm->visited){ 
	return NULL;
}else {
	this_aaaadm->visited=1; 


void* aaaado;
aaaado = coolname_();
	if (aaaado!=NULL) {
		if ((*((int *)(aaaado+1))) == 0) {
void * aaaadp = NULL;
aaaadp = aaaado;
			aaaado = strToIter( ((String *)aaaado)->value, ((String *)aaaado)->len);
if ( (*(int *)(aaaadp)) != 0) {
incRef(aaaado);
decRef(aaaadp);
}
else {
incRef(aaaadp);
decRef(aaaadp);
}
		}
	}
void* aaaadn;
aaaadn = concatChars((Iterable*)aaaado);
	return aaaadn;
	}
}
Iterable* aaaaafIterNext(void* aaaadr){ 
Iterable* this=(Iterable*)aaaadr;
if (((aaaaafS*)this->c) != NULL) {
	void* aaaadq = this->value;
	this->value=((aaaaafS*)this->c)->next(this->c);
	incRef(this->value);
	decRef(aaaadq);
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






aaaaafS* aaaaaf;
aaaaaf = (aaaaafS*) x3malloc(sizeof(aaaaafS));
aaaaaf->nrefs = 1;
aaaaaf->isIter = 0;
aaaaaf->isStr = 0;
aaaaaf->isEC = 1;
aaaaaf->eC = NULL;
aaaaaf->next = &aaaaafF;
aaaaaf->visited= 0;
Iterable* aaaadk;
aaaadk = (Iterable*) x3malloc(sizeof(Iterable));
aaaadk->isIter = 1;
aaaadk->nrefs = 0;
aaaadk->value = NULL;
aaaadk->c = aaaaaf;
aaaadk->additional = NULL;
aaaadk->next = &aaaaafIterNext;
aaaadk->concat = NULL;

return aaaadk;
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
