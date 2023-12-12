#include <stdio.h>

#define LINHAS 3
#define COLUNAS 3

int main() {
    int matrizA[LINHAS][COLUNAS] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int matrizB[LINHAS][COLUNAS] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    int resultado[LINHAS][COLUNAS];

    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            // Verificando paridade dos elementos
            if (matrizA[i][j] % 2 == 0) { // Par
                if (matrizB[i][j] % 2 == 0) { // Par
                    resultado[i][j] = matrizA[i][j] + matrizB[i][j]; // Soma
                } else { // Ímpar
                    resultado[i][j] = matrizA[i][j] * matrizB[i][j]; // Multiplicação
                }
            } else { // Ímpar
                if (matrizB[i][j] % 2 == 0) { // Par
                    if (matrizB[i][j] != 0) {
                        resultado[i][j] = matrizA[i][j] / matrizB[i][j]; // Divisão
                    } else {
                        resultado[i][j] = 100; // Divisão por zero
                    }
                } else { // Ímpar
                    resultado[i][j] = matrizA[i][j] - matrizB[i][j]; // Subtração
                }
            }
        }
    }

    // Exibindo a matriz resultante
    printf("Matriz Resultante:\n");
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            printf("%d\t", resultado[i][j]);
        }
        printf("\n");
    }

    return 0;
}
