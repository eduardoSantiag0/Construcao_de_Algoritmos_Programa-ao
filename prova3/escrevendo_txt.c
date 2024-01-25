#include <stdio.h>
#include <stdlib.h>

//* fopen -> Abrir arquivo (escolher modo em  qua vai abrir)

//* fscanf -> Ler em texto
//* fread -> Ler em binário

//* fprintf -> Escreve em texto formatado (com variáveis) em um arquivo texto
//* fputs -> Escreve uma string em um arquivo texto
//* fwrite -> Escreve em binário 

//* fgets -> Pega uma parte específica do arquivo e guarda em uma variável
//* fseek -> Seleciona uma parte específica do arquivo 

// sprintf -> Transforma um texto formatado (podendo conter diferentes tipos) em uma string

//? fputs (escreve uma string) vs fprintf (escreve dados formatados)

int main (void)
{
    FILE *arq_texto, *abrir_arquivo, *arq_copia;

    arq_texto = fopen("hello_mom.txt", "w");
    if (arq_texto == NULL) {
        printf("Erro ao abrir arquivo");
        return 1;
    }

    char filme[20] = "Bacurau\n";

    fprintf(arq_texto, "Meu filme favorito: %s \n", filme);
    fseek(arq_texto, 0, SEEK_END);
    fputs("ou qualquer outro", arq_texto);
    
    fclose(arq_texto);

    abrir_arquivo = fopen("hello_mom.txt", "r");
    if (abrir_arquivo == NULL) {
        printf("Erro ao abrir arquivo");
        return 1;
    }

    char buff[50];


    printf("Hello buffer\n");
    while (fscanf(abrir_arquivo, "%s", buff) == 1)
    {
        printf("%s ", buff);
    }

    fclose(abrir_arquivo);

    arq_copia = fopen("copia_bin.bin", "wb+");
    if (arq_copia == NULL)
    {
        printf("Erro");
        return 1;
    }


    // fwrite(&pessoa[i], sizeof (FUNC), 1, arq_funcionarios);
    fwrite (arq_texto, sizeof(char), sizeof(buff), arq_copia);


    while (fread(buff, sizeof(char), sizeof(buff), arq_texto) == sizeof(buff))
    {
        // Write the content to the binary file
        fwrite(buff, sizeof(char), sizeof(buff), arq_copia);
    }

    // Move the file position indicator to the beginning of the binary file
    fseek(arq_copia, 0, SEEK_SET);

    // Read and print the content of the binary file
    while (fread(buff, sizeof(char), sizeof(buff), arq_copia) == sizeof(buff))
    {
        // Print or manipulate the content as needed
        printf("%s ", buff);
    }

    fclose(arq_copia);


    return 0;
}