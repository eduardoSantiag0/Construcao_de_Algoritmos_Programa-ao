#include <stdio.h>
#define ROWS 4

void sumMatrix(int matrix1[ROWS][ROWS], int matrix2[ROWS][ROWS], int matrix3[ROWS][ROWS]) {
    int i, j;
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < ROWS; j++) {
            matrix3[i][j] = matrix1[i][j] * matrix2[i][j];
        }
    }
}

void printaMatrix(int matrix[ROWS][ROWS])
{
    int i, j;

    for (i=0; i < ROWS;i++){
        for (j=0; j<ROWS; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main (void)
{
    int i, j; 

    int matrix1[ROWS][ROWS] = {
        3, 3, 3, 3,
        3, 3, 3, 3,
        3, 3, 3, 3,
        3, 3, 3, 3
    };


    int matrix2[ROWS][ROWS] = {
        2, 2, 2, 2,
        2, 2, 2, 2,
        2, 2, 2, 2,
        2, 2, 2, 2
    };

    int matrix3[ROWS][ROWS];

    sumMatrix(matrix1, matrix2, matrix3);
    printaMatrix(matrix3);
    

    return 0;
}