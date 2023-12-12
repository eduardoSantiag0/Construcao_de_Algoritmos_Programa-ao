#include <stdio.h>

#include <stdlib.h>


#define LINHA 5
#define COLUNA 5

void usandoMalloc(int **pMatriz){
    int i, j;

    // Iniciando os ponteiros
    for(i = 0; i < LINHA; i++){
        pMatriz[i] = (int *)malloc(COLUNA * sizeof(int));

        if (pMatriz[i] == NULL)
            return;
    }

    // Preenchendo a matriz
    for (i = 0; i < LINHA; i++) { 
        for (j = 0; j < COLUNA; j++) {
            pMatriz[i][j] = i + j; 
        }
    }
    
    for (i = 0; i < LINHA; i++) {
        for (j = 0; j < COLUNA; j++) {
            printf("%p ", (int *)&pMatriz[i][j]);
        }
        printf("\n");
    }
}

void usandoCalloc(int **pMatriz){
    int i, j;

    for(i = 0; i < LINHA; i++){
        pMatriz[i] = (int *)calloc(COLUNA, sizeof(int));

        if (pMatriz[i] == NULL)
            return;
    }

    for (i = 0; i < LINHA; i++) {
        for (j = 0; j < COLUNA; j++) {
            pMatriz[i][j] = i + j; 
        }
    }

    for (i = 0; i < LINHA; i++) {
        for (j = 0; j < COLUNA; j++) {
            printf("%p ", (int *)&pMatriz[i][j]);
        }
        printf("\n");
    }
}

int main (void) {
    int **pMatriz;
    int i, j;

    pMatriz = (int **)malloc(LINHA * sizeof(int *));
    if (pMatriz == NULL)
        return 1;

    printf("\n");
    printf("\t Endereco do ponteiro --> %p \n\n", (void *)&pMatriz);

    // Chamando as funções
    printf("\n\t MALLOC\n");
    usandoMalloc(pMatriz);
    printf("\n\n");
    printf("\n\t CALLOC\n");
    usandoCalloc(pMatriz);
    
    printf("\n\n");

    // Liberando espaço
    for (i = 0; i < LINHA; i++) {
        free(pMatriz[i]);
    }
    free(pMatriz);

    return 0;
}
