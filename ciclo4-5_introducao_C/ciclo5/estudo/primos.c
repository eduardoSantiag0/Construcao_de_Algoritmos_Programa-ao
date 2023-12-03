// Faça um programa em C para mostrar os N primeiros números primos;
#include <stdio.h>

int main (void) 
{
    int inputNumber, contadorPrimos, divisores;

    printf ("Quantos numeros primos voce dejesa ver? --> ");
    scanf("%d", &inputNumber);

    //* Loop para checar quais números são primos, ir até achar N primeiros primos
    //* Loop para achar se o número em questão tem exatamente 2 divisores

    contadorPrimos = 0;

    int numeroAtual = 2;

    while ( contadorPrimos < inputNumber ) {  
    divisores = 0;

        for (int j = 1; j <= numeroAtual; j++) { //* Loop para ver os divisores
            if (numeroAtual % j == 0){
                    divisores++; //* Contabilizar os divisores
                } 
            }
            
            if (divisores == 2){
                printf("%d ", numeroAtual);
                contadorPrimos++; 
            }
    
        numeroAtual++;
    }

    printf("\n");
    return 0;
}