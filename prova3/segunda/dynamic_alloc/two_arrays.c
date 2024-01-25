#include <stdio.h>
#include <stdlib.h>
// Crie uma função que receba como parâmetros dois vetores de inteiros, v1 e v2, e as suas respectivas quantidades de elementos, n1 e n2. 
// A função deverá retornar um ponteiro para um terceiro vetor, v3, com capacidade para (n1 + n2) elementos, alocado dinamicamente, contendo a união de v1 e v2.

int* sum_arrays (int* ptr, int vetor1[], int vetor2[], int len_array1, int len_array2) 
{
    int size_three = len_array1 + len_array2;
    int half = size_three / 2;

    int i, j;

    for (i = 0; i < size_three; i++) {
        if (i < half)
            ptr[i] = vetor1[i];
        else 
            ptr[i] = vetor2[i - half];
    }
    printf("Impressao concluida!\n");

    return ptr;
}


int main (void)
{
    int array1[4] = {2, 3, 2, 3};
    int array2[4] = {4, 5, 5, 4};

    int *ptrThird = (int*) malloc(sizeof (int) * 8);
    sum_arrays (ptrThird,array1, array2, 4, 4);

    int i;
    printf("\n");
    for (i = 0; i < 8; i++) {
        printf("%d ", ptrThird[i]);
    }
    free(ptrThird);
    return 0;
}