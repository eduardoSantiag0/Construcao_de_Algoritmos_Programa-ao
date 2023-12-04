#include <stdio.h>

#define SIZE 5

// Função para calcular a soma das diagonais
int somaDiagonais(int matriz[SIZE][SIZE]) {
    int i, soma = 0;
    
    // Soma da diagonal principal (elementos matriz[i][i])
    for (i = 0; i < SIZE; i++) {
        soma += matriz[i][i];
    }
    
    // Soma da diagonal secundária (elementos matriz[i][SIZE - 1 - i])
    for (i = 0; i < SIZE; i++) {
        soma += matriz[i][SIZE - 1 - i];
    }
    
    return soma;
}

int main() {
    int matrix[SIZE][SIZE] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20},
        {21, 22, 23, 24, 25}
    };

    
    int resultado = somaDiagonais(matrix);
    
    printf("A soma das diagonais da matriz eh: %d\n", resultado);
    
    return 0;
}
