#include <stdio.h>

int main (void){
    int i, input_Numero;

    printf("Qual fatorial voce deseja? ");
    scanf("%d", &input_Numero);

    int fat = 1;

    for (i=1; i <=input_Numero; i++){
        fat*=i;
        printf("Posicao %d --> %d\n", i, fat);

    }

    return 0; 



}