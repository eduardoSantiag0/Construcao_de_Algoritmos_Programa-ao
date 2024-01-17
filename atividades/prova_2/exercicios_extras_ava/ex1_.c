#include <stdio.h>



// Escreva um programa em C completo para ler um vetor de 10 elementos, todos com tipo base unsigned int.

// O programa também deve apresentar os dados do vetor em uma única linha, na ordem inversa `a de entrada.
// Para isso, o vetor deve ser precorrido do final para o começo, decrescendo o valor do índice.

// Os elementos devem separados por um espaço e a linha finalizada com '\n'

int main(void){

    unsigned int vetor[10];
    int i;
    for (int i = 0; i < 10; i++) {
        scanf("%u", &vetor[i]);
    }
    for (i = 9 ; i >= 0; i--){
        printf("%d ", vetor[i]);
        if (i == 0)
            printf("\n");
    }
    return 0;
}