#include <stdio.h>

int main (void){
    int numero, rem1;

    printf("Qual o numero: \n");
    scanf ("%d", &numero);

    rem1 = numero % 2;

    if (rem1== 0) {
        printf("%d eh par\n", numero);
        // if (numero > 10){
        //     printf("\n Tambem eh maior que 10 :) ");
        // }
    } 
    
    else{
        printf("%d eh impar\n", numero);
    }
    return 0;
}