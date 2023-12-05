#include <stdio.h>
// Faça um procedimento que recebe, por parâmetro, um vetor A(50) de reais e retorna-o ordenado em ordem crescente. 
#define tam 50

// void crescente(int array[tam]){
//     int tempArray[tam];
//     int i;

//     for (i = tam - 1; i >= 0; i--) {
//         array[i] = tempArray[i];
//     }
// }

void crescente(int vetor[]) {
    int i, j;
    float temp;

    for (i = 0; i < tam - 1; i++) {
        for (j = 0; j < tam - i - 1; j++) {
            while (vetor[j] > vetor[j + 1]){
                temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;

            }
        }
    }
}

int main (void)
{
    int vetor[tam];

    int i;
    for (i = tam - 1; i >= 0; i--){
        vetor[i] = i;
    }

    crescente(vetor);

    for (i = 0; i < tam; i++) {
        printf("%d ", vetor[i]);
    }


    return 0;
}