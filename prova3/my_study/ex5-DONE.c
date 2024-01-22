#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define TAM 3

// Extend the employee database program to include a sorting function that sorts the employees based on their salaries. Test the sorting function with a sample array of structs.

typedef struct employee
{
    char nome[50];
    float salario;
} Empregado;

void sort_salary (Empregado pessoa[TAM]) {
    int i, j;
    Empregado temp;

    for (i = 0; i < TAM ; i++) {
        for (j = 0; j < TAM ; j++) {
            if (pessoa[j].salario < pessoa[j+1].salario) {
                temp = pessoa[j];
                pessoa[j] = pessoa[j + 1];
                pessoa[j + 1] = temp;
            }
        }
    }

}



int main (void)
{

    Empregado pessoa[TAM];

    strcpy(pessoa[0].nome, "Cesar");
    pessoa[0].salario = 7.44;

    strcpy(pessoa[1].nome, "Ramos");
    pessoa[1].salario = 4.22;

    strcpy(pessoa[2].nome, "Menor dos Tigres");
    pessoa[2].salario = 110.22;

    // Print the original array
    int i;
    printf("Original array:\n");
    for (i = 0; i < TAM; i++) {
        printf("Nome: %s, Salario: %.2f\n", pessoa[i].nome, pessoa[i].salario);
    }

    // Sort the array based on salaries
    sort_salary(pessoa);

    // Print the sorted array
    printf("\nSorted array based on salary:\n");
    for (i = 0; i < TAM; i++) {
        printf("Nome: %s, Salario: %.2f\n", pessoa[i].nome, pessoa[i].salario);
    }

    return 0;
}