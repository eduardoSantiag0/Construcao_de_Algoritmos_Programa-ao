#include <stdio.h>
// Faça um procedimento que recebe, por parâmetro, 2 vetores de 10 elementos inteiros e que calcule e retorne, também por parâmetro, o vetor soma dos dois primeiros. 
#define tam 10

void somaVetores (int array1[], int array2[], int arrayOut[]){
    int i;
    for (i=0; i < tam; i++){
        arrayOut[i] = array1[i] + array2[i];
    }
}

int main (void){

    int vetor1[tam] = { 5, 5, 5, 5, 5, 5, 5, 5, 5, 5};
    int vetor2[tam] = { 2, 34, 5, 2, 10, 22, 2, 2, 2, 2};
    int vetorDiff[tam] = {};

    somaVetores(vetor1, vetor2, vetorDiff);

    int i;
    for (i=0; i < tam; i++){
        printf("%d - ", vetorDiff[i]);
    }    

    return 0;

}