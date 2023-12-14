#include <stdio.h>
#include <stdlib.h>


#define LINHA 4
#define COLUNA 3

int main (void)
{

    int matriz[LINHA][COLUNA] = {
        1, 4, 3, 
        2, 2, 5, 
        1, 1, 0, 
        3, 2, 5,
    };

    // Resultado = {8, 9, 2, 10}

    int vetor [LINHA] = {};

    int i, j;

    for (i = 0; i < LINHA; i++){
        for (j = 0; j < COLUNA; j++){
            vetor[i] += matriz[i][j];
        }
    }

    for ( i = 0; i < LINHA ; i++){
        printf(" %d ", vetor[i]);
    }

    return 0;
}