#include <stdio.h>
#include <string.h>
/*
	my_strcat
	entrer : deux chaine de caractere donc celle de destination assez grandre pour contenir src 
	sortie : la chaine concaténé des deux premiere chaine et a l emplacement memoire de dest
*/
char *my_strcat(char *dest , const char *src){
	
	char *copy = dest;

	while(*dest !='\0'){
		++dest;
	}
	while(*src !='\0'){
		*dest = *src;
		++src;
		++dest;
	}
	*dest  = '\0';
	return copy;
}



int main(void){
	char marche[50] = "marche ";
	printf("mot concat est %s \n", my_strcat(marche,"stp"));
	return 0;
}
