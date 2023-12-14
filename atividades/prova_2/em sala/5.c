#include <stdio.h>
#include <stdlib.h>

#define LINHA 4
#define COLUNA 3

int** mascara (int natural[LINHA][COLUNA], int binaria[LINHA][COLUNA]){

    int** ptrMatrizOut = (int **) malloc (LINHA * sizeof(int *)); //! Linha de Índices
    if (ptrMatrizOut == NULL)
        return;
    
    int i, j;


    for (i=0;i<LINHA;i++){
        ptrMatrizOut[i] = (int *) malloc (COLUNA * sizeof(int)); //! Alocação dos elementos horizontais
        if (ptrMatrizOut[i] == NULL)
            return;
    }
    

    for (i=0;i<LINHA;i++){
        for (j=0;j<COLUNA;j++){
            if (binaria[i][j] == 1)
                ptrMatrizOut[i][j] = natural[i][j];
            else
                ptrMatrizOut[i][j] = binaria[i][j];
        }

    }


    return ptrMatrizOut;
}

int main (void){

    int matrizNatural[LINHA][COLUNA] = {
        1, 4, 3, 
        2, 2, 5, 
        1, 1, 0,
        3, 2, 5 };

        
    int matrizBinaria[LINHA][COLUNA] = {
        1, 0, 0, 
        2, 1, 0, 
        0, 0, 1,
        1, 1, 1 };

    int i, j, contador = 0;

    int **matrizMascara;
    matrizMascara = mascara(matrizNatural, matrizBinaria);

    for (i = 0; i < LINHA; i++){
        for (j = 0; j < COLUNA; j++){
            printf(" %d ", matrizMascara[i][j]);
        }
        printf("\n");

    };


    return 0;
}