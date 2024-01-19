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

    char filme[20] = "Bacurau\n";
    char fput[20] = "fputs here!\n";

    fprintf(arq_texto, "Meu filme favorito: \n", filme);
    fputs(filme, arq_texto);
    fseek(arq_texto, 0, SEEK_END);
    fputs("ou qualquer outro", arq_texto);

    fclose(arq_texto);

    abrir_arquivo = fopen("hello_mom.txt", "r");

    char buff[50];
    char getmovie[20];



    printf("Hello buffer\n");
    while (fscanf(abrir_arquivo, "%s", buff) == 1)
    {
        printf("%s ", buff);
    }

    arq_copia = fopen("copia_bin.bin", "wb+");


    // fwrite(&pessoa[i], sizeof (FUNC), 1, arq_funcionarios);
    fwrite (arq_texto, sizeof(buff), 3, arq_copia);

    while (fread(arq_texto, sizeof (char), 1 , arq_copia) == 1)
    {
        printf("%s ", buff);
    }

    
    fclose(arq_texto);
    fclose(abrir_arquivo);
    fclose(arq_copia);


    return 0;
}