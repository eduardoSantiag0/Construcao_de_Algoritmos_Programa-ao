// Ler e Escrever um Vetor de Structs em um Arquivo Binário
// Imprimir do mais velho para o mais novo
# include <stdio.h> 
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name [50];
    int age;
} Candidato;


void imprimir_pessoa (Candidato aluno) {
    printf("%s e %d\n", aluno.name, aluno.age);
}

int main (void)
{

    Candidato pessoas [4];
    FILE *bin_file;

    strcpy(pessoas[0].name, "Ian");
    pessoas[0].age = 11;
    strcpy(pessoas[1].name, "Ryan");
    pessoas[1].age = 21;
    strcpy(pessoas[2].name, "TZ");
    pessoas[2].age = 33;
    strcpy(pessoas[3].name, "Poze");
    pessoas[3].age = 45;

    bin_file = fopen("candidatos.bin", "wb");
    if (bin_file == NULL) return 1;

    printf("Adicionando pessoas\n");

    int i;
    for (i = 0; i < 4 ; i++) {
        fwrite (&pessoas[i], sizeof(Candidato), 1 , bin_file);
        printf("%s foi adicionado!\n", pessoas[i].name);
    }

    fclose (bin_file);

    printf("Arquivo Salvo com Sucesso\n");


    bin_file = fopen ("candidatos.bin", "rb");
    if (bin_file == NULL) return 1;

    // fread(&alguma_variavel, sizeof alguma_variavel, quantidade, arquivo);

    Candidato aluno[4];
    for (i = 0; i < 4 ; i++) {
        fread (&aluno[i], sizeof(Candidato) , 1 , bin_file);
        imprimir_pessoa (aluno[i]);
    }

    fclose (bin_file);

    return 0;
}
