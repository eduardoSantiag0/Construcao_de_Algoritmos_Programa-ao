#include <stdio.h>

// 25. Escreva uma função que recebe por parâmetro um valor inteiro e positivo N e retorna o valor de S. 

// S = 2/4 + 5/5 + 10/6 + 17/7 + 26/8 + ... +(n2+1)/(n+3)

// float soma (int num){
//     float 
// }

int main (void){
    float in_num;

    printf("Informe Numero: ");
    scanf("%f", &in_num);

    float out = recursive(in_num);

    printf("Valor de S: %f", out);

    return 0;
}