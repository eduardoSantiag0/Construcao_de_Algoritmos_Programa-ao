// Construa um programa em C que, dado o primeiro elemento e a razão de uma progressão aritmética (PA), imprima todos os n primeiros elementos da PA, onde n também é informado pelo usuário. Lembre-se que uma PA pode ser crescente ou decrescente.

#include <stdio.h>

int main (void){
    int razao, a1, n, an;

    printf ("Qual a razao: ");
    scanf ("%d", &razao);

    printf ("Qual o primeiro elemento: ");
    scanf ("%d", &a1);

    printf ("Qual a posicao enersimo termo: ");
    scanf ("%d", &n);

    an = a1 + ((n-1)*razao);
    
    printf("O enesimo termo da PA e: %d\n", an);

    return 0; 
}
