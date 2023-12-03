#include <stdio.h> 

// Escreva uma função que recebe, por parâmetro, dois valores X e Z e calcula e retorna Xz . (sem utilizar funções ou operadores de potência prontos) 

void calcularPot (int in_x, int in_z, int *out){
    int i;
    *out = 1;

    for (i = 1; i <= in_z; i++){
        *out *= in_x;
        printf("Out: %d, i: %d e X: %d\n", *out, i, in_x);
    }

}

int main (void){
    int in_num, in_x, in_y, out_out;

    printf("X: ");
    scanf("%d", &in_x);

    printf("y: ");
    scanf("%d", &in_y);

    calcularPot(in_x, in_y , &out_out);

    printf("\t\t%d", out_out);


    return 0;
}