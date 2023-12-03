#include <stdio.h>
#include <math.h>

int main (void){
    int inputDigits;
    
    printf ("Me de um numero com 3 digitos? ");
    scanf("%d", &inputDigits);

    int centena = inputDigits /  100;
    int dezena = (inputDigits - (centena * 100)) / 10;
    int unit = inputDigits - ((centena * 100) + (dezena * 10));

    int comparacao = (pow (centena, 3)) + (pow (dezena, 3)) + (pow (unit, 3));

    printf("centena %d\n", centena);
    printf("dezena %d\n", dezena);
    printf("unit %d\n", unit);
    printf("%d\n", comparacao);
    printf("%d\n", inputDigits);

    if (comparacao == inputDigits){
        printf("---> ARMSTRONG <---", inputDigits);
    } else{
        printf("Eh nada");
    }

}