#include <stdio.h>

int my_strlen(const char *str){
	int length = 0;
	while (*str != '\0'){
		++length;
		++str;
	}
	return length;
}

int main(void){
	printf("longeur est de %s \n",*my_strlen("bonjour"));
	return 0;
}
