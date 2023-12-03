#include <stdio.h> 
#include <math.h>

// 27. Escreva uma função que recebe, por parâmetro, dois valores X e Z e calcula e retorna Xz . (sem utilizar funções ou operadores de potência prontos) 

int calcular (int num1, int num2){
    int resultado = 1;
    int i;

    for (i = 0; i < num2; i++) {
        resultado *= num1;
    }

    if (num2 < 0)
    {
        return 1.0/resultado;
    } 
    else
    {
        return resultado;
    }
}


int main (void){
    int in_x, in_z;

    printf("Informe X: ");
    scanf("%d", &in_x);
    printf("Informe Z: ");
    scanf("%d", &in_z);

    int out = calcular(in_x, in_z);

    printf("\tValor de Xz: %d\n", out);


    int outro = pow (in_x, in_z);
    printf("Resposta Certa: %d", outro);

    return 0;
}