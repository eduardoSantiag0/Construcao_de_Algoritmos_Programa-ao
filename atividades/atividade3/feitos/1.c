#include <stdio.h>
// Faça uma função que recebe por parâmetro o raio de uma esfera e calcula o seu volume (v = 4/3.P .R3). 

#define PI 3.14159

float calcularEsfera (int num){
    return (4.0/3.0) * PI * (num * num * num);
}

int main (void){
    int in_raio;

    printf("Raio: ");
    scanf("%d" ,&in_raio);

    float outVolume = calcularEsfera(in_raio);

    printf("\tVolume da Esfera: %.3f", outVolume);

    return 0;
}