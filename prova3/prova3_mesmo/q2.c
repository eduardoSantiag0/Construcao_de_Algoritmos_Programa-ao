// Tres Arquivo
// Atençao na ordem que os arquivos serão lidos
// Primeiro e Segundo são Binários
// Num de Elementos do Vetor1 e Vetor2
// Terceiro arquivo é texto
// Intercalar os dados. Dado do vetor1, depois vetor2, depois vetor1, vetor 2
// Se um for maior que o outro, intercalar até 

#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    FILE *file1, *file2, *file_tam;

    char arquivo_bin_1 [50] = "Arq1_certo.bin";
    char arquivo_bin_2 [50] = "Arq2_certo.bin";
    char size_txt[50] = "size.txt";
    int i;

    file_tam = fopen(size_txt, "r");
    if (file_tam  == NULL)
    {
        printf("Nao foi possivel abrir o arquivo de tamanho");
        return 1;
    }    


    int size1,  size2;

    fscanf(file_tam, "%d\n%d", &size1, &size2);
    int tam_vetor3 = size1 + size2;

    int *vetor_bin_1 = malloc (sizeof(int) * size1);
    int *vetor_bin_2 =  malloc (sizeof(int)  * size2);
    int *vetor_out = malloc (sizeof(int) *  tam_vetor3);



    file1 = fopen(arquivo_bin_1, "rb");
    file2 = fopen(arquivo_bin_2, "rb");
    if (file1 == NULL || file2 == NULL)
    {
        printf("Nao foi possivel abrir os arquivos dos vetores");
        return 1;
    }

    fread (vetor_bin_1, sizeof(int), size1, file1);
    fread (vetor_bin_2, sizeof(int), size2, file2);

    int sequencia = 0;
    int index_out = 0;

    while (index_out < tam_vetor3)
    {
        if (sequencia > size2) {
            vetor_out[index_out] = vetor_bin_1[sequencia];
            index_out++;
            sequencia++;
        } else if (sequencia > size1) {
            vetor_out[index_out] = vetor_bin_2[sequencia];
            index_out++;
            sequencia++;
        } else { 
            vetor_out[index_out] = vetor_bin_1[sequencia];
            index_out++;
            vetor_out[index_out] = vetor_bin_2[sequencia];
            index_out++;
            sequencia++;
        }
    }


    for (i = 0; i < tam_vetor3; i++) {
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

    //! Alocação com for loop
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











    // // Tamanhos iguais
    // while (sequencia < size1 && sequencia < size2)
    // {
    //     vetor_out[index_out] = vetor_bin_1[sequencia];
    //     index_out++;
    //     vetor_out[index_out] = vetor_bin_2[sequencia];
    //     index_out++;
    //     sequencia++;
    // }

    // // 
    // while (sequencia < size1)
    // {
    //     vetor_out[index_out] = vetor_bin_1[sequencia];
    //     index_out++;
    //     sequencia++;
    // }

    // while (sequencia < size2)
    // {
    //     vetor_out[index_out] = vetor_bin_2[sequencia];
    //     index_out++;
    //     sequencia++;
    // }



    // // Imprimindo 
    // for (i = 0; i < size1; i++) {
    //     printf("%d\n", vetor_bin_1[i]);
    // }

    // printf("\n");
    // printf("\n");
    
    // for (i = 0; i < size2; i++) {
    //     printf("%d\n", vetor_bin_2[i]);

    // }
    // int sequencia = 0;
    // int index_out = 0;

    // // while (index_out < tam_vetor3)
    // // {
    // //     if (sequencia > size2) {
    // //         vetor_out[index_out] = vetor_bin_1[sequencia];
    // //         index_out++;
    // //         sequencia++;
    // //     } else if (sequencia > size1) {
    // //         vetor_out[index_out] = vetor_bin_2[sequencia];
    // //         index_out++;
    // //         sequencia++;
    // //     } else {
    // //         vetor_out[index_out] = vetor_bin_1[sequencia];
    // //         index_out++;
    // //         vetor_out[index_out] = vetor_bin_2[sequencia];
    // //         sequencia++;
    // //     }
    // // }
    
    
    // // while (index_out < tam_vetor3)
    // // {
    // //     vetor_out[index_out] = vetor_bin_1[sequencia];
    // //     index_out++;
    // //     vetor_out[index_out] = vetor_bin_2[sequencia];
    // //     sequencia++;
    // // }
    

    // while (sequencia < size1 && sequencia < size2)
    // {
    //     vetor_out[index_out] = vetor_bin_1[sequencia];
    //     index_out++;
    //     vetor_out[index_out] = vetor_bin_2[sequencia];
    //     index_out++;
    //     sequencia++;
    // }


    // while (sequencia < size1)
    // {
    //     vetor_out[index_out] = vetor_bin_1[sequencia];
    //     index_out++;
    //     sequencia++;
    // }

    // while (sequencia < size2)
    // {
    //     vetor_out[index_out] = vetor_bin_2[sequencia];
    //     index_out++;
    //     sequencia++;
    // }
