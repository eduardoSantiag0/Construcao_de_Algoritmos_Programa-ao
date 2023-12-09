#include <stdio.h>
#include <stdlib.h>


//todo a) Aloque dinamicamente um vetor de 5 números inteiros
//todo b) Peça para o usuário digitar os 5 números no espaço alocado
//todo c) Mostre na tela os 5 números
//todo d) Libere a memória alocada

#define SIZE 5


int main (void)
{
    int *pVetor = (int *) malloc(SIZE * sizeof (int));
    if (pVetor == NULL)
        return 1;


    int i;
    for (i = 0; i < SIZE; i++){
        printf("Numero: ");
        scanf("%d", &pVetor[i]);
    }

    for (i = 0; i < SIZE; i++){
        printf("%d\n", pVetor[i]);
    }


    free(pVetor);



    return 0;
}