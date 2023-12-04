#include <stdio.h>
// 5. Faça uma função que recebe, por parâmetro, uma matriz A(6,6) e retorna a soma dos elementos da sua diagonal principal e da sua diagonal secundária. 
#define tam 6

int somaDiagonais (int matrix [tam][tam]){
    int i , j;
    int soma = 0;
    //* Principal = Quando a coluna e a linha são iguais
    //* Secundária =  Tamanho da Matrix + 1

    for (i=0;i<tam;i++){
        for (j=0;j<tam;j++){
            if ( (i == j) || (i + j == tam - 1)){
                printf("%d ", matrix[i][j]);
                soma += matrix[i][j];

            }
        }
    }
    return soma;
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

    int out = somaDiagonais(matriz);

    printf("    Resul: %d ", out);
    // EXPECTED: 42


    return 0;
}