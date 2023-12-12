// A sequência dá-se inicialmente por dois números 1. 
// A partir do terceiro elemento usa-se a expressão: elementon = elementon-1 + elementon-2. 
// Exemplo de sequência: 1, 1, 2, 3, 5, 8. Construa um algoritmo que imprima na tela os n primeiros elementos da sequência de Fibonacci, onde n é informado pelo usuário. 
// 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89 --> 11 Primeiros Numeros

#include <stdio.h>

int main (void){
    int input_N; // O n primeiros numeros
    int i = 1; // o numero em si

    printf("Informe N: ");
    scanf("%d", &input_N);

    for (i; i <= input_N; i++){

        int termoAtual = 1;
        int termoAnterior = termoAtual - 1;
        int termoSeguinte = termoAtual + 1;
        // if (i < 1) {
        //     i == 1;
        // }
        
        //termoSeguinte = i + termoAnterior;
        printf("%d\n", termoSeguinte);

        termoSeguinte = termoAtual + termoAnterior;
        termoAtual = termoSeguinte;
        termoAnterior = termoAtual;


    }

    return 0; 
}