#include <stdio.h>
#include <stdlib.h>


// Fazer uma matriz virar um vetor grande
// Criar de forma dinâmica uma matriz

#define LINHA 5
#define COLUNA 5

int main (void)
{
    int i, j;

    //* Criando ponteiro para ponteiros de cada linha
    int **ptrMatrizIndex = (int **) malloc (LINHA * sizeof(int *));
    if (ptrMatrizIndex == NULL)
        return 1;


    //* Criando ponteiro para linha
    for (i = 0; i < COLUNA; i++){
        ptrMatrizIndex[i] = (int *) malloc (COLUNA * sizeof(int));
        if (ptrMatrizIndex[i] == NULL)
            return 1;
    }
    

    //! Enchendo e Imprimindo
    for (i = 0; i < LINHA; i++){
        for (j = 0; j < COLUNA; j++){
            ptrMatrizIndex[i][j] = i;
        }
    }


    //? Fazer uma matriz virar um vetor
    //todo Toda linha é a continuação do final da linha anterior
    //* [j] == ptrMatrizIndex

    int *q = (int *)malloc(LINHA * COLUNA * sizeof(int));
    q = ptrMatrizIndex[0];

    for (i = 0; i < COLUNA * LINHA; i++){
        ptrMatrizIndex[i] = &q[i*COLUNA];
    }

    for (i = 0; i < LINHA * COLUNA; i++){
        printf(" %d ", q[i]);
    }
    

    // for (i = 0; i < LINHA; i++){
    //     for (j = 0; j < COLUNA; j++){
    //         printf("%d e %p", ptrMatrizIndex[i][j], &ptrMatrizIndex[i][j]);
    //         printf("\n");
    //     }
    //     printf("\n");
    //     printf("\n");
    // }

    for (i = 0; i < LINHA; i++)
        free(ptrMatrizIndex[i]);
    
    free(ptrMatrizIndex);

    free(q);

    return 0;
}