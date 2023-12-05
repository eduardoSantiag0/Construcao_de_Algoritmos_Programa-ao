#include <stdio.h>
#include <conio.h>

int main (void)
{

    int valor = 27;
    int *ptr;
    ptr = &valor;
    // *ptr = 60000; // Alterando o valor no endereço dda variável

    printf("Variavel Conteudo: %d\n", valor);
    printf("\tVariavel Endereco: %d\n", &valor);
    printf("Ponteiro: %d\n", ptr);
    printf("Endereco Ponteiro: %d\n", &ptr);
    printf("Derefer %d\n", *ptr); // Derefer

    printf("\n");
    printf("\n");

    int v2 = 500;
    ptr = &v2;

    printf("Variavel Conteudo: %d\n", v2);
    printf("\tVariavel Endereco: %d\n", &v2);
    printf("Ponteiro: %d\n", ptr);
    printf("Endereco Ponteiro: %d\n", &ptr);
    printf("Derefer %d\n", *ptr); // Derefer

    int v3 = 1000;
    ptr = &v3;


    printf("\n");
    printf("\n");


    printf("Variavel Conteudo: %d\n", v3);
    printf("\tVariavel Endereco: %d\n", &v3);
    printf("Ponteiro: %d\n", ptr);
    printf("Endereco Ponteiro: %d\n", &ptr);
    printf("Derefer %d\n", *ptr); // Derefer

    return 0;
}