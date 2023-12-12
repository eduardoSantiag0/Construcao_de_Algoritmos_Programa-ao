#include <stdio.h>
#include <stdlib.h>

//// Crie um programa que declare uma estrutura (registro) para o cadastro de alunos.
//// a) Deverão ser armazenados, para cada aluno: matrıcula, nome (apenas um) e ano de nascimento.
//// b) Ao início do programa, o usuário deverá informar o número de alunos que serão armazenados
//// c) O programa devera alocar dinamicamente a quantidade necessária de memória para armazenar os registros dos alunos.

// d) O programa deverá pedir ao usuário que entre com as informações dos alunos.
// e) Ao final, mostrar os dados armazenados e liberar a memória alocação

#define TAM 2

typedef struct {
    char nome[15];
    int ano_nascimento;
} Aluno;

int main (void)
{

    Aluno *pVetorStructs = (Aluno *) malloc(TAM * sizeof(Aluno)); // 1

    Aluno *pVetorStructs; // 2
    pVetorStructs = malloc(TAM*sizeof(Aluno));

    if (pVetorStructs == NULL) 
        return 1;

    printf("\tSerao armazenadoss %d alunos, nos espacos: %p \n", TAM, &pVetorStructs);

    int i, j;
    for (i = 0; i < TAM; i++){
        printf("Informe Ano de Nascimento de ");
        scanf("%d", &pVetorStructs[i].ano_nascimento);
    }


    for (i = 0; i < TAM; i++){
        printf("%d, armazenado em %p\n", pVetorStructs[i].ano_nascimento, pVetorStructs[i]);
    }

    free(pVetorStructs);


    return 0;
}