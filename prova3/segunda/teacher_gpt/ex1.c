#include <stdio.h>
#include <stdlib.h>

// Write a C program that dynamically allocates memory for an integer array of size n (where n is provided by the user). The program should then read n integers from the user, store them in the allocated array, and finally, print the sum of the integers.

int main (void) {
    int i, size;
    printf("Size: ");
    scanf("%d", &size);

    int *ptr = malloc (sizeof (int) * size);

    for (i = 0; i < size; i++) {
        printf("Informe o numero %d\n", i+1);
        scanf("%d", &ptr[i]);
    }

    int soma = 0;
    for (i = 0; i < size; i++) {
        soma += ptr[i];
        printf("\t%d\n", soma);
    }


    printf("Soma: %d", soma);

    return 0;
}