#include <stdio.h>

// O menor elemento do vetor deve ser colocado na primeira posição do vetor. 
// Para preservar o conteúdo da primeira posição, seu valor deve ser colocado na mesma posição onde o menor valor estava. Nenhum dos demais valores do vetor deve ser modificado.

#define tam 5

void desloque_menor(int vetor[tam], int tamanho){
    int i;
    int menorValor = vetor[0]; 
    int posicaoMenor = 0;
    for ( i = 0; i < tam ; i++){
        if (vetor[i] < menorValor){
            menorValor = vetor[i];
            posicaoMenor = i;

        }
    }

    int tempNumero;

    tempNumero = vetor[0];
    vetor[0] = menorValor;
    vetor[posicaoMenor] = tempNumero;

}


int main (void)
{
    int vetor[tam] = {10, 17, 5, 32, 8};

    desloque_menor( vetor, tam);
    int i;

    for (i = 0; i < tam ; i++){
        printf("%d ", vetor[i]);
    }

    return 0;

}