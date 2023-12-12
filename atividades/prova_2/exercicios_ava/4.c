#include <stdio.h>
#include <stdlib.h>

//Faça uma função em C que conte o total de elementos negativos em uma matriz. Veja o exemplo a seguir:

#define LINHA 4
#define COLUNA 3

int contadorNegativos (int matriz[LINHA][COLUNA]){
    int i, j;

    int contador = 0;
    for (i = 0; i <LINHA ; i++){
        for (j = 0; j < COLUNA; j++){
            if (matriz[i][j] < 0)
                contador += matriz[i][j];
        }
    }
        
    return contador;

}

int main (void)
{
    int matriz[LINHA][COLUNA] = {
        1, -4, 3, 
        -2, -2, 5,
        1, 1, 0,
        3, 2, -5
    };

    int out;

    out = contadorNegativos(matriz);

    printf("%d", out);


    return 0;
}