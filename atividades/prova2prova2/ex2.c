#include <stdio.h>
#include <stdlib.h>

// Exercicio feito por Eduardo Rosalin - 802539 e Eduardo Sanzovo Quaggio - 813641


// De cada habitante foram coletados os seguintes dados:
// sexo, cor dos olhos (azuis, verdes ou castanhos), cor dos cabelos (louros, pretos ou castanhos) e idade. 

// Faça um programa em C que utilize um procedimento que leia esses dados em um vetor de registro. 

// O vetor de registro deverá ser passado por referência entre o programa principal e o procedimento. 
// Depois de realizada a leitura, o programa principal deverá informar os dados da pessoa com maior idade (para simplificar, se existir mais de uma pessoa com a maior idade, você deverá imprimir os dados da primeira informação encontrada).

#define tam 4


typedef struct
{
    int idade;
    char cor_olho [20];
    char sexo[20];
    char cor_cabelo[20];

} Habitante;

void lerDados (Habitante *pessoa[tam][4]){
    int n, max;
    max = 0;
    n = 0;
    int coluna = 0;


    while (n <= tam) {
        printf("Insira os dados\n");
        scanf ("%c", &pessoa[n][coluna]->cor_cabelo);
        coluna++;
        scanf ("%c", &pessoa[n][coluna]->cor_olho);
        coluna++;
        scanf ("%c", &pessoa[n][coluna]->sexo);
        coluna++;
        scanf ("%d", &pessoa[n][coluna]->idade);
        coluna++;
        printf("N -> %d\n ", n);

        if (pessoa[n][3]->idade > max ){
            max = pessoa[n][3]->idade;
        }
        n += 1;
        coluna = 0;
    } 

    printf("Maior idade enccontrada na populacao: %d", max);
}

int main (void)
{
    Habitante *ptrVetor[tam][4];

    lerDados(ptrVetor);



    return 0;
}
