#include <stdio.h>
#include <math.h>

int main (void){

    float inputRaio, outputVolume;

    printf ("Qual o raio da esfera? ");
    scanf ("%f", &inputRaio);

    outputVolume = (4.0/3.0)*(M_PI*(inputRaio*inputRaio*inputRaio));
    printf ("-----> %f", outputVolume);

    return 0;
}