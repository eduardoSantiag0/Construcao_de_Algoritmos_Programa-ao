// Faça um procedimento que recebe, por parâmetro, 2 vetores de 10 elementos inteiros e que calcule e retorne, também por parâmetro, o vetor união dos dois primeiros. 

#include <stdio.h>

#define tam 10

void uniao (int array1[], int array2[], int array3[])
{
    int i;
    for (i = 0; i <= tam ;i++){
        array3[i] = array1[i]  + array2[i];
    }
    
}

int main (void)
{
    int primeiroVetor[tam] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int segundoVetor[tam]= {2, 2, 2, 2, 2, 2, 2, 2, 2, 2};

    int out[tam];

    uniao(primeiroVetor, segundoVetor, out);

    int i;
    for (i=0; i < 10;i++){
        printf("%d --> %d\n", i+1, out[i]);
    }

    return 0;
}