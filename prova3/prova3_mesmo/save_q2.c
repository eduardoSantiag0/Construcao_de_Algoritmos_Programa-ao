#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *file1, *file2, *file_tam;

    char arquivo_bin_1[50];
    char arquivo_bin_2[50];
    char size_txt[50];
    int i;

    scanf("%s", file_tam);
    // fscanf(file_tam, "%s", size_txt);


    file_tam = fopen(size_txt, "r");
    if (file_tam == NULL)
    {
        printf("Nao foi possivel abrir o arquivo de tamanho");
        return 1;
    }

    int size1, size2;

    fscanf(file_tam, "%d\n%d", &size1, &size2);
    int tam_vetor3 = size1 + size2;

    int *vetor_bin_1 = malloc(sizeof(int) * size1);
    int *vetor_bin_2 = malloc(sizeof(int) * size2);
    int *vetor_out = malloc(sizeof(int) * tam_vetor3);

    scanf("%s", file1);
    scanf("%s", file2);

    file1 = fopen(arquivo_bin_1, "rb");
    file2 = fopen(arquivo_bin_2, "rb");
    if (file1 == NULL || file2 == NULL)
    {
        printf("Nao foi possivel abrir os arquivos dos vetores");
        return 1;
    }

    fread(vetor_bin_1, sizeof(int), size1, file1);
    fread(vetor_bin_2, sizeof(int), size2, file2);

    int sequencia = 0;
    int index_out = 0;

    while (sequencia < size1 && sequencia < size2)
    {
        vetor_out[index_out++] = vetor_bin_1[sequencia];
        vetor_out[index_out++] = vetor_bin_2[sequencia];
        sequencia++;
    }

    while (sequencia < size1)
    {
        vetor_out[index_out++] = vetor_bin_1[sequencia++];
    }

    while (sequencia < size2)
    {
        vetor_out[index_out++] = vetor_bin_2[sequencia++];
    }

    for (i = 0; i < tam_vetor3; i++)
    {
        printf("%d\n", vetor_out[i]);
    }

    fclose(file1);
    fclose(file2);
    fclose(file_tam);

    free(vetor_bin_1);
    free(vetor_bin_2);
    free(vetor_out);

    return 0;
}
