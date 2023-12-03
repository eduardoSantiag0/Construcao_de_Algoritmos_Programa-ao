#include <stdio.h>
// Faça uma função que recebe por parâmetro um valor inteiro e positivo e retorna o valor lógico Verdadeiro caso o valor seja primo e Falso em caso contrário.

int verifyPrime(int num){

    int contadorDivisores = 0;
    int i;

    // Ter exatamente dois divisores
    for (i = 2; i < num / 2; i++){
        if (num % i == 0){
            return 0;
        }
    }
    return 1;
}

int main (void){
    int in_num;

    printf("Numero: ");
    scanf("%d", &in_num);

    int out = verifyPrime(in_num);

    if (out == 1)
        printf("\tEh Primo, bb");
    else 
        printf("\tNao, mona");

    return 0;
}