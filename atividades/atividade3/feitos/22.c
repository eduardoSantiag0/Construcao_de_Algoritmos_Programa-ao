#include <stdio.h> 

// Escreva uma função que recebe, por parâmetro, um valor inteiro e positivo e retorna o somatório desse valor.

int somar(num){
    int i;
    int out = 0;
    
    for (i = 1; i <= num; i++)
        out += i;

    return out;
}

int main (void){
    int numero, i, out;

    printf("Digite um numero para calcular a tabuada: ");
    scanf("%d", &numero);

    int scanner = somar(numero);
    printf("O somatorio do numeor %d --> %d", numero, scanner);

    return 0;
}