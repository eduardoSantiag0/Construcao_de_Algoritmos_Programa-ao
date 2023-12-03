#include <stdio.h>

int main (void){

    int inputAltura;

    printf("Qual sua altura? ");
    scanf ("%d", &inputAltura);

    if (inputAltura >= 135 && inputAltura <= 150){
        printf ("\nSalve!\n");
    }

    return 0; 
}