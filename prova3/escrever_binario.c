#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//* fread -> Ler em binário
//* fwrite -> Escreve em binário 


int main (void)
{
    FILE *file;

    char *ptr;

    file = fopen("mequi.bin", "wb+");
    if (file == NULL)
    {
        printf("Erro ao abrir o arquivo");
        return 1;
    }


    char seunome[50];
    printf("Fale o seu nome: ");
    scanf("%s", seunome);

    ptr = (char *) malloc (strlen(seunome) + 1);

    if (!ptr) {
        printf("Memoria Insuficiente");
        return 1;
    }

    strcpy(ptr, seunome);

    fwrite(ptr, sizeof(char) , sizeof(ptr) + 1, file);

    rewind(file);

    char buffer[50];

    while (fread(buffer, sizeof(char), sizeof(buffer), file) > 0)
    {
        printf("--> %s\n", buffer);
    }


    free(ptr);
    fclose(file);

    return 0;
}