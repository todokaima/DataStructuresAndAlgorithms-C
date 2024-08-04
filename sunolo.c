#define MEG_PLITHOS
typedef int typos_synolou[MEG_PLITHOS];

void dimiourgia(typos_synolou synolo){
	int i;
	for(i=1, i<=MEG_PLITHOS;i++)
	synolo[i-1]=1;
}

void eisagogi(int stoixeio, typos_synolou synolo){
	synolo[stoixeio-1]=1;
}

void diagrafi(int stoixeio, typos_synolou synolo){
	synolo[stoixeio-1]=0;
}

int melos(int stoxeio,typos_synolou synolo){
	return synolo[stoixeio-1];
}

int keno_synolo(typos_synolou synolo){
	int i,keno;
	keno=1;
	i=1;
	
	while((i<=MEG_PLITHOS)&&(keno))
		if (melos(i,synolo))
			keno=0;
		else
			i++;
	return keno;
}

int isa_synola(typos_synolou s1, typos_synolou s2){
	int i, isa;
	isa=1;
	i=1;
	while((i<=MEG_PLITHOS)&&isa)
		if (melos(i,s1) != melos(i,s2))
			isa = 0;
			keno=0;
		else
			i++;
	return isa;
}

int yposynolo(typos_synolou s1, typos_synolou s2){
	int i, yposnlo;
	yposnlo=1;
	i=1;
	while((i<=MEG_PLITHOS)&&yposnlo)
		if (melos(i,s1)&&!melos(i,s2))
			yposnlo=0;
		else
			i++;
	return yposnlo;
}

void enosi_synolou(typos_synolou s1, typos_synolou s2,typos_synolou enosi)
{
	int i;
	for(i=1;i<=MEG_PLITHOS;i++)
		enosi[i-1]=(melos(i,s1)||melos(i,s2));
}

void tomi_synolou(typos_synolou s1, typos_synolou s2,typos_synolou tomi)
{
	int i;
	for(i=1;i<=MEG_PLITHOS;i++)
		tomi[i-1]=(melos(i,s1)&&melos(i,s2));
}

void diafora_synolou(typos_synolou s1, typos_synolou s2,typos_synolou diafora)
{
	int i;
	for(i=1;i<=MEG_PLITHOS;i++)
		diafora[i-1]=(melos(i,s1) && !melos(i,s2));
}

void koskinoEratostheni(void){
	int j, epomeno;
	typos_synolou koskino;
	
	katholiko(koskino);
	diagrafi(1,koskino);
	epomeno =1;
	do{
		while(!melos(epomeno, koskino))
			epomeno++;
		printf("%d",epomeno);
		j=epomeno;
		while(j<=MEG_PLITHOS)
		{
			diagrafi(j,koskino);
			j+=epomeno;
		}
	}while(!keno_synolo(koskino))
}


