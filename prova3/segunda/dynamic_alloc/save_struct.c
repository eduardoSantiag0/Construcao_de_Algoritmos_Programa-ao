#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Imprima o aluno com a maior média;
// (OP) Criptografar texto;

typedef struct 
{
    char nome [50];
    int nota1;
    int nota2;
    int nota3;
}Aluno;


int main (void)
{
    FILE *file;
    int escolha, i;

    printf("O que deseja fazer: \n");
    printf("1- Adicionar aluno \n");
    printf("2- Ver maior nota \n");
    scanf("%d", &escolha);



    if (escolha == 1){
        file = fopen("alunos_escola.txt", "a");
        if (file == NULL) {
            printf("Não foi possível abrir o arquivo");
            return 1;
        }

        Aluno aluno;

        printf("Insira o nome: ");
        scanf("%s", aluno.nome);
        printf("As notas (nota1 nota2 nota3): ");
        scanf("%d %d %d", &aluno.nota1, &aluno.nota2, &aluno.nota3);

        fprintf(file, "%s %d %d %d\n", aluno.nome, aluno.nota1, aluno.nota2, aluno.nota3);

        fclose(file);


    } else if (escolha == 2) {
        file = fopen("alunos_escola.txt", "r");

        // Descobre o tamanho do arquivo
        fseek (file, 0, SEEK_END);
        int len = ftell (file) / sizeof (Aluno); // Retorna o valor do ponteiro;
        fseek (file, 0, SEEK_SET);

        Aluno *pessoa = malloc (sizeof (Aluno) * len); //!!!
        if (pessoa == NULL) {
            printf("Sem espaco");
            return 1;
        }

        int nota_media = 0;
        int pos_maior_media = 0;
        float media_aluno = 0.0;
        float maior_media = 0.0;
        for ( i = 0; i < len; i++) {
            media_aluno = (float) (pessoa[i].nota1 + pessoa[i].nota2 + pessoa[i].nota3) / 3; 
            if (media_aluno > nota_media) {
                pos_maior_media = i;
                maior_media = media_aluno;
            }
        }

        printf("O aluno com maior %s com a media de %d", pessoa[pos_maior_media].nome, maior_media);
        free(pessoa);

    } else {
        printf("Digitou errado :<");
    }

    return 0;
}
