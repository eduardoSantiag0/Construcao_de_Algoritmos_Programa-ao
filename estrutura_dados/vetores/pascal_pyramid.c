#include <stdio.h>
#define in_altura 5

int main(void) {
    int i, j;

    // int in_altura;
    // printf("Altura: ");
    // scanf("%d", &in_altura);


    int matrix[in_altura][in_altura];

    for (i = 0; i < in_altura; i++) { // Rows
        matrix[i][0] = 1;
        for (j = 1; j < i; j++) { // Columns
                //matrix[i][j] = i + j;
                matrix[i][j] = matrix[i-1][j-1] + matrix[i-1][j];
            }
            
        matrix[i][i] = 1;
    }


    printf("\tMatrix elements:\n");
    for (i = 0; i < in_altura; i++) { // Rows
        for (j = 0; j <= i; j++) { // Columns (printing until j <= i)
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}



