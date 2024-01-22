#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Read the employee data from the file into an array of structs. 
// add new employee data dynamically.
// Extend the sorting function to sort the employees based on age. 
// Write the updated employee information to the file, keeping the existing data intact
// Write the sorted data back to the file.

typedef struct {
    char nome[50];
    int idade;
} Aumigos;

void sort_aumigos (FILE *file,  Aumigos *miaumigos, int contador) {
    int i, j;
}


void ver_aumigos (FILE *file,  Aumigos *miaumigos, int contador) {
    printf("Imprimindo nomes\n");
    int i;
    
    for (i = 0; i < contador; i++) { //! Arrumar tamanho;
        // fscanf(arquivo, formato, &dados);
        fscanf(file, "%s-%d\n", miaumigos[i].nome, &miaumigos[i].idade);
        printf("Nome do Aumigo: %s, Idade: %d\n",  miaumigos[i].nome, miaumigos[i].idade);
    }

}
void add_aumigo (FILE *file,  Aumigos *miaumigos, int contador) {
    printf("Escreva o nome e a idade nesse formato: NOME-IDADE\n");
    scanf("%s-%d", miaumigos[contador].nome, &miaumigos[contador].idade);

    fprintf(file, "%s-%d\n", miaumigos[contador].nome, miaumigos[contador].idade);
}

int count_aumigos(FILE *file) {
    int count = 0;
    char line [100];

    while (fgets (line, sizeof(line), file) == NULL) {
        count++;
    }

    rewind (file);

    return count;
}

int main (void) 
{
    FILE *arq_aumigos;

    int input;

    arq_aumigos = fopen("aumigos_lista.txt", "a+");
    if (arq_aumigos == NULL) {
        printf("Erro ao abrir o arquivo");
        return 1;
    }

    int count = count_aumigos(arq_aumigos);


    Aumigos *miaumigos = (Aumigos *) malloc (count * sizeof(Aumigos));
    if (miaumigos == NULL) {
        printf("Nao foi possivel alocar memoria");
        return 1;
    }

    printf("Adicionar um Aumigo?\n"); // "a"
    printf("-> Digite 1\n");
    printf("Deseja ordenar a ordem no arquivo?\n"); // "r+"
    printf("-> Digite 2\n");
    printf("Deseja ver a lista de Aumigos?\n"); // "r"
    printf("-> Digite 3\n");
    scanf("%d", &input);


    switch (input)
    {
    case 1:
        arq_aumigos = fopen ("aumigos_lista.txt", "a");
        add_aumigo(arq_aumigos, miaumigos, count);
        break;
    
    case 2:
        arq_aumigos = fopen ("aumigos_lista.txt", "r+");
        sort_aumigos(arq_aumigos, miaumigos, count);
        break;
    
    case 3:
        arq_aumigos = fopen ("aumigos_lista.txt", "r");
        ver_aumigos(arq_aumigos, miaumigos, count);
        break;
    
    default:
        break;
    }

    
    fclose (arq_aumigos);
    free(miaumigos);

    return 0;
}