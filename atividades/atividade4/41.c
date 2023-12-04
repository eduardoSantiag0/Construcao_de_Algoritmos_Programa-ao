#include <stdio.h>
// Faça uma função que receba, por parâmetro, uma matriz A(7,7)e retorne o menor valor dos elementos ABAIXO da diagonal secundária. 
#define tam 7

int menorDaigonalSecundaria (int array [tam][tam]){
    int out, i, j;

    out = array[1][tam-1];
    printf("ALA -> %d\n", out);

    for (i=0;i<tam;i++){
        for(j=0;j<tam;j++){
            if ((i + j) > (tam - 1)){
                printf("Linha: %d e Coluna: %d --> %d\n", i+1, j+1, array[i][j]);
                if (array[i][j] < out){
                    out = array[i][j];
                }
            }
        }
    }

    return out;
}

int main (void)
{
    int matriz[7][7] = {
        1, 2, 3, 4, 5, 6, 7, // 1
        1, 2, 3, 4, 5, 6, 22, // 2
        1, 2, 3, 4, 5, 22, 22, // 3
        1, 2, 3, 4, 22, 22, 22, // 4
        1, 2, 3, 22, 22, 22, 22, // 5
        1, 2, 22, 22, 22, 22, 22, // 6
        1, 22, 22, 22, 22, 22, 3 // 7
    };

    int menor = menorDaigonalSecundaria (matriz);

    printf("\t%d", menor);

    return 0;
}