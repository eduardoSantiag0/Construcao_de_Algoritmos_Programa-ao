#include <stdio.h>

int main (void){

    int inputPrimeiroAngulo, inputSegundoAngulo, outputTerceiroAngulo;

    printf("Me fala o primeiro angulo: ");
    scanf("%d", &inputPrimeiroAngulo);
    printf("Me fala o segundo angulo: ");
    scanf("%d", &inputSegundoAngulo);

    outputTerceiroAngulo = 180 - (inputPrimeiroAngulo + inputSegundoAngulo);

    printf("O terceiro angulo eh: %d\n", outputTerceiroAngulo);


    return 0; 
}