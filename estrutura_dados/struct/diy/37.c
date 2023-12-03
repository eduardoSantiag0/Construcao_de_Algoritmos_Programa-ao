#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// . Na teoria dos sistemas, define-se como elemento minimax de uma matriz 
// o menor elemento de uma linha onde se encontra o maior elemento da matriz. 
// Faça uma função que recebe, por parâmetro, uma matriz A(10,10) e retorna o seu elemento minimax, juntamente com a sua posição.
#define tam 10

void encontrarMMiniMax (int matrix[tam][tam], int *elemMin, int *linha, int *coluna){
    int i, j, posMinimaxLinha, posMinimaxColuna;
    int maiorElemento = matrix[0][0];
    int menor_da_Linha = 1000;
    int posMinimax = 0;
    int posMaiorElem = 0;

    for (i=0; i < tam; i++){
        for (j = 0; j < tam; j++){
            if (matrix[i][j] > maiorElemento) {
                maiorElemento = matrix[i][j]; // Achei o maior numero da matrix;
                posMaiorElem = i;
            }
        }
    }

    for (j = 0; j < tam; j++){
        if (matrix[posMaiorElem][j] < menor_da_Linha){
            menor_da_Linha = matrix[posMaiorElem][j];
            *linha  = posMaiorElem;
            *coluna = j;
        }
    }

    *elemMin = menor_da_Linha;
}


int main (void){
    int i, j;
    srand(time(NULL)); // Seed the random number generator with current time
    int matrix[tam][tam] = {
        {1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15, 16, 17, 18, 19, 20},
        {21, 22, 23, 24, 25, 26, 27, 28, 29, 30},
        {31, 32, 33, 34, 35, 36, 37, 38, 39, 40},
        {41, 42, 43, 44, 45, 46, 47, 48, 49, 50},
        {51, 52, 53, 54, 55, 56, 57, 58, 59, 60},
        {61, 62, 63, 64, 65, 66, 67, 68, 69, 70},
        {71, 72, 73, 74, 75, 76, 77, 78, 79, 80},
        {81, 82, 83, 84, 85, 86, 87, 88, 89, 90},
        {91, 92, 93, 94, 95, 96, 97, 98, 99, 100}
    };

    // int matrix[tam][tam];
    // for (i=0; i < 10; i++){
    //     for (j = 0; j < 10; j++){
    //         matrix[i][j] = rand() % 400; 
    //     }
    // }

    int out_MiniMax, out_posMiniMaxLinha, out_posMiniMaxColuna;

    encontrarMMiniMax(matrix, &out_MiniMax, &out_posMiniMaxLinha, &out_posMiniMaxColuna);


    //Imprimindo Matrix
    for (i=0; i < 10; i++){
        for (j = 0; j < 10; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    printf("\t\t Posicao Minimax Linha: %d", out_posMiniMaxLinha );
    printf("\t\t Posicao Minimax Coluna: %d", out_posMiniMaxColuna );
    printf("\t\t Elemento Minimax: %d", out_MiniMax);


    return 0;
}