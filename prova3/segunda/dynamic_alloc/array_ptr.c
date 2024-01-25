#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//// Faça uma função que receba um valor n e crie dinamicamente um vetor de n elementos e retorne um ponteiro. 
//// Crie uma função que receba um ponteiro para um vetor e um valor n e imprima os n elementos desse vetor. 
//// Construa também uma função que receba um ponteiro para um vetor e libere esta área de memória. 
//// Ao final, crie uma função principal que leia um valor n e chame a função criada acima. 
//// Depois, a função principal deve ler os n elementos desse vetor. 
// Então, a função principal deve chamar a função de impressão dos n elementos do vetor criado e, finalmente, liberar a memória alocada através da função criada para liberação.   

int *fillArray (int *ptrArray, int size) {
    int i;
    srand(time(NULL));

    for (i = 0; i < size; i++) {
        ptrArray[i] = rand() % 20 + 1;
    }

    return ptrArray;
}

void printArray (int *ptr, int size) {
    int i;
    for (i = 0; i < size; i++) {
        printf("%d ", ptr[i]); //!!!
    }
    printf("\n");
}
void freeArray (int *ptr) {
    free(ptr); //!!!
}

int main (void)
{
    int in_size;
    printf("Size: ");
    scanf("%d", &in_size); //!!!

    int *ptr_array = malloc (sizeof (int) * in_size);
    if (ptr_array == NULL) return 1;

    ptr_array = fillArray(ptr_array, in_size); 
    printArray(ptr_array, in_size);
    freeArray(ptr_array);


    return 0;
}