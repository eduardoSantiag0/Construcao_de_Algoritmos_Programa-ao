#include <stdio.h>

int main (void){
    int numero, modulo;
    
    printf("Qual o numero: \n");
    scanf ("%d", &numero);

    modulo = numero % 2; 

    (numero < 18) ? printf("Hello") : printf("Good Evening");
    (modulo == 0) ? printf("\nPar") : printf("\nImpar");
 
    return 0;
}