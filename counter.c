#include <stdio.h>

void print_hello(){
	static int i = 0;
	printf("Bonjour numero %d \n",i);
	++i;
}
int main(void){
	int nb = 10;
	for(int i = 0;i<nb;++i){
		print_hello();
	}

}
