#include <stdio.h>
#include <stdlib.h>

int *create_array(int size){
    int size2 = size;
    int *tab = malloc (size * sizeof(int));
    for (int i = 0 ; i<size;++i){
       *(tab+i)= size2;
       --size2;
    }
    return tab;
}
void display_array(int *tab , int size){
    printf("|");
    for(int i =0 ; i<size;++i){
        printf(" %d |", tab[i]);
    }
}
void display_array2(int *tab , int size){
    printf("\n\n|");
    int *fin = tab + size;
    for(int *p = tab ;p<fin;++p){
        printf(" %d |", *p);
    }
    printf("\n");
}

int main (void) {
    int size = 50;
    int *tab = create_array(size);
    display_array(tab , size);
    display_array2(tab , size);
    free(tab);
    tab = NULL;
}

