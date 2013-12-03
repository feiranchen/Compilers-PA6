#include "cubex_main.h"
#include "cubex_external_functions.h"
#include "cubex_lib.h"



void* our_main()
{
void * ret = NULL;
void * i = NULL;






void * aaaaak = NULL;
aaaaak = ret;
ret = NULL;
incRef(ret);
decRef(aaaaak);






int aaaaal;
Iterable* input= NULL;
String* aaaaab= NULL;
aaaaal = next_line_len();
if(aaaaal == 0) {
	input = NULL;
}
else {
	aaaaab = (String*) x3malloc(sizeof(String));
	aaaaab->isIter = 0;
	aaaaab->nrefs = 1;
	aaaaab->isStr = 1;
	aaaaab->value = (char*) x3malloc(aaaaal * sizeof(char));
	aaaaab->len = aaaaal;
	read_line(aaaaab->value);
	input = (Iterable*) x3malloc(sizeof(Iterable));
	input->isIter = 1;
	input->nrefs = 1;
	input->value = aaaaab;
	input->additional = NULL;
	input->next = &input_onwards;
	input->concat = NULL;
}
void * aaaaam = NULL;
aaaaam = i;
i = input;
incRef(i);
decRef(aaaaam);
decRef(input);
	if (i!=NULL) {
		if ((*((int *)(i+1))) == 0) {
void * aaaaan = NULL;
aaaaan = i;
			i = strToIter( ((String *)i)->value, ((String *)i)->len);
incRef(i);
decRef(aaaaan);
		}
	}
	while (i!=NULL) {
Iterable * aaaaac = NULL;
		aaaaac = (Iterable *)i;
		incRef(aaaaac);
void * aaaaao = NULL;
aaaaao = i;
		i = aaaaac->value;
		incRef(i);
		decRef(aaaaao);
		


void * aaaaai = NULL;
void * aaaaag = NULL;
void * aaaaah = NULL;
void * aaaaaj = NULL;
void * aaaaae = NULL;
void * aaaaaf = NULL;
void * aaaaad = NULL;






void * aaaaap = NULL;
aaaaap = aaaaai;
aaaaai = i;
incRef(aaaaai);
decRef(aaaaap);



Iterable* aaaaaq;
aaaaaq = (Iterable*) x3malloc(sizeof(Iterable));
aaaaaq->isIter = 1;
aaaaaq->nrefs = 1;
aaaaaq->value = aaaaai;
aaaaaq->additional = NULL;
aaaaaq->next = NULL;
aaaaaq->concat = NULL;
incRef(aaaaai);
aaaaaq->nrefs = 0;
void * aaaaar = NULL;
aaaaar = aaaaag;
aaaaag = aaaaaq;
incRef(aaaaag);
decRef(aaaaar);
decRef(aaaaai);



void * aaaaas = NULL;
aaaaas = aaaaah;
aaaaah = ret;
incRef(aaaaah);
decRef(aaaaas);
decRef(ret);



void * aaaaat = NULL;
aaaaat = aaaaaj;
aaaaaj = i;
incRef(aaaaaj);
decRef(aaaaat);
decRef(i);



void *aaaaav;
aaaaav = aaaaag;
if (aaaaav!=NULL) {
(*((int *)aaaaav))++;
if ((*((int *)aaaaag+1)) == 0) {
decRef(aaaaav);
aaaaav = strToIter( ((String *)aaaaag)->value, ((String *)aaaaag)->len);
}
}
void *aaaaaw;
aaaaaw = aaaaah;
if (aaaaaw!=NULL) {
(*((int *)aaaaaw))++;
if ((*((int *)aaaaah+1)) == 0) {
decRef(aaaaaw);
aaaaaw = strToIter( ((String *)aaaaah)->value, ((String *)aaaaah)->len);
}
}
Iterable* aaaaau;
aaaaau = concatenate((Iterable*)aaaaav, (Iterable*) aaaaaw);
decRef(aaaaav);
decRef(aaaaaw);
void * aaaaax = NULL;
aaaaax = aaaaae;
aaaaae = aaaaau;
incRef(aaaaae);
decRef(aaaaax);
decRef(aaaaag);
decRef(aaaaah);



Iterable* aaaaay;
aaaaay = (Iterable*) x3malloc(sizeof(Iterable));
aaaaay->isIter = 1;
aaaaay->nrefs = 1;
aaaaay->value = aaaaaj;
aaaaay->additional = NULL;
aaaaay->next = NULL;
aaaaay->concat = NULL;
incRef(aaaaaj);
aaaaay->nrefs = 0;
void * aaaaaz = NULL;
aaaaaz = aaaaaf;
aaaaaf = aaaaay;
incRef(aaaaaf);
decRef(aaaaaz);
decRef(aaaaaj);



void *aaaabb;
aaaabb = aaaaae;
if (aaaabb!=NULL) {
(*((int *)aaaabb))++;
if ((*((int *)aaaaae+1)) == 0) {
decRef(aaaabb);
aaaabb = strToIter( ((String *)aaaaae)->value, ((String *)aaaaae)->len);
}
}
void *aaaabc;
aaaabc = aaaaaf;
if (aaaabc!=NULL) {
(*((int *)aaaabc))++;
if ((*((int *)aaaaaf+1)) == 0) {
decRef(aaaabc);
aaaabc = strToIter( ((String *)aaaaaf)->value, ((String *)aaaaaf)->len);
}
}
Iterable* aaaaba;
aaaaba = concatenate((Iterable*)aaaabb, (Iterable*) aaaabc);
decRef(aaaabb);
decRef(aaaabc);
void * aaaabd = NULL;
aaaabd = ret;
ret = aaaaba;
incRef(ret);
decRef(aaaabd);
decRef(aaaaae);
decRef(aaaaaf);



void * aaaabe = NULL;
aaaabe = aaaaad;
aaaaad = aaaaac;
incRef(aaaaad);
decRef(aaaabe);
decRef(aaaaac);




void* aaaabf;
aaaabf = iterGetNext((void*) aaaaad);
void * aaaabg = NULL;
aaaabg = i;
i = aaaabf;
incRef(i);
decRef(aaaabg);
decRef(aaaaad);
	}
decRef(i);






if (ret!= NULL) {
(*(int *)ret)--;
}
return ret;
}


void cubex_main() {
Iterable* ourMain, *temp;
ourMain = (Iterable*) our_main();
temp = ourMain;
while(ourMain != NULL) {
	print_line(((String*)ourMain->value)->value, ((String*)ourMain->value)->len);
	ourMain = iterGetNext(ourMain);
}
freeIter(temp);
}
