#include <stdio.h>
// Faça uma função que recebe um vetor X(20) de reais , por parâmetro, e retorna a soma dos elementos de X. 
#define tam 20

int somaArray(int vetor[], int size){
    int i;
    int soma = 0;
    for (i = 0; i < size; i++){
        soma += vetor[i];
    }

    return soma;
}

int main (void)
{
    // int vetorX[tam];

    int vetorX [tam] = {1, 1, 1, 1, 1, 
    1, 1, 1, 1, 1, 
    1, 1, 1, 1, 1, 
    1, 1, 1, 1, 1};

    int tamanho = sizeof(vetorX) / sizeof(vetorX[0]);

    int out = somaArray(vetorX, tamanho);

    printf("%d\n", out);


    return 0;
}
