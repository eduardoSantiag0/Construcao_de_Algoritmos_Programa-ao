#include <stdio.h>
#include <stdlib.h>

int main (void)
{ 
    int vetor1 [] = {1, 3, 5, 7, 9, 11, 13};
    int vetor2 [] = {2, 4, 6, 8};

    // fwrite(&alguma_variavel, sizeof alguma_variavel, quantidade, arquivo);

    FILE *file1, *file2;

    file1 = fopen("Arq1_certo.bin", "wb");
    file2 = fopen("Arq2_certo.bin", "wb");

    fwrite(&vetor1, sizeof (int), 7, file1);
    fwrite(&vetor2, sizeof (int), 4, file2);

    fclose(file1);
    fclose(file2);

    return 0;
}
