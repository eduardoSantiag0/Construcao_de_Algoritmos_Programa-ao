#include <stdio.h>
#include <stdlib.h>

#define n 10

int main (void)
{
    int *ptr, i;
    ptr = (int *) malloc(n * sizeof(int));

    if (ptr == NULL) {
        printf("Sem espaço para alocar memoria");
        return 1;
    }

    for (i = 0 ; i < n; i++) {
        ptr[i] = 1 + i;
    }


    for (i = 0; i < n; i++){
        printf(" %d ", ptr[i]);
    }

    printf("\n\t %d ", ptr[3]);

    free(ptr);

    return 0;
}