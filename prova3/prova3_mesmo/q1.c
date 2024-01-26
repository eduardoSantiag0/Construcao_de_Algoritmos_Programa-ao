#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    FILE *data;

    int num;
    int counter = 0;
    char nome_arquivo[50];
    scanf("%s", nome_arquivo);

    data = fopen(nome_arquivo, "r");
    if (data == NULL)
    {
        printf("Nao foi possivel abrir o arquivo");
        return 1;
    }

    while (fscanf(data, "%d", &num) == 1)
    {
        if (num % 2 ==0)
            counter++;
 
    }

    printf("%d", counter);      
    fclose(data);


    return 0;
}


    // while (index_out < tam_vetor3)
    // {
    //     vetor_out[index_out] = vetor_bin_1[sequencia];
    //     index_out++;
    //     vetor_out[index_out] = vetor_bin_2[sequencia];
    //     sequencia++;
    // }
    

//* Escrevendo no Arquivo

// fprintf(arquivo, formato, dados);

// fwrite(&alguma_variavel, sizeof alguma_variavel, quantidade, arquivo);

//* Lendo no Arquivo

// fscanf(arquivo, formato, &dados);

// fread(&alguma_variavel, sizeof alguma_variavel, quantidade, arquivo);



    // for (i = 0; i < size1; i++)
    // {
    //     if (fread(&vetor_bin_1[i], sizeof(int), 1, file1) != 1)
    //     {
    //         printf("Erro ao ler arquivo 1");
    //         return 1;
    //     }
    // }

    // for (i = 0; i < size2; i++)
    // {
    //     if (fread(&vetor_bin_2[i], sizeof(int), 1, file2) != 1)
    //     {
    //         printf("Erro ao ler arquivo 2");
    //         return 1;
    //     }
    // }

