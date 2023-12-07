#include <stdio.h>
#include <stdlib.h>

#define col 4
#define row 4

int main (void)
{

    int **ptr;
    int i, j;

    ptr = (int **) malloc(row * sizeof(int*));
    if (ptr == NULL)
        return 1;

    for (i = 0; i < row; i++){
        ptr[i] = (int *)malloc(col * sizeof(int)); // Reservando espaço para cada coluna;
        if (ptr == NULL)
            return 1;
    }


    // Populate the array with some values for demonstration purposes
    int count = 0;
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            ptr[i][j] = count++; // Assigning values for demonstration
        }
    }

    // Print the array content
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            printf("%d ", ptr[i][j]);
        }
        printf("\n");
    }

    // Free the allocated memory
    for (i = 0; i < row; i++) {
        free(ptr[i]);
    }
    free(ptr);

    return 0;
}