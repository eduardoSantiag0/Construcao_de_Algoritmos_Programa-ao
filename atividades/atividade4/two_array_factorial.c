#include <stdio.h>


// Faça um procedimento que recebe 2 vetores A e B de tamanho 10 de inteiros, por parâmetro. 
// Ao final do procedimento B deve conter o fatorial de cada elemento de A. O vetor B deve retornar alterado.  

int fat(int num){
    return (num == 0) ? 1 : num * (fat(num - 1));
}

void fatorialReturn(int array1[10],int array2[10] ){
    for (int i = 0; i < 10; i++){
        array2[i] = fat(array1[i]);
    }
}

int main (void)
{

    int array1 [10] = {4, 1, 0, 3, 5, 6, 7, 8, 9, 10};

    int array2[10];

    fatorialReturn(array1, array2);

    printf("\tCOMECANDO\n");

    printf("Array 1:\n");
    for (int i = 0; i < 10; i++){
        printf("%d ", array1[i]);
    }
    printf("\n");

    printf("Array 2 (Factorials):\n");
    for (int i = 0; i < 10; i++){
        printf("%d ", array2[i]);
    }
    

    return 0;
}