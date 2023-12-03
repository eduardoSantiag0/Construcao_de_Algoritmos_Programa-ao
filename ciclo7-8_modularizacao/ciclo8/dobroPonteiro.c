#include <stdio.h>

// Passagem por referência

void dobro (int *x){
    *x += 1;
    *x *= 2;
}

int main (void){
    int a, b;

    a = 40;
    b = 20;

    printf("\tOriginal: %d\n\n", a);

    dobro(&a);

    printf("\tDobro: %d", a);

    return 0;
}