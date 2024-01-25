#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// Define a struct named Employee with attributes: id (integer), name (string), and salary (float). Write a program that reads employee details from a file named "employees.txt", stores them in an array of structs, and then writes the details of employees with a salary greater than 50000 to a new file named "high_salaries.txt".


typedef struct 
{
    int id;
    char name [50];
    float salary;
} Empregado;


#define TAM 10

int main (void) 
{
    FILE *file, *file_high_salary;
    int escolha, i;
    printf("1 - Add Funcionario\n");
    printf("2 - Atualizar arquivo com maiores salarios\n");
    scanf("%d", &escolha);

    if (escolha == 1) {
        file = fopen ("employees.txt", "a");
        if (file == NULL) return 1;
        // fprintf("")
        Empregado pessoa;
        printf("Insira os dados: \n");
        printf("ID: \n");
        scanf("%d", &pessoa.id);
        printf("Nome: \n");
        scanf("%s", pessoa.name);
        printf("Salario: \n");
        scanf("%f", &pessoa.salary);
        fprintf(file, "%d, %s, %.4f\n", pessoa.id, pessoa.name, pessoa.salary);

        fclose (file);
    } else if (escolha == 2) {
        file = fopen ("employees.txt", "r");
        file_high_salary = fopen ("employees_high_salary.txt", "w");

        if (file == NULL) return 1;
        if (file_high_salary == NULL) return 1;

        Empregado *pessoa = malloc (sizeof (Empregado) * TAM);
        // fscanf(arquivo, formato, &dados);
        for (i = 0; i < TAM ; i++) {
            fscanf(file, "%d, %s, %f\n", &pessoa[i].id, pessoa[i].name, &pessoa[i].salary);
            if (pessoa[i].salary > 50000) { 
                fprintf(file_high_salary, "%d, %s, %.4f\n", pessoa[i].id, pessoa[i].name, pessoa[i].salary);
                printf("Adicionado!\n");
            }
        }
        fclose (file);
        fclose (file_high_salary);
        free(pessoa);

    } else {
        printf("Nenhuma opcao foi selecionada, Fechando sistema\n");
    }
    return 0;
}