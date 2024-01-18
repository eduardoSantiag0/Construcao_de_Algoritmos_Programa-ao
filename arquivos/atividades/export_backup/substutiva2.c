#include <stdio.h>
#include <string.h>

#define NUM_FUNCIONARIOS 4

typedef struct {
    char nome[50];
    int matricula;
    char cargo[50];
    float salario;
} FUNC;

int main() {
    FILE *nome_arq, *matricula_arq, *cargo_arq, *salario_arq, *arq_binario;
    int i = 0;

    nome_arq = fopen("nomes.txt", "r");
    matricula_arq = fopen("matricula.txt", "r");
    cargo_arq = fopen("cargos.txt", "r");
    salario_arq = fopen("salarios.txt", "r");

    arq_binario = fopen("funcionarios.bin", "wb");

    if (nome_arq == NULL || matricula_arq == NULL || cargo_arq == NULL || salario_arq == NULL || arq_binario == NULL) {
        printf("Erro ao abrir os arquivos");
        return 1;
    }

    FUNC funcionarios[NUM_FUNCIONARIOS];

    // Ler as informações dos arquivos de texto e escreve no arquivo binário
    printf("\tAdicionando Funcionarios: \n");

    for (i = 0; i < NUM_FUNCIONARIOS; i++) {
        fscanf(nome_arq, "%s", funcionarios[i].nome);
        fscanf(matricula_arq, "%d", &funcionarios[i].matricula);
        fscanf(cargo_arq, "%s", funcionarios[i].cargo);
        fscanf(salario_arq, "%f", &funcionarios[i].salario);

        
        fwrite(&funcionarios[i], sizeof(FUNC), 1, arq_binario); //Ler, tamanho, quantidade, guardar;
    }
    // Fecha os arquivos
    fclose(nome_arq);
    fclose(matricula_arq);
    fclose(cargo_arq);
    fclose(salario_arq);
    printf("Fechando Arquivo\n");
    fclose(arq_binario);
    printf("Arquivo Salvo!\n");




    // Lendo os arquivos
    arq_binario = fopen("funcionarios.bin", "rb");

    if (arq_binario == NULL) {
        printf("Erro ao abrir o arquivo binário para leitura\n");
        return 1;
    }

    FUNC read_funcionarios[NUM_FUNCIONARIOS];

    fread(read_funcionarios, sizeof(FUNC), NUM_FUNCIONARIOS, arq_binario);

    for (int i = 0; i < NUM_FUNCIONARIOS; i++) {
        printf("Nome: %s, Matricula: %d, Cargo: %s, Salario: %.2f\n", read_funcionarios[i].nome, read_funcionarios[i].matricula, read_funcionarios[i].cargo, read_funcionarios[i].salario);
    }

    fclose(arq_binario);


    return 0;
}