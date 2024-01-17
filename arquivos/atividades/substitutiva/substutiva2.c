#include <stdio.h>
#include <string.h>

#define NUM_FUNCIONARIOS 20

typedef struct {
    char nome[50];
    int matricula;
    char cargo[50];
    float salario;
} FUNC;

int main() {
    FILE *nome_file, *matricula_file, *cargo_file, *salario_file, *arq_binario;

    // Abre os arquivos de texto para leitura
    nome_file = fopen("nomes.txt", "r");
    matricula_file = fopen("matricula.txt", "r");
    cargo_file = fopen("cargos.txt", "r");
    salario_file = fopen("salarios.txt", "r");

    // Abre o arquivo binário para escrita
    arq_binario = fopen("funcionarios.bin", "wb");

    if (nome_file == NULL || matricula_file == NULL || cargo_file == NULL || salario_file == NULL || arq_binario == NULL) {
        printf("Erro ao abrir os arquivos");
        return 1;
    }

    FUNC funcionarios[NUM_FUNCIONARIOS];

    // Lê as informações dos arquivos de texto e escreve no arquivo binário
    printf("\tAdicionando Funcionarios: \n");
    int i = 0;
    while (fscanf(nome_file, "%s", funcionarios[i].nome) == 1 &&
           fscanf(matricula_file, "%d", &funcionarios[i].matricula) == 1 &&
           fscanf(cargo_file, "%s", funcionarios[i].cargo) == 1 &&
           fscanf(salario_file, "%f", &funcionarios[i].salario) == 1)  {
        
            printf("Nome: %s, Matricula: %d, Cargo: %s, Salario: %.2f\n", funcionarios[i].nome, funcionarios[i].matricula, funcionarios[i].cargo, funcionarios[i].salario);

            fwrite(&funcionarios[i], sizeof(FUNC), 1, arq_binario); //Ler, tamanho, quantidade, guardar;
            i++;
    }

    // Fecha os arquivos
    printf("Fechando Arquivo\n");
    fclose(nome_file);
    fclose(matricula_file);
    fclose(cargo_file);
    fclose(salario_file);
    fclose(arq_binario);
    printf("Arquivo salvo!");

    return 0;
}
