#include <stdio.h>

// 2) Faça um procedimento em C que retorne o quociente e o resto da divisão de um número inteiro A por outro inteiro B.


// Procedimento --> Return
int calcQuocient (int a, int b){
    return a / b;
}

int calcResto (int a, int b){
    return a % b;
}

int main (void)
{
    int in_num1, in_num2;

    printf("Num 1:");
    scanf("%d", &in_num1);
    printf("Num 2:");
    scanf("%d", &in_num2);

    int out1 = calcQuocient(in_num1, in_num2);
    int out2 = calcResto(in_num1, in_num2);
    
    printf("%d\n", out1);
    printf("%d\n", out2);


    return 0;
}