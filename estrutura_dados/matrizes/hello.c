#include <stdio.h>
#include <stdlib.h>

int somaLinha(int M[10][12], int L){
    int j, soma;
    soma = 0;
    for (j=0; j<12; j++) 
        soma+= M[L][j]; //! Trava a linha
    return soma;
}

int somaColuna(int M[10][12], int C){
    int i, soma;
    soma = 0;
    for (i=0; i<10; i++) 
        soma+= M[i][C]; //! Trava a Coluna 
    return soma;
}

int main() {
    int i, j;
    int matriz[10][12];

    for (i = 0; i < 10; i++)
        for (j = 0; j < 12; j++) 
            matriz[i][j] = i;

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 12; j++) {  // Fixed the condition here
            printf("%d ", matriz[i][j]); 
        }
        printf("\n");
    }

    printf("\tSoma da linha 2 = %d\n", somaLinha(matriz, 7));
    printf("\tSoma da coluna 1 = %d\n", somaColuna(matriz, 1));

    return 0;
}
