#include <stdio.h>
#include <math.h>

int calcularHexagono (int input)
{
    return ((3*pow(input, 2))*sqrt(3) )/ 2;
}

int calcPerimetro (int input)
{
    return input * 6;
}

int main (void)
{
    int in_lado;

    in_lado = 20;

    int out_perimetro = calcPerimetro(in_lado);
    int out_Hexagono = calcularHexagono(in_lado);


    printf("%d\n", out_Hexagono);
    printf("%d\n", out_perimetro);




    return 0;
}