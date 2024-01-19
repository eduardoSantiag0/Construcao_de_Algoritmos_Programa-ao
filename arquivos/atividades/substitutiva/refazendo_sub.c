#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUM_FUNC 4


typedef struct {
    char nome[50];
    int matricula;
    char cargo[50];
    float salario;
} FUNC;

int main (void)
{
    FILE *arq_funcionarios, *nomes, *salarios, *matriculas, *cargos;

    FUNC pessoa[NUM_FUNC];
    int i;


    nomes = fopen("nomes.txt", "r");
    matriculas = fopen("matriculas.txt", "r");
    cargos = fopen("cargos.txt", "r");
    salarios = fopen("salarios.txt", "r");

    if (nomes == NULL || salarios == NULL || matriculas == NULL || cargos == NULL)
    {
        perror("Erro ao abrir os arquivos");
        return 1;
    }

    arq_funcionarios = fopen("meus_funcionarios_queridos.bin", "wb");

    for (i = 0; i < NUM_FUNC; i++) {
        // fscanf (onde é lido, tipo do dados, endereço do dados);
        fscanf(nomes, "%s", pessoa[i].nome);
        fscanf(cargos, "%s", pessoa[i].cargo);
        fscanf(matriculas, "%d", pessoa[i].matricula);
        fscanf(salarios, "%f", pessoa[i].salario);

        fwrite(&pessoa[i], sizeof (FUNC), 1, arq_funcionarios);
    }

    fclose(nomes);
    fclose(salarios);
    fclose(matriculas);
    fclose(cargos);
    fclose(arq_funcionarios);


    return 0;
}