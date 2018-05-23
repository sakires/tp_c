
#include<stdio.h>
#include<stdlib.h>
double sum1(double *tab,int size){
	double total = 0.0;
	int i = 0;
	for(i=0;i<=size;++i)
	{
		total = total + tab[i];
	}
	return total;		
}

double sum2(double *tab,int size){
	double *fin = tab + size;
	double total = 0.0;
	for(double *p =tab;p<fin;++p){
		total=*p+total;
	}
	return total;
}

int main(void){
	double *tab = malloc(5*sizeof(int));
	tab[0] = 100;
	tab[1] = 10;
	tab[2] = 1;
	tab[3] = 0.1;
	tab[4] = 0.01;
	double res1 = sum1(tab,5);
	double res2 = sum2(tab,5);
	printf("res1 vaut %f",sum1);
	printf("res2 vaut %f",sum2);
	free(tab);
	tab = NULL;
	return 0;
}

