#include <stdio.h>

void leia_vetor_10(int vet[], int tamanho){
    int i;
    for(i = 0; i < tamanho; i++){
        // printf("Valor para v[%d]: ", i);
        scanf("%d", &vet[i]);
    }
}

int main (void){
    int i, vetor[10];

    leia_vetor_10(vetor, 10);
    for(i = 0; i < 10; i++){
        printf("v[%d]: %d\n", i, vetor[i]);
    }
    return 0;
}