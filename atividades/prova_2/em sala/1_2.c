#include <stdio.h>
#include <stdlib.h>

// 1. Faça uma função em C que receba uma matriz e devolva um vetor em que cada elemento corresponde à soma de uma linha da matriz. Por exemplo, para a matriz a seguir, a função deve retornar o vetor [8, 9, 2, 10].
#define LINHA 4
#define COLUNA 3

void somaLinhas(int matriz[LINHA][COLUNA], int out[LINHA]){
    int i, j;
    matriz[0][0] = 3;
    for ( i = 0; i < LINHA; i++){
        for ( j = 0; j < COLUNA; j++)
            out[i] += matriz[i][j];
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


    // Resultado = [ 8, 9, 2, 10]


    int somados[LINHA] = {};

    somaLinhas(matriz, somados);


    int i;
    // for (i = 0; i < LINHA; i++){
    //     printf(" %d ", somados[i]);
    // }
    
    int j;
    for (i=0;i<LINHA;i++){
        for (j=0;j<COLUNA;j++){
            printf(" %d", matriz[i][j]);
        }
        printf("\n");

    }
    
    return 0;
}