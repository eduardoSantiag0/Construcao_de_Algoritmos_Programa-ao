#include <stdio.h>
#include <stdlib.h>

// Faça um programa que leia um valor SIZE e crie dinamicamente um vetor de SIZE elementos e passe esse vetor para uma função que vai ler os elementos desse vetor. 
// Depois, no programa principal, o vetor preenchido deve ser impresso. 
// Além disso, antes de finalizar o programa, deve-se liberar a área de memória alocada.

#define SIZE 5

void fillArray (int *p){
    int i;
    for (i = 0; i < SIZE; i++){
        p[i] = i + 10;;
    } 
}

int main (void)
{

    int *pVetor = malloc(SIZE * sizeof (int));

    fillArray(pVetor);
    int i;
    for (i = 0; i < SIZE; i++)
    {
        printf("%d em %d \n", pVetor[i], &pVetor[i]);
    }
    

    return 0;
}