#include <stdio.h>
#include <stdlib.h>


//// Aloque dinamicamente um vetor de 5 números inteiros
//// Peça para o usuário digitar os 5 números no espaço alocado
//// Mostre na tela os 5 números
//todo imprima o vetor lido e mostre quantos dos números são pares e quantos são ımpares
//todo Libere a memória alocada

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

    int countPar = 0;
    int countImpar = 0;
    for (i = 0; i < SIZE; i++){
        printf("%d\n", pVetor[i]);
        if (pVetor[i] % 2 == 0)
            countPar++;
        else
            countImpar++;
    }

    printf("Pares: %d\n", countPar);
    printf("Impares: %d\n", countImpar);


    free(pVetor);



    return 0;
}