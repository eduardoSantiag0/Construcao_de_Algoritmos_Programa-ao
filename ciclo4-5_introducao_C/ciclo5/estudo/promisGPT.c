#include <stdio.h>

int main(void) {
    int inputNumber, contadorPrimos, divisores;

    printf("Quantos numeros primos voce deseja ver? --> ");
    scanf("%d", &inputNumber);

    contadorPrimos = 0;

    int numeroAtual = 2; // Começamos com o primeiro número primo

    while (contadorPrimos < inputNumber) {
        divisores = 0;

        for (int j = 1; j <= numeroAtual; j++) {
            if (numeroAtual % j == 0) {
                divisores++;
            }
        }

        if (divisores == 2) {
            printf("%d ", numeroAtual);
            contadorPrimos++;
        }

        numeroAtual++; // Verificamos o próximo número
    }

    printf("\n");
    return 0;
}
