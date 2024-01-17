#include <stdio.h>
#include <stdlib.h>

#define TAM 8
//todo Bubble Sort ou Quick Sort -> Função Crescente e Decrescente usando ponteiros

int trocar (int *a, int *b) {
    int aux = *a;
    *a = *b;
    *b = aux;
}

// Primeiro o valor guardado na primeira posição, chamado de pivô, será levado para a sua posição correta de forma que os elementos à esquerda são menores que o pivô e os elementos à direita são maiores que o pivô.

int quickSort (int vetor[]) {
    int i, j;
    int pivo = vetor[0];
    for (i = 0; i < TAM - 1; i++) {
        while (pivo > vetor[i]) {
            // trocar posição
        }
        pivo = vetor[i];
    }

}


int decrescente (int vetor[]) {
    int i, j;

    printf("Ordenando o vetor...\n");

    for (i = 0; i < TAM - 1; i++) {
        for (j = 0; j < TAM - i - 1; j++) {
            if (vetor[j] < vetor[j + 1]) {
                trocar(&vetor[j], &vetor[j + 1]);
            }
        }
    }
}




void crescente(int vetor[TAM]) {
    int i, j;

    printf("Ordenando o vetor...\n");

    for (i = 0; i < TAM - 1; i++) {
        for (j = 0; j < TAM - i - 1; j++) {
            if (vetor[j] > vetor[j + 1]) {
                trocar(&vetor[j], &vetor[j + 1]);
            }
        }
    }
}

int main (void) {

    // Defina o tamanho do vetor com malloc
    // Criar números aleatórios
    // Mostrar original 
    // Mostrar ordenado

    int vetor[TAM] = {37, 33, 48, 12, 92, 25, 86, 57};

    void (*p) (int[]);

    printf("Deseja ordenar: \n");
    printf("1 - Crescente\n");
    printf("2 - Quick Sort\n");
    printf("3 - Decrescente\n");
    int input_ordem;
    scanf("%d", &input_ordem);

    if (input_ordem == 1) 
        p = crescente;
    if (input_ordem == 2 ) 
        p = quickSort;
    else 
        p = decrescente;


    p(vetor);
    int i;
    for (i = 0; i < TAM ; i++) {
        printf("%d ", vetor[i]);
    }

    return 0;
}