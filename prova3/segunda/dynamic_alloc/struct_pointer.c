#include <stdio.h>
#include <stdlib.h>

//// Criar um tipo abstrato de dados que represente uma pessoa, contendo nome, data de nascimento e CPF. 
// Aloque dinamicamente uma variável desse novo TAD (no programa principal). Depois crie uma função que receba este ponteiro e preencha os dados da estrutura.  

//// A seguir crie também uma uma função que receba este ponteiro e imprima os dados da estrutura. Finalmente, faça a chamada a esta função na função principal.

typedef struct 
{
    char nome [50];
    int idade;
    int CPF;
} Pessoa;


void preencher_struct  (Pessoa *person) {
    printf("Prencha Nome: \n");
    scanf("%s", person->nome);
    printf("Idade: \n");
    scanf("%d", &person->idade);
    printf("CPF: \n");
    scanf("%d", &person->CPF);
} 

void imprimir_struct (Pessoa *person) {
    printf("Imprimindo Pessoa\n");
    printf("%s\n", person->nome);
    printf("%d\n", person->idade);
    printf("%d\n", person->CPF);
} 

int main (void)
{
    Pessoa *ptr_person = malloc (sizeof(Pessoa)); 
    if (ptr_person == NULL) return 1;

    preencher_struct (ptr_person);

    imprimir_struct(ptr_person);

    free(ptr_person);


    return 0;
}