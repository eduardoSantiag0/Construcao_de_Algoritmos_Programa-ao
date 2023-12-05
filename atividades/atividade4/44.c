#include <stdio.h>
// Faça uma função que receba, por parâmetro, uma matriz A(12,12) e retorna o produto dos elementos acima da diagonal principal e da diagonal secundária.
#define tam 4

int produtosPrincipal (int matrix[tam][tam])
{
    int out, i, j;

    out = 1;

    for (i=0;i<tam;i++){
        for (j=0;j<tam;j++){
            if (i == j){
                out *= matrix[i][j]; 
            }
        }
    }

    return out;
}
int produtosSecundaria (int matrix[tam][tam])
{
    int out, i, j;

    for (i=0;i<tam;i++){
        for (j=0;j<tam;j++){
            if (i + j < tam ){
                out *= matrix[i][j]; 
            }
        }
    }

    return out;
}

int main (void)
{
    int i,j;

    int matrix[tam][tam] = {
        1,2,3,4,
        1,2,3,4,
        1,2,3,4,
        1,2,3,4
    };

    int out_prodDiagonalPrincipal = produtosPrincipal(matrix);
    int out_prodDiagonalSecundaria = produtosSecundaria(matrix);



    for (i=0;i<tam;i++){
        for (j=0;j<tam;j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    printf("%d\n", out_prodDiagonalPrincipal);
    printf("%d\n", out_prodDiagonalSecundaria);



    return 0;
}