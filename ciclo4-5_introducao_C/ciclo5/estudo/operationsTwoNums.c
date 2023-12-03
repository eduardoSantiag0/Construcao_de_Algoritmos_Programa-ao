#include <stdio.h>

int main (void){
    int num1, num2, add, dif, prod, quot;

    printf("Fale o primeiro numero ->  ");
    scanf ("%d", &num1);
    printf("Fale o segundo numero ----->  ");
    scanf ("%d", &num2);

    add = num1 + num2;
    dif = num1 - num2;
    prod = num1 * num2;
    quot = num1 / num2;

    printf (" %d + %d = %d\n", num1, num2, add);
    printf (" %d - %d = %d\n", num1, num2, dif);
    printf (" %d * %d = %d\n", num1, num2, prod);
    printf (" %d / %d = %d\n", num1, num2, quot);

    return 0; 
}