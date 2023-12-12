#include <stdio.h>
#include <stdlib.h>

//  Deseja-se fazer uma operação envolvendo 2 matrizes (A e B) de inteiros. 
// Para cada elemento na posição i,j da matriz A, deve-se verificar se ele é impar ou par. Se ele for par e se o correspondente elemento na matriz B também for par, então o resultado da operação para esses dois elementos deve ser a soma deles.  
//*A == Par, B == Par -> Soma

// Se o elemento i, j de A for par e o elemento de i, j de B for ímpar, deve-se multiplicar os valores. 
//* A == Par, B == Impar, A * B



// Se o elemento da posição i, j da matriz A for ímpar e o correspondente elemento i, j na matriz B também for ímpar, então deve-se subtrair o valor de A pelo valor de B. 
//* A == Impar, B == Impar, A - B

// Por fim, se o elemento i, j de A for ímpar e o respectivo elemento i, j de B for par, deve-se dividir o valor de A pelo de B. 
//* A == Impar, B == Par, A / B
//* Se B == 0, Resposta é valor 100;

// Atenção: não pode ocorrer divisão por zero! Então, se houver algum valor 0 que seria divisor, deve-se apresentar, como resposta, o valor 100. Todas as operações devem ser inteiras e a matriz resultante será composta por valores inteiros.

#define LINHA 3
#define COLUNA 3

void funMat (int matrizA[LINHA][COLUNA], int matrizB[LINHA][COLUNA], int matrizC[LINHA][COLUNA]){
    int i, j;

    for (i = 0 ; i < LINHA ; i++){
        for ( j = 0; j < LINHA; j++){
            if (matrizA[i][j] % 2 == 0){ // A é Par
                if (matrizB[i][j] % 2 == 0){ // B é Par
                    matrizC[i][j] = matrizA[i][j] + matrizB[i][j];
                } else { // B é Impar
                    matrizC[i][j] = matrizA[i][j] * matrizB[i][j];
                }
            } else { // A é Impar
                if (matrizB[i][j] % 2 == 0){ // B é Par
                    if (matrizB[i][j] == 0) // B é ZERO
                    {
                        matrizC[i][j] = 100;
                    } else { // B é Impar
                        matrizC[i][j] = matrizA[i][j] / matrizB[i][j];
                    }
                } else {
                    matrizC[i][j] = matrizA[i][j] - matrizB[i][j]; // B é Impar
                }

            }


        }

    }
}

int main (void)
{


    int i, j;

    int matrizA [LINHA][COLUNA] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    int matrizB[LINHA][COLUNA] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};


    int matrizC[LINHA][COLUNA] = {};

    funMat(matrizA, matrizB, matrizC);


    for (i = 0 ; i < LINHA ; i++){
        for ( j = 0; j < LINHA; j++){
            printf("%d\t", matrizC[i][j]);
        }
        printf("\n");

    }

    return 0;
}