#include <stdio.h>
#include <stdlib.h>

int** somaMatrizes(int **matriz1, int **matriz2, int linha, int coluna){
    int i, j;

    int **resultante = malloc(linha * sizeof(int *));
    if (resultante == NULL)
        return NULL;

    for (i = 0; i < linha; i++) {
        resultante[i] = malloc(coluna * sizeof(int));
        if (resultante[i] == NULL) {
            for (int k = 0; k < i; k++)
                free(resultante[k]);
            free(resultante);
            return NULL;
        }
    }

    for (i = 0; i < linha; i++) {
        for (j = 0; j < coluna; j++) {
            resultante[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }

    return resultante;
}

int main(void) {
    int i, j, inputColuna, inputLinha;

    printf("Digite o número de linhas: ");
    scanf("%d", &inputLinha);
    printf("Digite o número de colunas: ");
    scanf("%d", &inputColuna);

    // Criando primeira matriz
    int **array1 = malloc(inputLinha * sizeof(int *));
    if (array1 == NULL)
        return 1;

    printf("Digite os elementos da primeira matriz:\n");
    for (i = 0; i < inputLinha; i++) {
        array1[i] = malloc(inputColuna * sizeof(int));
        if (array1[i] == NULL) {
            for (int k = 0; k < i; k++)
                free(array1[k]);
            free(array1);
            return 1;
        }
        for (j = 0; j < inputColuna; j++) {
            scanf("%d", &array1[i][j]);
        }
    }

    // Criando segunda matriz
    int **array2 = malloc(inputLinha * sizeof(int *));
    if (array2 == NULL)
        return 1;

    printf("Digite os elementos da segunda matriz:\n");
    for (i = 0; i < inputLinha; i++) {
        array2[i] = malloc(inputColuna * sizeof(int));
        if (array2[i] == NULL) {
            for (int k = 0; k < i; k++)
                free(array2[k]);
            free(array2);
            return 1;
        }
        for (j = 0; j < inputColuna; j++) {
            scanf("%d", &array2[i][j]);
        }
    }

    int **matrizResultante = somaMatrizes(array1, array2, inputLinha, inputColuna);

    if (matrizResultante == NULL) {
        printf("Erro ao somar as matrizes.\n");
        return 1;
    }

    printf("Matriz resultante da soma:\n");
    for (i = 0; i < inputLinha; i++) {
        for (j = 0; j < inputColuna; j++) {
            printf("%d ", matrizResultante[i][j]);
        }
        printf("\n");
    }

    // Liberando memória
    for (i = 0; i < inputLinha; i++) {
        free(array1[i]);
        free(array2[i]);
        free(matrizResultante[i]);
    }
    free(array1);
    free(array2);
    free(matrizResultante);

    return 0;
}
