#include <stdio.h>
#include <stdlib.h>

// Implement a function that takes two integer pointers as arguments and swaps the values they point to. Test your function with a sample program.

void trocar (int *ptr1, int *ptr2) {
    int temp;

    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main (void)
{
    int x = 50;
    int y = 11;

    int *ptrMauro;
    ptrMauro = &x;
    int *ptrCesar;
    ptrCesar = &y;

    printf("Cesar: %d\n", *ptrCesar);
    printf("Mauro %d\n", *ptrMauro);

    trocar (ptrMauro, ptrCesar);

    printf("Cesar: %d\n", *ptrCesar);
    printf("Mauro %d\n", *ptrMauro);


    return 0;
}



