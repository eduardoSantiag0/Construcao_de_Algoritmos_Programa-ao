#include <stdio.h>
#include <stdlib.h>

//// Faça um programa para armazenar em memoria um vetor de dados contendo 1500 valores do tipo int, usando a função de alocação dinâmica de memória CALLOC:
//// a) Atribua para cada elemento do vetor o valor do seu índice.
//// b) Exibir na tela os 10 primeiros e os 10 últimos elementos do vetor.

int main (void)
{
    int i;
    int size = 1500;

    int *ptrVetor = (int *) calloc (size, sizeof(int));
    if (ptrVetor == NULL)
        return  1;
    for(i = 0; i < size; i++){
        ptrVetor[i] = i;
    }

    
    for(i = 0; i < 10; i++){
        printf(" %d\n", ptrVetor[i]);
        printf(" Inverso: %d\n", ptrVetor[size - i - 1]);
    }


    free(ptrVetor);
    
    return 0;
}