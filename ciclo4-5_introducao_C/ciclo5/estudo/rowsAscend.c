#include <stdio.h>

int main (void){
    int i, j, carryNum = 1; 
    int rows = 5;

    for (i = 1; i <= rows; i++){ //* Loop for rows
    
        for (j = 1; j <= i; j++){ //* Loop for items in each row
            printf("%d", carryNum++);
        } 
        printf("\n");
    }

    return 0;
}