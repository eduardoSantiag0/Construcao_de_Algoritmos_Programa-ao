#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// 22. Faça um procedimento que receba, por parâmetro um vetor B(50) de reais e 
// calcula o maior valor do vetor. 
// A seguir, o procedimento deve dividir todos os elementos de B pelo maior encontrado. O vetor deve retornar alterado. 

#define LINHAS 25
#define COLUNAS 25 

void divisao_por_Maior(float array[]){
    int i; 
    float maior = array[0];

    for (i = 0; i < LINHAS; i++) {
        if (array[i] > maior)
            maior = array[i];
    }

    for (i = 0; i < LINHAS; i++) {
        array[i] = array[i] / maior;
    }

}

int main (void)
{
    float matriz[25];
    int i, j;

    srand(time(NULL));

    for (i = 0; i < LINHAS; i++) {
        matriz[i] = rand() % 60; 
    }


    for (i = 0; i < LINHAS; i++) {
        printf("%.2f ", matriz[i]);
    }

    printf("\n");

    divisao_por_Maior(matriz);

    printf("\t Matriz MODIFICADA:\n");
    for (i = 0; i < LINHAS; i++) {
        printf("%.2f ", matriz[i]);
    }

    return 0;
}