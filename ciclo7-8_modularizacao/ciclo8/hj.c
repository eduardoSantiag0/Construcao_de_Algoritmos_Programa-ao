#include <stdio.h>


void troca (int *x, int *y){
    int temp;

    temp = *x;
    *x = *y;
    *y = temp;

}

int main (void){
    int a, b;

    a = 5;
    b = 10;
    printf("\tA: %d\n", a);
    printf("\tB: %d\n", b);
    printf("\t^\n");
    printf("\t|\n");
    printf("\t|\n");
    printf("\n\tTROCAR\n\n");
    printf("\t|\n");
    printf("\t|\n");
    printf("\tV\n");

    troca(&a, &b);

    printf("\tA: %d\n", a);
    printf("\tB: %d\n", b);

    return 0;
}