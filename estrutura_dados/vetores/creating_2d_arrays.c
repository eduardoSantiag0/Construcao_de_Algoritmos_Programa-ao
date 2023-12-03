#include <stdio.h>

#define rows 4
#define colunas 4


int main (void){

    int i, j, l;
    int numbers[rows][colunas];
    int var = 2;

    for (i = 0; i < rows; i++){ // Linha
        for (j=0; j < colunas; j++){ // Coluna
            //scanf("%d", &numbers[i][j]);
            numbers[i][j] = var;
        }
    var += 2;

    }

    
    printf("Matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < colunas; j++) {
            printf("%d ", numbers[i][j]);
        }
        printf("\n");
    }

    return 0;
}