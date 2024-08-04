#define PLITHOS
typedef typos_stoixeiou;
typedef struct{
	int embros,piso;
	typos_stoixeiou pinakas[PLITHOS];
}typos_ouras;

typos_ouras oura;

void dimiourgia(typos_ouras *oura){
	oura->embros =0;
	oura->piso=0;
}

int keni(typos_ouras oura){
	return(oura.embros == oura.piso);
}

int gemati(typos_ouras oura){
	int neo_piso = (oura.piso+1)%PLITHOS;
	return (neo_piso == oura.embros);
}

void prosthesi(typos_ouras *oura, typos_stoixeiou stoixeio){
	if (gemati(*oura))
		printf("Γεμάτη ουρά");
	else{
		oura->pinakas[oura->piso]=stoixeio;
		oura->piso = (opura->piso+1)%PLITHOS;
	}
}

void apomakrinsi(typos_ouras *oura, typo_stoixeiou *stoixeio)
{
	if (keni(*oura))
		printf("Κενή ουρά");
	else
	{
		*stoixeio=oura->pinakas[oura->embros];
		oura->embros=(oura->embros+1)%PLITHOS;
	}
}
