#include <stdio.h>
// 24. Escreva uma função que recebe por parâmetro um valor inteiro e positivo N e retorna o valor de S. 

//* S = 1 + 1/1! + ½! + 1/3! + 1 /N!


int fat(int n) {
    return (n == 0 ? 1 : n * fat(n - 1));
}

float calcularS(int num){
    int i;
    float out;
    out = 1;

    for (i = 1; i < num ; i++){
        out += 1.0 / fat(i);
    }

    return out;
    // int out_func_S = 1 + (1/fat(1)) + fat(1/2) + (1/fat(3)) + 1/fat(num);
    
    // return out_func_S;
}

int main (void){
    int in_N;

    printf("Informe N: ");
    scanf("%d", &in_N);

    float out_S = calcularS(in_N);

    printf("\tValor de S: %.3f", out_S);

    return 0;
}