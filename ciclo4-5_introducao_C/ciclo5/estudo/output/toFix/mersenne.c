#include <stdio.h>
#include <math.h>

int main (void){

    int output, inputMersenne, i;

    int inicial = 2;

    printf("Quantos primos de Mersenne voce deseja ver?  ");
    scanf("%d", &inputMersenne);


    for (i = 1; i <= inputMersenne; i++){
        output = pow (inicial, i) - 1; 
        printf ("%d\n", output);
    }

    

    return 0;
}