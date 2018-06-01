#include <stdio.h>
#include <string.h>

char *my_strcat(char *dest , const char *src){
	while(*dest !='\0'){
		++dest;
	}
	printf("marche");	
	while(*src !='\0'){
		*dest = *src;
		++src;
		++dest;
	}
	*dest = '\0';	
	return dest;
}



int main(void){
	printf("mot concat est %s", my_strcat("marche"," stp"));
	return 0;
}
