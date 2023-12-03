#include <stdio.h>

int main (void){

    float peso, altura;
    // int altura;
    char genero;

    printf("Qual seu genero? ");
    scanf(" %c", &genero);        

    printf("Qual sua altura? ");
    scanf(" %f", &altura);
    
    
    if (genero == 'H' || genero == 'h'){
        peso = (72.7 * altura) - 58;
        printf ("Seu peso ideal eh: %.2f\n", peso);


    } else if (genero == 'M' || genero == 'm'){
        peso = (62.1 * altura) - 44.7;
        printf ("Seu peso ideal: %.2f\n", peso);

    } else {
         printf ("Genero nao binario");
     }

    return 0;
}