#include <stdio.h>
#include <stdlib.h>

// Write a C program that reads the contents of a text file named "input.txt" and writes the same content to another text file named "output.txt". Make sure to handle any potential errors that may occur during file operations.


int main (void)
{
    FILE *file_original, *file_output;

    file_original = fopen("input.txt", "r+");
    if (file_original == NULL)
    {
        printf("Nao foi possivel abrir arquivo");
        return 1;
    }



    file_output = fopen("output.txt", "w");
    if (file_output == NULL)
    {
        printf("Erro ao abrir o arquivo");
        fclose(file_original); // Segurança
        return 1;
    }

    char buffer[100];

    //! Minha versão
    // fscanf(file_original, "%s", buffer); // Pega os dados originais
    // fprintf(file_output, "%s", buffer); // Escreve no output


    while (fgets(buffer, sizeof(buffer), file_original) != NULL)
    {
        printf("--%s \n", buffer);
        fprintf(file_output, "%s", buffer);
    }
    



    fclose(file_original);
    fclose(file_output);


    return 0;
}