#include <stdio.h>
// Faça uma função que recebe, por parâmetro, uma matriz A(5,5) e retorna a soma dos elementos da sua diagonal principal e da sua diagonal secundária. 
#define tam 5

int somar (int matrix[tam][tam],int out[tam][tam] ){
    int i,j;
    int soma = 0;

    for (i = 0;i < tam; i++){
        int somador = 0;
        for (j = 0; j < tam; j++){
            soma += matrix[i][i];
            if(i == j){
                somador += matrix[i][j];
                soma+= matrix[i][j];
                out[i][j] = matrix[i][j] + matrix[i][tam - 1 - i];
            } else {
                out[i][j] = matrix[i][j];
            }
        }

        printf("\n");
    }

    for (i = 0; i < tam ; i++){
        soma += matrix[i][tam - 1 - i];
    }

    printf("\t%d\n", soma);

}

int main (void)
{
    int i, j;
    int matrixOut[tam][tam];

    int matrix[tam][tam] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20},
        {21, 22, 23, 24, 25}
    };

    somar(matrix, matrixOut);

    //Printando
    for (i = 0; i < tam; i++){
        for (j=0;j<tam;j++){
            printf("%d ", matrixOut[i][j]);
        }
        printf("\n");
    }




    return 0;
}