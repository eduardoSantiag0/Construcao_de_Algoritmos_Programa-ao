#include <stdio.h>
//  Faça uma função que recebe, por parâmetro, um valor inteiro e positivo e retorna o número de divisores desse valor.

int fazerTaboada (num, divisor){
    return (num % divisor == 0) ? divisor : 0;
}

int main (void){
    int numero, i, out;

    printf("Digite um numero para calcular a tabuada: ");
    scanf("%d", &numero);

    int divisor = 0;
    for (i = 1; i <= numero; i++){
        divisor = fazerTaboada(numero, i);
        if (divisor != 0)
            printf ("\t\t %d tem %d como divisor \n", numero, divisor);
    }

    return 0;

    return 0;
}