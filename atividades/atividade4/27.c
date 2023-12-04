#include <stdio.h>
//  Faça uma função que recebe, por parâmetro, uma matriz A(6,6) e 
//  retorna a posição do menor elemento da sua diagonal secundária.
#define tam 6

int menorDaigonalSecundaria (int array [tam][tam]){
    int i, j, out = array[0][tam-1];
    for (i=0;i<tam;i++){
        for(j=0;j<tam;j++){
            if ( (i+j == tam-1) && (array[i][j] < out)){
                printf("Posicao i: %d e j: %d --> %d\n", i, j, array[i][j]);
                out = array[i][j];
            }

        }
    }

    return out;
}

int main (void)
{
    int matriz[tam][tam] = { 
        1,2,3,4,5,6,
        1,2,3,4,5,6,
        1,2,3,4,5,6,
        1,2,3,4,5,6,
        1,2,3,4,5,6,
        1,2,3,4,5,6,
    };

    int menor = menorDaigonalSecundaria (matriz);

    printf("\t%d", menor);

    return 0;
}