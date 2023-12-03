#include <stdio.h>

int main (void){
    int inputPrimeirosNumeros, i, contDivisores, j;

    printf("Informe N:  ");
    scanf("%d", &inputPrimeirosNumeros);

    if (inputPrimeirosNumeros >= 1){
        printf ("1\n");
    }

    if (inputPrimeirosNumeros >= 2){
        printf ("2\n");
    }

    if (inputPrimeirosNumeros >= 3){
        printf ("3\n");
    }

    int contPrimos = 3;
    
    for (j = 4; contPrimos < inputPrimeirosNumeros; j++){ // Loop de inteiros
        contDivisores = 0;
        for (i = 1; i <= j; i++) { // Loop para achar divisores
            if (j % i == 0){
                contDivisores++; // Encontra um numero primo
            }
        }
        if (contDivisores == 2) { // Verifica quem é primo
            contPrimos++; // Incrementa quando achar um primo
            printf("Posicao: %d ---> Primo: %d\n", contPrimos, j);
        } 
    }
    return 0;
}