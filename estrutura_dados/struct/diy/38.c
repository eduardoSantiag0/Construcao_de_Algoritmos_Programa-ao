// Faça uma função que receba, por parâmetro, uma matriz A(8,8) e retorne o menor valor dos elementos acima da diagonal secundária. 
#include <stdio.h>

#define tam 8

int procurar (int matrix [tam][tam]){
    int i, j;
    int out = matrix[0][tam - 1];

    for (i=0; i<tam;i++){
        for (j=0;j<tam;j++){
            if ((i + j) < (tam - 1)){ //! (i + j) < (tam - 1)
                if (matrix[i][j] < out)
                    out = matrix[i][j];
            }
        }
    }

    return out;
}

int main (void)
{
    int matrix[tam][tam] = {
        {12, 12, 12, 12, 12, 12, 12, 2},
        {1, 12, 12, 12, 12, 12, 12, 2},
        {12, 12, 12, 12, 12, 12, 1, 2},
        {12, 12, 12, 12, 12, 12, 12, 2},
        {12, 12, 12, 12, 12, 12, 12, 2},
        {12, 12, 12, 12, 12, 12, 12, 2},
        {12, 12, 12, 12, 12, 12, 12, 2},
        {12, 12, 12, 12, 12, 12, 12, 2},
    };

    int menor = procurar(matrix);

    printf("%d", menor);

    return 0;
}