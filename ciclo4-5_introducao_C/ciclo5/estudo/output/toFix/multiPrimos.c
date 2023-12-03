#include <stdio.h>

int main(void) {
    int inNumero, contador, i, j;

    printf("Quantos números primos você deseja ver? ");
    scanf("%d", &inNumero);

    if (inNumero >= 1) {
        printf("2\n");
    }

    contador = 0;
    for (i = 3; i <= inNumero; i++) {
        int isPrime = 1; 

        int j = 2;
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                isPrime = 0;  // i is not prime
                break;
            }
        }

        if (isPrime) {
            printf("%d\n", i);
        }
    }

    return 0;
}
