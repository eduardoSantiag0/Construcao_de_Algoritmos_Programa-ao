#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// Create a file containing information about employees (name, age, salary) in a structured format. 
//todo Write a program to read the file, dynamically allocate memory for an array of structs to store employee data, and display the information.


typedef struct {
    char nome[20];
    int matricula;
    char cargo[20];
    float salario;
} FUNC;

void imprimir_pessoa (FUNC pessoa) {
    printf("Nome: %s", pessoa.nome);
    printf("Matricula: %d", pessoa.matricula);
    printf("Cargo: %s", pessoa.cargo);
    printf("Salario: %.2f", pessoa.salario);
}



int main (void)
{
    FILE *funcionario_arq;

    funcionario_arq = fopen("funcionarios.bin", "rb");
    if (funcionario_arq == NULL)
    {
        printf("Error ao abrir o arquivo");
        return 1;
    }


    FUNC *empregados = (FUNC *) malloc (4 * sizeof(FUNC));

    if (empregados == NULL)
    {
        printf("Malloc Error");
        fclose(funcionario_arq);
        return 1;
    }

    fread(empregados, sizeof (FUNC), 4, funcionario_arq);

    int i;
    for (i = 0; i < 4; i++) {
        imprimir_pessoa(empregados[i]);
        printf("\n");
    }

    free(empregados);
    fclose(funcionario_arq);

    return 0;
}