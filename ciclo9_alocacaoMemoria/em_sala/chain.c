#include <stdio.h>
#include <stdlib.h>

#define LINHA 5
#define COLUNA 5

void vetorParaMatrix(int **Matriz){
    int i, j;

    int *vetorMaior = (int *)malloc ((LINHA*COLUNA ) * sizeof(int));
    if (vetorMaior == NULL)
        return;

    
    // adiciona linha com linha
    // i = linha == pMatriz
    // j = coluna 

    //? O começo de cada linha é a continuação do ultimo elemento da coluna anterior
    int contador = 0;
    for (i = 0; i < LINHA; i++){
        for (j = 0; j < COLUNA; j++){
            contador++;
            vetorMaior[contador] = Matriz[i][j];
        }
    }

    for (i = 0;i < LINHA*COLUNA; i++){
        printf("%d ", vetorMaior[i]);
    }
    printf("\n");
}


int main (void)
{
    int **pMatriz;
    int i, j;

    pMatriz = (int **)malloc(LINHA * sizeof(int *));
    if (pMatriz == NULL)
        return 1;

    //! Criando o índice de ponteiros
    for (i=0;i<LINHA;i++){
        pMatriz[i] = (int*)malloc(COLUNA * sizeof(int));
        if (pMatriz[i] == NULL)
            return 1;
    }

    // int *q;
    // pMatriz = q;

    //! Preenchendo a matrix
    for (i=0;i<LINHA;i++){
        for(j = 0;j < COLUNA; j++){
            pMatriz[i][j] = i + j;
        }
    }
    // sizeof(int) / sizeof(linha)

    vetorParaMatrix(pMatriz);

    //! Printando a Matrix
    
    printf("\tMATRIX");
    printf("\n");


    for (i=0;i<LINHA;i++){
        for(j = 0;j < COLUNA; j++){
            printf(" %d ", pMatriz[i][j]);
        }
        printf("\n");
    }

    // for (i=0;i<LINHA;i++)
    // pMatrix[i] = &q[i*C]

    for (i=0;i<LINHA;i++){
        free(pMatriz[i]);
    }
    free(pMatriz);

    return 0;
}