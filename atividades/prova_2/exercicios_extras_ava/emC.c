#include <stdio.h>
#include <stdlib.h>
# define LINHA 3
#define COL 3 
int main (void)
{
    int i, j;

    int **ptrMatriz = malloc (LINHA * sizeof (int *));
    if (ptrMatriz == NULL){
        return 1;
    }

    for (i = 0; i < LINHA ; i++){
        ptrMatriz[i] = malloc(COL * sizeof(int *));
        if (ptrMatriz == NULL)
            return 1;
    }

    for (i = 0; i < LINHA; i++){
        for (j = 0; j < COL; j++){
            ptrMatriz[i][j] = i + 1;
        }
    }

    for (i = 0; i < LINHA; i++){
        for (j = 0; j < COL; j++){
            printf("%d ", ptrMatriz[i][j]);
        }
        printf("\n");
    }


    return 0;
}