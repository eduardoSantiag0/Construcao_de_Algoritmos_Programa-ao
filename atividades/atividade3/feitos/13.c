#include <stdio.h>

// Faça um procedimento que recebe 3 valores inteiros por parâmetro e retorna-os ordenados em ordem crescente. 

void troca(int *a, int *b){
    int temp;
    if (*b > *a){
        temp = *a;
        *a = *b;
        *b = temp;
    }
}


void ordernar(int *num1, int *num2, int *num3) {
    troca(num1, num2);
    troca(num1, num3);
    troca(num2, num3);
}


int main (void){
    int num1, num2, num3;

    printf("1: ");
    scanf("%d", &num1);
    printf("2: ");
    scanf("%d", &num2);
    printf("3: ");
    scanf("%d", &num3);

    ordernar(&num1, &num2, &num3);

    printf("\tEm ordem decrescente: %d, %d, %d ", num1, num2, num3);

    return 0;
}