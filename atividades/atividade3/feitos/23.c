#include <stdio.h>

// Escreva uma função que recebe por parâmetro um valor inteiro e positivo N e retorna o valor de S. 

// S = 1 + ½ + 1/3 + ¼ + 1/5 + 1/N.

int fatorial (num){
    return (num == 0) ? 1 : num * fatorial(num-1);
}

float calcS(int num){
    int i;

    float out_S = 1.0;

    for (i = 1; i <= num ; i++){
        out_S += 1.0/fatorial(i);
        printf("%.3f\n", out_S);
    }
    return out_S;

}

int main (void){
    int in_num;

    printf("Numero: ");
    scanf("%d", &in_num);

    float out = calcS(in_num);

    printf("\t%.3f\n", out);

    return 0;

}