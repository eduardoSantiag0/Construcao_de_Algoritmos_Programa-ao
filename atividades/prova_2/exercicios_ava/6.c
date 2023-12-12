#include <stdio.h>
#include <stdlib.h>
// 6. Faça uma função em C que zera os primeiros K elementos da matriz. Os elementos da matriz devem ser contados linha por linha a começar da primeira linha.  Veja o exemplo a seguir:
#define LINHA 4
#define COLUNA 3

void zerarElementos(int matriz[LINHA][COLUNA], int num){
    int i, j;
    int contador = 0;

    for ( i = 0 ; i < LINHA; i++){
        for ( j = 0 ; j < COLUNA; j++){
            if (contador < num)
                matriz[i][j] = 0;
            contador++;
        }
    }    


}

int main (void)
{
    int kElementos = 5;
    int matriz[LINHA][COLUNA] = {
        1, 4, 3, 
        2, 2, 5, 
        1, 1, 0, 
        3, 2, 5
    };

    zerarElementos (matriz, kElementos);

    int i, j;
    for ( i = 0 ; i < LINHA; i++){
        for ( j = 0 ; j < COLUNA; j++){
            printf(" %d ", matriz[i][j]);
        }
        printf("\n");
    }


    return 0;
}