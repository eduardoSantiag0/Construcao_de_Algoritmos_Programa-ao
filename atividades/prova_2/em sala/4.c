#include <stdio.h>
#include <stdlib.h>

#define LINHA 4
#define COLUNA 3

int main (void){


    int matriz[LINHA][COLUNA] = {
        1, -4, 3, 
        -2, -2, 5, 
        1, 1, 0,
        3, 2, -5
    };

    int i, j, contador = 0;


    for (i = 0; i < LINHA; i++){
        for (j = 0; j < COLUNA; j++){
            if (matriz[i][j] < 0)
                contador ++;
        }

    }

    printf("Contador: %d", contador);


    return 0;
}