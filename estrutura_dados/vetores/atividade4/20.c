#include <stdio.h>
// Faça um procedimento que receba, por parâmetro, um vetor K(15) e retorna, também por parâmetro, um vetor P contendo apenas os valores primos de K. 
#define tam 15

void verPrimos(int arrayIn[], int arrayOut[]){
    int contadorDivisores = 0;
    int i, j;

    for (i=0; i < tam; i++){ // Loop do Array
        contadorDivisores = 0;
        for (j=1; j <= arrayIn[i]; j++){ // Loop para ver divisores
            if (arrayIn[i] % j == 0){
                contadorDivisores++;
            }
        }
        if ((contadorDivisores == 2)){
            arrayOut[i] = arrayIn[i];
            // printf("%d", arrayOut[i]);
        } else 
            arrayOut[i] = 0;
    }
}

int main (void){

    int i;

    int vetorK[tam] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    //! Expected Result = 3, 7, 11, 13

    int vetorPrimos[tam];

    verPrimos(vetorK, vetorPrimos);

    for (i=0; i < tam;i++){
        if (vetorPrimos[i] != 0)
            printf("%d\n", vetorPrimos[i]);
    }

    return 0;
}