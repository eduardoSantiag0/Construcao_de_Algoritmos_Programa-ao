#include <stdio.h>
#include <stdlib.h>

// Deseja-se fazer uma operação envolvendo vetor e matriz. Se o número de elementos do vetor for igual ao número de linhas da matriz, então a operação poderá ser realizada e a função ou procedimento em C deverá retornar a multiplicação do elemento na posição k pelo elemento na linha k da matriz. Veja o exemplo:

#define LINHA 4
#define COL 3

int **multVetMat (int matriz[LINHA][COL], int vetor[LINHA]){

    int **ptrMatriz = (int **) malloc (LINHA * sizeof (int *));
    if (ptrMatriz == NULL)
        return;

    int i, j;
    for (i = 0; i < LINHA; i++){
        ptrMatriz[i] = (int *) malloc ( COL * sizeof(int));
        if (ptrMatriz[i] == NULL)
            return;
    }


    for(i = 0; i < LINHA; i++){
        for(j = 0; j < COL; j++){
            ptrMatriz[i][j] = matriz[i][j] * vetor[i];
        }

    }


    return ptrMatriz;
}

int main (void){
    int i, j;


    int matriz[LINHA][COL] = {
        1, 4, 3, 
        2, 2, 5, 
        1, 1, 0, 
        3, 2, 5, 
    };

    int vetor[LINHA] = {1, 2, 0, 5};

    int **ptrMatriz;
    ptrMatriz = multVetMat (matriz, vetor);


    for(i=0;i<LINHA;i++){
        for(j=0;j<COL;j++){
            printf("%d ", ptrMatriz[i][j]);
        }
        printf("\n");

    }

    return 0;
}