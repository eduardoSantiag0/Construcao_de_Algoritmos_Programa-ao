#include <stdio.h>

//Write a C program to accept a coordinate point in an XY coordinate system and determine in which quadrant the coordinate point lies.

int main (void){
    int input_X, input_Y;

    printf("Informe X:  ");
    scanf("%d", &input_X);
    printf("Informe Y:  ");
    scanf("%d", &input_Y);

    if (input_X > 0 && input_Y > 0){
        printf("--> Primeiro Quadrante <--");
    } else if (input_X < 0 && input_Y < 0) {
        printf("Terceiro Quadrante");
    } else if(input_X < 0 && input_Y > 0){
        printf("Segundo Quadrante");
    } else {
        printf("Quarto Quadrante");
    }

    return 0;
}