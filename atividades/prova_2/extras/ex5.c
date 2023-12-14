
#include <stdio.h>
#include <stdlib.h>

//// Faça um programa que pergunte ao usuário quantos valores ele deseja armazenar em um vetor de double
//// depois use a função MALLOC para reservar (alocar) o espaço de memória de acordo com o especificado pelo usuário.
//// Esse vetor deve ter um tamanho maior ou igual a 10 elementos. 
// Use este vetor dinâmico como um vetor comum, atribuindo aos 10 primeiros elementos do vetor valores aleatórios (usando a função rand) entre 0 e 100. 
// Exiba na tela os valores armazenados nos 10 primeiros elementos do vetor

int main (void)
{

    int inSIZE, i;

    printf("Quanto valores vai armazenar no vetor?  ");
    scanf("%d", &inSIZE);

    double *ptrVetor = (double *) malloc (inSIZE * sizeof(int));
    if (ptrVetor == NULL)
        return 1;

    printf("\n");;
    for (i = 0; i < inSIZE; i++){
        ptrVetor[i] = i * 20.0 + 1.0;
    }

    for (i = 0; i < 10; i++){
        printf("%.2lf \n", ptrVetor[i]);
    }

    free(ptrVetor);

    return 0;
}