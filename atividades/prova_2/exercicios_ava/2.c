#include <stdio.h>
#include <stdlib.h>
// 2. Faça uma função similar à do primeiro exercício em que seja recebida uma matriz e a devolução seja um vetor cujos elementos correspondem à soma das colunas. Para o mesmo exemplo do exercício anterior, a resposta deveria ser: [7, 9, 13]. 
#define LINHA 4
#define COLUNA 3

void somarColunas (int matriz[LINHA][COLUNA], int vetor[COLUNA]){
    int i, j;

    for ( i = 0; i < COLUNA; i++){
        for ( i = 0; i < LINHA; i++){
            vetor[j] += matriz[i][j];
        }

    }

}

int main (void)
{
    int matriz[LINHA][COLUNA] = { 
        1, 4, 3, 
        2, 2, 5, 
        1, 1, 0, 
        3, 2, 5
    };

    int vetorColuna[COLUNA] = {0};

    somarColunas (matriz, vetorColuna);

    int i;
    for (i = 0; i < COLUNA; i++){
        printf(" %d ", vetorColuna[i]);
    }

    return 0;
}