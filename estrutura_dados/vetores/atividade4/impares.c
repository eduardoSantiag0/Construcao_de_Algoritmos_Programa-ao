#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
//? Faça um procedimento que recebe um vetor X de 30 elementos inteiros, por parâmetro, e retorna, também por parâmetro, dois vetores A e B. O vetor A deve conter os elementos pares de X e o vetor B, os elementos ímpares. 

#define tam 30

void addNumeros(int vetorIn[],int vetorPar[], int vetorImpar[]){
    int i;
    for (i=0; i<=30; i++){
        if (vetorIn[i] % 2 == 0){
            vetorPar[i] = vetorIn[i];
            vetorImpar[i] = 0;
        }

        else {
            vetorImpar[i] = vetorIn[i];
            vetorPar[i] = 0;
        }
    }
}

int main (void)
{
    int i;

    int vetorX[tam];

    // srand(time(NULL)); // Seed the random number generator

    // for (i = 0; i <=30; i++) {
    //     vetorX[i] = rand() % 100 + 1; // Generate random numbers between 0 and 99
    // }
    for (i = 1; i <= tam; i++) {
        vetorX[i] = i+1; // Generate random numbers between 0 and 99
    }


    int vetorPar[tam];
    int vetorImpar[tam];

    addNumeros(vetorX, vetorPar, vetorImpar);



    //* Imprimindo Vetores
    printf("ORIGINAL\n");
    for (i = 0; i <= sizeof(vetorImpar) / sizeof(vetorX[0]); i++) {
        printf("%d\n", vetorX[i]);
    }

    printf("\n");
    printf("\tPARES\n");
    for (i = 0; i <= sizeof(vetorImpar) / sizeof(vetorPar[0]); i++) {
        if (vetorPar[i] != 0)
            printf("%d ", vetorPar[i]);
    }


    printf("\n");
    printf("\tIMPARES\n");
    for (i = 0; i <= sizeof(vetorImpar) / sizeof(vetorImpar[0]); i++) {
        if (vetorImpar[i] != 0)
            printf("%d ", vetorImpar[i]);
    }

    return 0;
}