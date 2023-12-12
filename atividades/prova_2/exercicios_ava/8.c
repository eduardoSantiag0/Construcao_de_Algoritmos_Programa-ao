#include <stdio.h>
#include <stdlib.h>
// Deseja-se fazer uma operação envolvendo vetor e matriz. 
// Se o número de elementos do vetor for igual ao número de linhas da matriz, então a operação poderá ser realizada e a função ou procedimento em C 
//todo deverá retornar a multiplicação do elemento na posição k pelo elemento na linha k da matriz. Veja o exemplo:
#define LINHA 4
#define COLUNA 3

void multiplicarVetor(int matriz[LINHA][COLUNA],int vetor[LINHA]){
    int i, j;
    for ( i = 0 ; i < LINHA; i++){
        for ( j = 0 ; j < COLUNA; j++){
            if (j == 0)
                matriz[i][j] *= vetor[i];
        }
    }
}

int main (void)
{
    int vetor[LINHA] = { 1, 2, 0, 5};
    int matriz[LINHA][COLUNA] = {
        1, 4, 3, 
        2, 2, 5, 
        1, 1, 0, 
        3, 2, 5
    };

    if (LINHA == LINHA){
        multiplicarVetor(matriz, vetor);
    }


    int i, j;
    for ( i = 0 ; i < LINHA; i++){
        for ( j = 0 ; j < COLUNA; j++){
            printf(" %d ", matriz[i][j]);
        }
        printf("\n");
    }


    return 0;
}