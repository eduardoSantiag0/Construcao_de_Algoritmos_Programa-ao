#include <stdio.h>
#include <stdlib.h>

// Escreva um programa que aloque dinamicamente uma matriz (de inteiros) de dimensões definidas pelo usuário e a leia. 
// Em seguida, implemente uma função que receba um valor, retorne 1 caso o valor esteja na matriz ou retorne zero caso não esteja na matriz.

int main (void)
{
    int inLado, inColuna, i, j;

    printf("Informe o lado e a coluna: ");
    scanf("%d %d", &inLado, &inColuna);


    int **ptrMatrix = (int **) malloc (inLado * inColuna * sizeof(int *));
    if (ptrMatrix == NULL)
        return 1;

    for (i = 0; i < inLado; i++){
        ptrMatrix[i] = (int *) malloc (inColuna * sizeof(int));
        if (ptrMatrix[i] == NULL)
            return 1;
    }
    for (i = 0; i < inLado; i++){
        for (j = 0; j < inColuna; j++){
            ptrMatrix[i][j] = i + j + 1;
        }

    }

    int inGuess;
    printf("Advinhe o numero: ");
    scanf("%d", &inGuess);


    for (i = 0; i < inLado; i++){
        for (j = 0; j < inColuna; j++){
            if (inGuess == ptrMatrix[i][j])
                printf("Esta na linha: %d e coluna: %d \n",i , j);    
        }
    }

    for (i = 0; i < inLado; i++){
        for (j = 0; j < inColuna; j++){
            printf("%d ",ptrMatrix[i][j]);
        }
        printf("\n");
    }

    
    for (i = 0; i < inColuna; i++)
        free(ptrMatrix[i]);
    
    free(ptrMatrix);

    return 0;
}