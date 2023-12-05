#include <stdio.h>
// Faça uma função que receba, por parâmetro, uma matriz A(8,8) e retorne o menor valor dos elementos acima da diagonal secundária. 
#define tam 8

int acharMenor (int vetor[tam][tam]){
    int i, j;

    int out = vetor[0][tam-1];
    for (i=0;i<tam;i++){
        for (j=0;j<tam;j++){
            if ((i + j > tam - 1) && (out > vetor[i][j])){
                out = vetor[i][j];
                printf("Linha: %d\n", i);
                printf("Coluna: %d\n", j);
            }
        }

    }


    return out;
}

int main (void)
{
    int matrix [tam][tam] = {
        2, 2, 3, 4, 5, 6, 7, 2, 
        2, 2, 3, 4, 5, 6, 2, 8, 
        2, 2, 3, 4, 5, 2, 7, 8, 
        2, 2, 3, 4, 2, 6, 7, 8, 
        2, 2, 3, 2, 5, 6, 7, 8, 
        2, 2, 2, 4, 5, 6, 7, 8, 
        2, 2, 3, 4, 5, 6, 7, 8, 
        2, 1, 3, 4, 5, 6, 7, 8 
    };

    int out = acharMenor(matrix);

    printf("%d", out);

    return 0;
}