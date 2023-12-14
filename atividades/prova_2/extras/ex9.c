#include <stdio.h>
#include <stdlib.h>

void imprimirMatriz(int **ponteiroMatriz, int linha, int coluna) {
    int i, j;

    for (i = 0; i < linha; i++) {
        for (j = 0; j < coluna; j++) {
            printf("%d ", ponteiroMatriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int main(void) {
    int i, j, N, M;
    // N = Linha
    // M = Coluna
    printf("Informe N e M: ");
    scanf("%d %d", &N, &M);

    //* Criando matriz NxM
    int **ptrMatrix = (int **)malloc(N * sizeof(int *));
    if (ptrMatrix == NULL)
        return 1;

    for (i = 0; i < N; i++) {
        ptrMatrix[i] = (int *)malloc(M * sizeof(int));
        if (ptrMatrix[i] == NULL)
            return 1;
    }

    //* Filling Matrix
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            if (i == j )
                ptrMatrix[i][j] = 2;
            else
                ptrMatrix[i][j] = 0;
        }
    }

    //* Criando matriz transposta MxN
    int **ptrTransposta = (int **)malloc(M * sizeof(int *));
    if (ptrTransposta == NULL)
        return 1;

    for (i = 0; i < M; i++) {
        ptrTransposta[i] = (int *)malloc(N * sizeof(int));
        if (ptrTransposta[i] == NULL)
            return 1;
    }

    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            ptrTransposta[i][j] = ptrMatrix[j][i];
        }
    }

    imprimirMatriz(ptrMatrix, N, M);
    imprimirMatriz(ptrTransposta, M, N);

    // Freeing allocated memory
    for (i = 0; i < N; i++) {
        free(ptrMatrix[i]);
    }
    free(ptrMatrix);

    for (i = 0; i < M; i++) {
        free(ptrTransposta[i]);
    }
    free(ptrTransposta);

    return 0;
}
