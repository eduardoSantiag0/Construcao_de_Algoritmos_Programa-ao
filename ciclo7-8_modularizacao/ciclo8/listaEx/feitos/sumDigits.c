#include <stdio.h>


int DigitSum(int n1)
{
    printf("O N1: %d\n", n1);
    printf("L N1 mod 10: %d\n", n1 % 10); //Módulo pega o último digito 
    printf("I N1 / 10: %d\n", n1/10); // Tira a ultima casa para a recursão
    printf("-------\n");

    if(n1 == 0) // Caso base
        return 0;
    // 456
         
    return ((n1 % 10) + DigitSum(n1 / 10));
}


int main (void){
    int in_num;

    printf("Num: ");
    scanf("%d", &in_num);

    if (in_num < 10){
        printf("O numero %d soh tem um digito", in_num);
    } else {
        int out = DigitSum(in_num);
        printf("Soma eh %d", out);
    }


    return 0; 
}