#include <stdio.h>
#include <stdlib.h>

#define LINHA 5
#define COLUNA 5

//todo Fazer matrix virar um grande vetor;

void transformar(int matrix[LINHA][COLUNA]){
    int i;
    int **pMatrix = (int*)malloc((LINHA * COLUNA) * sizeof(int));   
    if (pMatrix == NULL)
        return;

    
    for (i=0;i<LINHA;i++){
        pMatrix[i] = &matrix[i*COLUNA];
    }

    for (i = 0;i < LINHA * COLUNA;i++){
        printf(" %d - ", pMatrix[i]);
    }

}

int main (void)
{

    int matrix[LINHA][COLUNA] = {
        1,2,3,4,5,
        1,2,3,4,5,
        1,2,3,4,5,
        1,2,3,4,5,
        1,2,3,4,5
    };

    // transformar(matrix);
    int i;

    //* Cria ponteiro para ponteiros
    int **pMatrix = (int **)malloc(LINHA * COLUNA * sizeof(int)); 
    if (pMatrix == NULL)
        return;

    for (i = 0;i < LINHA; i++){
        pMatrix[i] = (int *) malloc (COLUNA * sizeof (int));
        if (pMatrix == NULL)
            return 1;
    }

    
    int *q;
    
    // pMatrix = q;
    q = pMatrix;

    for (i=0;i<LINHA;i++){
        pMatrix[i] = &q[i*COLUNA]; //!
    }


    //*Imprime o resultado
    for (i = 0;i < LINHA * COLUNA;i++){
        printf(" %d ", pMatrix[i]);
    }


    return 0;
}