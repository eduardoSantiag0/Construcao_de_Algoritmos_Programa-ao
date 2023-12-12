#include <stdio.h>
#include <stdlib.h>
// Faça uma função em C que verifique se existe algum elemento nulo em uma matriz. Se existir, deve retornar true; caso contrário, deve retornar false.
#define LINHA 4
#define COLUNA 3 

int verificarNulos (int matriz[LINHA][COLUNA]){
    int i, j;

    for (i = 0; i < LINHA; i++){
        for (j = 0; j < LINHA; j++){
            if (matriz[i][j] == 0)
                return 1;
        }

    }

    return 0;

}


int main (void)
{

    int matriz[LINHA][COLUNA] = { 
        1, 4, 3, 
        2, 2, 5, 
        1, 1, 1, 
        3, 2, 5
    };

    int verify = verificarNulos(matriz);
    if (verify == 1)
        printf("Tem Nulo");
    else
        printf("Sem Nulo");
    
    return 0;
}