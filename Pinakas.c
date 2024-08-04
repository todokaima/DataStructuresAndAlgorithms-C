#include <stdio.h>

#define PLITHOS
typedef typos_stoixeiou;
typedef typos_stoixeiou typos_pinaka[PLITHOS];

void kataxorisi(typos_pinaka a, int i, typos_stoixeou s){
	if ((0<=i) && (i<=PLITHOS-1))
		a[i]=s;
	else
		printf("Λάθος τιμή δείκτη");
}

typos_stoixeiou anaktisi (typos_pinaka a, int i){
	if ( (0<=i) && (i<=PLITHOS-1))
		return(a[i]);
	else
		printf("Λάθος τιμή δείκτη");
}

#define Plithos
typedef struct{
	int stili;
	int grami;
	int timi;	
}typos_stoixeiou;
typos_stoixeiou a[Plithos];

void anastrofos(typos_stoixeiou a[],typos_stoixeiou b[]);{
	int n,i,j, trexonb;
	n=a[0].timi;
	b[0].grami=a[0].stili;
	b[0].stili = a[0].grami;
	b[0].timi=n;
	{
		trexonb=1;
		for(i=0;i<a[0].stili; i++){
			for(j=1;j<=n;j++){
				if (a[j].stili==i)
				b[trexonb].grami = a[j].stili;
				b[trexonb].stili=a[j].grami;
				b[trexonb].timi=a[j].timi;
				trexonb++;
			}
		}
	}
