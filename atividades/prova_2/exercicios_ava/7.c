#include <stdio.h>
#include <stdlib.h>
// Faça uma função ou procedimento em C que receba uma matriz de inteiros e retorne uma matriz resposta contendo valores 1, 0 e -1. 
// O valor 1 deverá ser colocado na posição em que a matriz original tinha um valor par; 
// -1 se no local havia um valor ímpar na matriz original; 
// 0 se na matriz original havia o valor 0.  Veja o exemplo a seguir:

#define LINHA 4
#define COLUNA 3


void procedimentoMatriz ( int matriz[LINHA][COLUNA]){
    int i, j;
    for ( i = 0 ; i < LINHA; i++){
        for ( j = 0 ; j < COLUNA; j++){
            if (matriz[i][j] % 2 == 0)
                matriz[i][j] = 1;
            else if (matriz[i][j] == 0)
                matriz[i][j] = 0;
            else
                matriz[i][j] = -1;
        }
    }
}


int main (void)
{
    int matriz[LINHA][COLUNA] = {
        1, 4, 3, 
        2, 2, 5, 
        1, 1, 0, 
        3, 2, 5
    };

    procedimentoMatriz (matriz);

    int i, j;
    for ( i = 0 ; i < LINHA; i++){
        for ( j = 0 ; j < COLUNA; j++){
            printf(" %d ", matriz[i][j]);
        }
        printf("\n");
    }


    return 0;
}