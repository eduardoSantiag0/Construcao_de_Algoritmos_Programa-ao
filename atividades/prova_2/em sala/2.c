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

    // Resultado = {7, 9, 13}

    int vetor [COLUNA] = {};

    int i, j;

    for (j = 0 ; j < COLUNA ; j++){
        for (i = 0 ; i < LINHA ; i++){
            vetor[j] += matriz[i][j];
        }
    }

    for ( i = 0; i < COLUNA  ; i++){
        printf(" %d ", vetor[i]);
    }

    return 0;
}