#include <stdio.h>
#include <stdlib.h>

// Em algumas situações, é interessante que o comportamento da função seja dependente de outra função que pode ser passada por parâmetro (ou seja, não é sempre a mesma função).

// Quando você for criar um ponteiro para função, deverá indicar qual é o tipo de retorno, qual é o nome do ponteiro e qual é a lista de tipos dos parâmetros.

// Placeholder de uma função

float soma(float a, float b){

     return a+b;

}



float dif_abs(float a, float b){

    if (a > b)

       return a-b;

    else

       return b-a;

}
int main(void) {

    float primeiro, segundo;

    char operacao;

    float (*p)(float, float); // Ponteiro para função

    printf("Programa que calcula a soma ou diferença absoluta entre 2 valores.");

    printf("Por favor, informe os valores que estão envolvidos na operação:");

    scanf("%f", &primeiro);

    scanf("%f", &segundo);

    fflush(stdin);

    printf("Escolha a operação desejada: + ou -");

    scanf("%c",&operacao);

    if (operacao=='+')

        p = soma;

    else

        p = dif_abs;

   // a função p aqui pode estar apontando para uma das duas funções

   printf("O resultado é %f\n",p(primeiro, segundo));  

    return 0;

}

