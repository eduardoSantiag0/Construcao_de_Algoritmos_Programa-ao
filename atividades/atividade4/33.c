#include <stdio.h>
// . Faça um procedimento que receba uma matriz A(10,10), por parâmetro, e realize as seguintes trocas:

//todo     a linha 2 com a linha 8;
//todo     a coluna 4 com a coluna 10;
//todo     a diagonal principal com a secundária;
//todo     a linha 5 com a coluna 10;

// O procedimento deve retornar a matriz alterada. 
#define tam 10

void trocarLinhas(int matrix[tam][tam], int linha1, int linha2){
    for (int i = 0; i < tam; i++) {
        int temp = matrix[linha1][i];
        matrix[linha1][i] = matrix[linha2][i];
        matrix[linha2][i] = temp;
    }
}

void trocarColunas(int matrix[tam][tam], int coluna1, int coluna2){
    for (int i = 0; i < tam; i++) {
        int temp = matrix[i][coluna1];
        matrix[i][coluna1] = matrix[i][coluna2];
        matrix[i][coluna2] = temp;
    }
}

void trocarDiagonais(int matrix[tam][tam]){
    for (int i = 0; i < tam; i++) {
        int temp = matrix[i][i];
        matrix[i][i] = matrix[i][tam - 1 - i];
        matrix[i][tam - 1 - i] = temp;
    }
}

void alterarMatrix(int matrix[tam][tam]){
    // Trocar a linha 2 com a linha 8
    trocarLinhas(matrix, 1, 7); // Indices começam em 0, então linha 2 é 1 e linha 8 é 7

    // Trocar a coluna 4 com a coluna 10
    trocarColunas(matrix, 3, 9); // Coluna 4 é 3 e coluna 10 é 9

    // Trocar a diagonal principal com a secundária
    trocarDiagonais(matrix);

    // Trocar a linha 5 com a coluna 10
    trocarLinhas(matrix, 4, 9); // Linha 5 é 4, e coluna 10 é 9
}



int main (void)
{
    int i,j;
    int matrix[tam][tam] = {
        1,1,1,1,1,1,1,1,1,1,
        2,2,2,2,2,2,2,2,2,2,
        3,3,3,3,3,3,3,3,3,3,
        4,4,4,4,4,4,4,4,4,4,
        5,5,5,5,5,5,5,5,5,5,
        6,6,6,6,6,6,6,6,6,6,
        7,7,7,7,7,7,7,7,7,7,
        8,8,8,8,8,8,8,8,8,8,
        9,9,9,9,9,9,9,9,9,9,
        10,10,10,10,10,10,10,10,10,10
    };

    alterarMatrix(matrix);

    for (i=0;i<tam;i++){
        for (j=0;j<tam;j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}