#include <stdio.h>


// Faça um procedimento que recebe, por parâmetro, um valor N e calcula e escreve a taboada de 1 até N. Mostre a tabuada na forma:

void fazerTaboada(int num, int mult, int *out){
    // printf("out = %d \n", *out);
    // printf("num = %d \n", num);
    // printf("mult = %d \n", mult);
    *out = num * mult;

    // printf("out = %d \n", *out);
    // printf("\t ----- \n");
}

int main (void){

    int numero, i, out;

    printf("Digite um numero para calcular a tabuada: ");
    scanf("%d", &numero);


    for (i = 1; i <= numero; i++){
        fazerTaboada(numero, i, &out);
        printf ("\t\t\t %d x %d --> %d\n", i, numero, out);
    }

    return 0;
}