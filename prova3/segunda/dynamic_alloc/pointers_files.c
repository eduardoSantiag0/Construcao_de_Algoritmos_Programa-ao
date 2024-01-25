#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// O usuário ira informar o número máximo de nomes que poderão ser armazenados. 
// Cada nome poderá ter até 30 caracteres com o ‘\0’. O usuário poderá usar 5 opções diferentes para manipular a matriz:
//todo  Gravar um nome em uma linha da matriz;
//todo  Apagar o nome contido em determinada linha da matriz;
//todo  Informar um nome, procurar a linha onde ele se encontra e substituir por outro nome;
//todo  Informar um nome, procurar a linha onde ele se encontra e apagar;

void sobrescrever_nome (FILE *file) {
    char nome_add[30];
    char nome_subs[30];

    // Procurar o nome
    // Apagar e substituir

    printf("Insira o nome que substituir: \n");
    scanf ("%s", nome_subs);
    printf("Insira o nome que deseja adicionar: \n");
    scanf ("%s", nome_add);

}

void gravar_nome (FILE *file) {
    char nome[30];
    printf("Insira um nome: \n");
    scanf ("%s", nome);

    fprintf(file, "\n%s", nome);
}

void deletar_nome (FILE *file) {
    FILE *originalFile = fopen(file, "r");
    FILE *tempFile = fopen ("temp.txt", "w");


    char nome_delete[30];

    if (originalFile == NULL || tempFile == NULL) {
        printf("Error opening file.\n");
        exit(EXIT_FAILURE);
    }

    char buffer [512];
    int currentLine = 1;
    int flag = 0;
    while (fgets(buffer, sizeof(buffer), originalFile) != NULL) {
        if (strstr(buffer, nome_delete) == NULL) {
            fputs(buffer, tempFile);
        } else {
            flag = 1; // Set flag to indicate that a name was found and deleted
        }
    }

    fclose(originalFile);
    fclose(tempFile);

    remove("nomes.txt");
    rename("temp.txt", "nomes.txt");

    if (flag) {
        printf("Nome excluido com sucesso!\n");
    } else {
        printf("Nenhum nome foi encontrado\n");
    }
}

int main (void)
{
    FILE *file;
    int escolha;
    
    file = fopen ("nomes.txt", "a+");
    if (file == NULL) return 1;

    printf("O que deseja fazer, Sr?\n");
    printf("1 - Gravar um nome na lista\n");
    printf("2 - Apagar o nome contido em determinada linha da matriz\n");
    printf("3 - Informar um nome, procurar a linha onde ele se encontra e substituir por outro nome\n");
    printf("4 - Informar um nome, procurar a linha onde ele se encontra e apagar\n");
    scanf("%d", &escolha);

    switch (escolha)
    {
    case 1:
        gravar_nome(file);
        break;
    
    case 2: 
        break;
    
    case 3: // Informar um nome, procurar a linha onde ele se encontra e substituir por outro nome
        sobrescrever_nome (file);
        break;
    
    case 4:
        deletar_nome (file);
        break;
    
    default:
        printf ("Nenhuma numero valido foi digitado, Adeus");
        break;
    }

    printf("Processo Concluido, fechando arquivo!\n");
    fclose (file);

    return 0;
}