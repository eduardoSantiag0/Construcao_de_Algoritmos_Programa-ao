#include <stdio.h>

/*

*/

int main (void){
    int imc;
    float peso, altura;

    printf("Qual seu peso? ");
    scanf("%f", &peso);

    printf("Qual sua altura? ");
    scanf("%f", &altura);

    imc = peso / (altura*altura);

    if (imc < 18.5){
        printf("Abaixo do peso");
    } 
    
    else if (imc >= 18.5 && imc < 25){
        printf("Peso normal");
    }
    
    
    else if (imc >= 25 && imc < 30){
        printf("Acima do peso"); 
    }

    else {
        printf("Obeso");
    }

    return 0;
}