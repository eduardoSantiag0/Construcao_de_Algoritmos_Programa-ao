#include <stdio.h>

// Escreva uma função que recebe por parâmetro um valor inteiro e positivo N e retorna o valor de S. 

//Expecpted Output S = 2/4 + 5/5 + 10/6 + 17/7 + 26/8 + ... +(n2+1)/(n+3)


float calcular(numero){
    float out_S;
    int i, j;

    for (i = 5; i <= numero - 3; i+=2){ 
        out_S += (i*i+1) / (float) (i + 3);
    }
    return out_S;
}

int main (void){
    float in_eSSe;

    printf("Informe S: ");
    scanf("%d", &in_eSSe);

    float out = calcular(in_eSSe);

    printf("\t Resultado: %.3f", out);

    return 0;
}