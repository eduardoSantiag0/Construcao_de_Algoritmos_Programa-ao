#include <stdio.h>

int main (void){

    int i;
    int lista[5];

    printf("\tINICIO");

    //! Preenchendo o vetor
    for (i = 0; i < sizeof(lista) / sizeof(lista[0]); i++) {
        lista[i] = i;
        printf("%d\n", lista[i]);
    }


    //! Printando o Vetor
    printf("Print the entire array:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", lista[i]);
    }
    printf("\n");

    return 0;
}