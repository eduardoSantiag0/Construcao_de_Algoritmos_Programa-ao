#include <stdio.h>
#include <stdlib.h>

// Faça um programa que leia números do teclado e os armazene em um vetor alocado dinamicamente. O usuário irá digitar uma sequência de números, sem limite de quantidade. 
// Os números serão digitados um a um e, sendo que caso ele deseje encerrar a entrada de dados, ele irá digitar o número ZERO. Os dados devem ser armazenados na memória deste modo:


// - Inicie com um vetor de tamanho 10 alocado dinamicamente;
// - Caso o vetor alocado esteja cheio, aloque um novo vetor do tamanho do vetor anterior adicionado espaço para mais 10 valores (tamanho N+10, onde N inicia com 10)

int main (void)
{
    int i,j,inNumero;
    int *ptrInput = NULL;

    int tamanho = 0;

    do {
        printf("Digite um numero: ");
        scanf("%d", &inNumero);
        if (inNumero != 0){
            tamanho++;
            ptrInput = realloc (ptrInput, tamanho * sizeof(int));
            if (ptrInput == NULL)
                return 1;
            ptrInput[tamanho - 1] = inNumero;
        }
    } while (inNumero != 0);

    for (i = 0; i < tamanho; i++){
        printf("%d -", ptrInput[i]);
        printf(" %d", &ptrInput[i]);
        printf("\n");
    }

    free (ptrInput);
    return 0;
}