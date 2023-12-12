#include <stdio.h>
#include <stdlib.h>
// Faça uma função em C que recebe duas matrizes, sendo uma delas com valores zeros e uns e a outra com numeros naturais. 
// A resposta da função deverá ser o número natural caso naquela posição tenha o número 1 na matriz binária ou deverá ser zero se naquela posição na matriz binária tenha um zero. Veja o exemplo a seguir:
#define LINHA 4
#define COLUNA 3

void verMatriz(int natural[LINHA][COLUNA], int binaria[LINHA][COLUNA], int out[LINHA][COLUNA]){
    int i, j;
    for ( i = 0 ; i < LINHA; i++){
        for ( j = 0 ; j < COLUNA; j++){
            if (binaria[i][j] == 0)
                out[i][j] = binaria[i][j];
            else 
                out[i][j] = natural[i][j];
        }
    }
}

int main (void)
{

    int matrizNatural[LINHA][COLUNA] = {
        1, 4, 3,
        2, 2, 5, 
        1, 1, 0, 
        3, 2, 5
     };

    int matrizBinaria[LINHA][COLUNA] = {
        1, 0, 0, 
        0, 1, 0, 
        0, 0, 1, 
        1, 1, 1
     };

    int matrizOut[LINHA][COLUNA] = { };

    verMatriz(matrizNatural, matrizBinaria, matrizOut);

    int i, j;

    for ( i = 0 ; i < LINHA; i++){
        for ( j = 0 ; j < COLUNA; j++){
            printf(" %d ", matrizOut[i][j]);
        }
        printf("\n");
    }



    return 0;
}