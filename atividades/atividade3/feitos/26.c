#include <stdio.h>
#include <math.h>
// Escreva uma função que calcule o valor do co-seno de x através de 20 termos da série seguinte:

// co-seno(x) = 1 - x2 + x4 - x6 + ....
// 2! 4! 6!

int fatorial (int num){
    return (num == 1) ? 1 : num * fatorial(num - 1);
}

float Taylor_exponential(float angulo, int contador) 
{
    int i;
    float resultado = 1;
 
    for (i = 2; i <= contador; i+=2) 
        resultado = 1 + angulo * resultado / i;    
    return resultado; 
} 


float seriesTaylor(int angulo, int contador){
    int i;
    int sinal = 1;
    float resultado = 1.0;
    float anguloRadians = angulo * 3.14159 / 180.0; // Convert degrees to radians
    
    for (i = 2; i <= contador; i += 2){
        resultado += sinal * (pow (angulo, i) / fatorial(i)); 
        sinal *= -1;
    }

    if (resultado < 0.0)
        resultado *= - 1;

    return resultado;
}


int main (void){

    int in_angulo, in_repeticoes;

    printf("Angulo: ");
    scanf("%d",  &in_angulo);

    printf("Repeticoes: ");
    scanf("%d",  &in_repeticoes);

    float out =  seriesTaylor(in_angulo, in_repeticoes);
    float certo =  Taylor_exponential(in_angulo, in_repeticoes);

    printf("\t %.2f\n ", out);
    printf("\t\t CERTO:   %.2f ", certo);

    return 0;
}