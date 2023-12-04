#include <stdio.h>
// Faça um procedimento que recebe, por parâmetro, 2 vetores de 10 elementos inteiros e que calcule e retorne, também por parâmetro, o vetor diferença dos dois primeiros. 
#define tam 10

void diferecaVetores (int array1[], int array2[], int arrayOut[]){
    int i;
    for (i=0; i < tam; i++){
        if (array1[i] > array2[i])
            arrayOut[i] = array1[i] - array2[i];
        else
            arrayOut[i] = array2[i] - array1[i];
    }
}

int main (void){

    int vetor1[tam] = { 5, 5, 5, 5, 5, 5, 5, 5, 5, 5};
    int vetor2[tam] = { 2, 34, 5, 2, 10, 22, 2, 2, 2, 2};
    int vetorDiff[tam];

    diferecaVetores(vetor1, vetor2, vetorDiff);

    int i;
    for (i=0; i < tam; i++){
        printf("%d\n", vetorDiff[i]);
    }    

}