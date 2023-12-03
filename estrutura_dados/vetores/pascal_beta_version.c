#include <stdio.h>
#define in_altura 5

int main(void) {
    int i, j;
    int contador = 1;

    int matrix[in_altura][in_altura];

    for (i = 0; i < in_altura; i++) { // Rows
        for (j = 0; j <= contador; j++) { // Columns
            if (j == 0 || j == i) {
                matrix[i][j] = 1;
            } else {
                matrix[i][j] = matrix[i - 1][j - 1] + matrix[i - 1][j];
            }
        }
        contador++;
    }

    printf("\tMatrix elements:\n");
    for (i = 0; i < in_altura; i++) { // Rows
        for (j = 0; j <= i; j++) { // Columns up to i
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
