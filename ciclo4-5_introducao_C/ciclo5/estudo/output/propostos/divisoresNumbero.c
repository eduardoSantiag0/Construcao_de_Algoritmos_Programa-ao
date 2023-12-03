#include <stdio.h>

int main(void) {
    int inNumero;
    int i;

    printf("Escolha um numero: ");
    scanf("%d", &inNumero);

    printf("Divisores de %d: ", inNumero);
    ///int metade = inNumero/2;

    for (i = 1; i <= inNumero /2 ; i++) {
        if (inNumero % i == 0) {
            printf("%d \n", i);
        }
    }
    printf("%d", inNumero);
    return 0;
}