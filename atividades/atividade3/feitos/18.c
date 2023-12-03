#include <stdio.h>
// Faça uma função que receba um valor inteiro e positivo e calcula o seu fatorial.

int fat (int num){
    return (num == 1) ? 1 : num * fat (num-1);
}

int main (void){
    int in_num;

    printf("Informe: ");
    scanf("%d", &in_num);

    int out = fat(in_num);

    printf("\t%d", out);

    return 0;
}