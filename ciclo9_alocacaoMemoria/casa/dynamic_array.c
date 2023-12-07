#include <stdio.h>
#include <stdlib.h>

#define size 5

int main (void)
{
    int *ptr;

    ptr = (int*)malloc(size * sizeof(int));

    if (ptr == NULL)
        return 1;
    

    return 0;
}