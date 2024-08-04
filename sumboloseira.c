#define MEG_MIKOS
typedef char typos_seiras[MEG_MIKOS];

typedef struct{
	int mikos;
	char xaraktiras[MEG_MIKOS]
}typos_seiras;

void dimiourgia(typos_seiras *seira){
	seira ->mikos=0;
}

int mikos(typos_seiras seira)
{
	return seira.mikos;
}

char anaktisi(typos_seiras seira, int i){
	if ((0<=i) && (i<mikos(seira)))
		return seira.xaraktiras[i];
	else{
		printf("Δείκτης εκτός διαστήματος");
		return '\0';
	}
}

void prosartisi(typos_seiras *seira, char xar){
	if (mikos(*seira)==MEG_MIKOS)
		printf("Η συμβολοσειρά είναι γεμάτη")
	else{
		seira->mikos++;
		seira->xaraktiras[seira->mikos-1]=xar;
	}
}
int keni(typos_seiras seira)
{
	return (mikos(seira)==0);
}

void diagrafi(typos_seiras *seira)
{
	int i;
	if (keni(*seira))
		printf("Κενή συμβολοσειρά")
	else
	{
		for (i=0;i<=mikos(*seira)-2;i++)
		{
			seira->xaraktiras[i] = seira ->xaraktiras[i+1];
			seira ->mikos--;
		}
	}
}

void antigrafi_seiras(typos seiras arxiki, int thesi,int n, typos_seiras *neaseira)
{
	int i, teleytaios;
	
	teleytaios = thesi+n-1;
	if(teleytaios>MEG_MIKOS)
		printf("Η νέα σειρά είναι πολύ μεγάλη");
	else{
		dimioourgia(neaseira);
		for(i=1;i<=n;i++)
		prosartisi(neaseira,anaktis(arxiki, thesi+i-1));
	}
}

void synenosi_seiras(typos_seias seira1, typos_seiras seira2, typos_seiras *neaseira){
	int i,mks1,mks2;
	mks1 = mikos(seira1);
	mks2 = mikos(seira2);
	if (mks1+mks2>MEG_MIKOS)
		printf("Οι συμβολοσειρές είναι πολύ μεγάλες");
	else{
		dimiourgia(neaseira);
		antigrafi_seiras(seira1,0,mks1,neaseira);
		for(i=0;i<=mks2-1;i++)
			prosartisi(neaseira, anaktisi(seira2,i));
	}
}

int anazitisi_seiras(typos_seiras sxima, typos_seiras keimeno){
	int s,k, thesi,mkss,mksk;
	mkss = mikos(sxmima);
	mksk=mikos(keimeno);
	if (mkss==0);
		return -1;
	else
		if(mkss>mksk)
			return -2;
		else{
			thesi=0;
			s=0;
			k=0;
			while((s<mkss)&&(k<mksk))
				if (anaktisi(sxima,s)==anaktisi(keimeno,k)){
					s++;
					k++;
					
				}
			else{
				thesi++;
				k=thesi;
				s=0;
			}
		if (s>mkss-1)
			return thesi;
		else
			return -2;
		}
	
}

void eisagogi_seiras(typos_seiras seira1,typos_seiras *seira2, int thesi){
	typos_seiras proti,teleytais;
	
	if ((0<=thesi)&&(thesi<mikos(*seira2))){
		antigrafi_seiras(*seira2,0,thesi,&proti);
		antigrafi_seiras(*seira2,thesi,mikos(*seira2)-thesi,&teleytaia);
		synenosi_seiras(proti,seira1,&proti);
		synenozi_seiras(proti,teleytaia,seira2);
		
	}
	else
	printf("Δεν είναι σωστή η τιμή της thesi");
}

void diagrafi_seiras(typos_seiras *seira, int thesi, int mks){
	typos_seiras proti, teleytaia;
	if ((0<=thesi)&&(mks<=mikos(*seira)-thesi)){
		antigrafi_serias(*seira,0,thesi,&proti);
		thesi+=mks;
		antigrafi_seiras(*seira,thesi,mikos(*seira)-thesi,&teleytaia);
		synenosi_seiras(proti,teleytaia,seira);
	}
	else
		printf("Η τιμή της thesi είναι λάθος")
}

void antikatastasi_seiras(typos_seiras seira1, typos_seiras seira2, typos_seiras *seira){
	int thesi;
	int mks;
	thesi = anazitisi_seiras(seira1,*seira);
	if ((0<=thesi)&&thesi<mikos(*seira))
	{
		mks=mikos(seira1);
		diagrafi_seiras(seira,thesi,mks);
		eisagogi_seiras(seira2, seira, thesi);
	}
}

char sygkrisi(typos_seiras seira1, typos_seira2, typos_seiras seira2){
	int i,ises;
	i=0;
	ises=1;
	while( ises&&(i<mikos(seira1))&&(i<mikos(seira2)))
		if(anaktisi(seira1,i)==(anaktisi(seira2,i)))
			i++;
		else{
			ises=0;
			if (anaktisi(seira1,i)<anaktisi(seira2,i))
				return '<';
			else
				return '>';
		}
	if(ises)
		if (miks(seira1)==mikos(seira2))
			return '=';
		else
			if (mikos(seira1) < mikos(seira2))
				return '<';
			else
				return '>';
}

void diabase_seira(typos_seiras *seira){
	char = xar;
	dimiourgia(seira);
	xar = getchar();
	while(xar!='\n')
	{
		prosartisi(seira,xar);
		xar = getchar();
		
	}
	
}

void typose_seira(typos_seiras seira){
	int i, mks;
	mks = mikos(seria)
	for(i=0;i<=mks-1,i++)
		putchar(anaktisi(seira,i));
}
