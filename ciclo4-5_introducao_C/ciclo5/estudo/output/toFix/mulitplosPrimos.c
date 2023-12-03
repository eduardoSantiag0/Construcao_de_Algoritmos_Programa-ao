// Faça um programa em C para mostrar os 30 primeiros números primos.
#include <stdio.h>


int main (void ) {
    int inNumero, contador, i;

    printf("Qual a sequenccia de numeros primos que voce deseja ver? ");
    scanf("%d", &inNumero);

    if (inNumero > 1){
        printf(1);
    }

    if (inNumero > 2){
        printf(2);
    }

    if (inNumero > 3){
        printf(3);
    }   

    contador = 0;

    for (i = 3; i <= inNumero; i++){
        //* Contar o número de divisores
        if (inNumero % i == 0){
            contador++;
        }
        //* Se for igual a 2, imprimir
        if (contador == 2){
            printf ("%d\n", i);
        }
    }

    return 0;
}