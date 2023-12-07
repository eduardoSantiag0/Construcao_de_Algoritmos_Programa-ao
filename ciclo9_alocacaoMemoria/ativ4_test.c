#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int linhas = 3;
    int colunas = 3;

    // Alocação dinâmica usando malloc
    int **matriz_dinamica_malloc = (int **)malloc(linhas * sizeof(int *));
    for (int i = 0; i < linhas; i++) {
        matriz_dinamica_malloc[i] = (int *)malloc(colunas * sizeof(int));
    }

    printf("Endereços dos elementos na matriz alocada dinamicamente usando malloc:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%p ", (void *)&matriz_dinamica_malloc[i][j]);
        }
        printf("\n");
    }

    // Liberação de memória alocada dinamicamente usando malloc
    for (int i = 0; i < linhas; i++) {
        free(matriz_dinamica_malloc[i]);
    }
    free(matriz_dinamica_malloc);

    // Alocação dinâmica usando calloc
    int **matriz_dinamica_calloc = (int **)calloc(linhas, sizeof(int *));
    for (int i = 0; i < linhas; i++) {
        matriz_dinamica_calloc[i] = (int *)calloc(colunas, sizeof(int));
    }

    printf("\nEndereços dos elementos na matriz alocada dinamicamente usando calloc:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%p ", (void *)&matriz_dinamica_calloc[i][j]);
        }
        printf("\n");
    }

    // Liberação de memória alocada dinamicamente usando calloc
    for (int i = 0; i < linhas; i++) {
        free(matriz_dinamica_calloc[i]);
    }
    free(matriz_dinamica_calloc);

    return 0;
}
