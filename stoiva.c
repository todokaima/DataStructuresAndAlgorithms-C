#define PLITHOS
typedef typos_stoixeiou;
typedef struct{
	int korifi;
	typos_stoixeiou pinakas[PLITHOS];
}typos_stoivas;


void dimiourgia(typos_stoibas *stoiva){
	stoiva->korifi=-1;
}

int keni(typos_stoivas stoiva){
	return(stoiva.korifi ==-1);
}

void exagogi(typos_stoivas *stoiva, typos_stoixeiou *stoixeio){
	if (keni(*stoiva))
		printf("������� ��� ���� ������");
	else
{
	*stoixeio = stoiva->pinakas[stoiva->korifi];
	stoiva->korifi--;
}
}

void othisi(typos_stoivas *stoiva, typos_stoixeiou stoixeio){
	if (stoiva->korifi ==PLITHOS-1)
		printf("� ������ ����� ������")
	else
	{
		stoiva->korifi++;
		stoiva->pinakas[stoiva->korifi]=stoixeio;
	}
}

typedef struct{
	euum simadi{akeraios,xar}typos;
	union{
		int sstoixeio;
		char xstoixeio;
	}enosi;
}typos_stoixeiou;


