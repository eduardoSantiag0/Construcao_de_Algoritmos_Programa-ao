#include <stdio.h>


// O item deve ser buscado no vetor e, caso encontrado, deve ser removido. 
// A remoção tem que ser feita pela cópia do último elemento do vetor sobre o item e o vetor deve ser reduzido de uma unidade, desconsiderando a última posição. Caso o item não seja localizado, o vetor apenas deve permanecer inalterado.

//todo Passar o último valor para a posição do item a ser removido
//todo Diminuir o tamanho do vetor

void remova_item (int vet[], int *tamanho , int item){
    int i;

    for (i = 0; i < *tamanho; i++){
        if (vet[i] == item){
            vet[i] = vet[*tamanho - 1];
            (*tamanho)--;
        }
    }

}


int main (void){

    int vetor[6] = {8, 5, 9, 3, 4, 11};
    int tamanho = 6;

    remova_item(vetor, &tamanho, 11);
    
    int i;
    for (i = 0; i < 5; i++){
        printf("%d ", vetor[i]);

    }


    return 0;
}