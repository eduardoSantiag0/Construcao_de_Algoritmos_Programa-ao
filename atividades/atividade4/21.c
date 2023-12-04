#include <stdio.h>

// Faça um procedimento que receba um vetor A(21) de inteiros e retorna esse mesmo vetor compactado, ou seja, sem os seus valores pares.
#define tam 21

void tirarPares(int array[]){
    int i;
    for (i=0; i < tam; i++)
    {
        if (array[i] % 2 == 0)
            array[i] = 0;
    }
}

int main (void)
{
    int vetorInteiro[21] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21};

    tirarPares(vetorInteiro);

    int i;
    for(i=0;i<tam;i++)
    {
        if (vetorInteiro[i] != 0)
            printf("%d, ", vetorInteiro[i]);
    }

    return 0;
}


