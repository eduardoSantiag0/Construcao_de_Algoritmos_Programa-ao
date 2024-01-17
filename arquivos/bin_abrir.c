#include <stdio.h>
#include <stdlib.h>

int main (void) {

    FILE *binLer;

    binLer = fopen ("binario.bin", "rb+");

    if (binLer == NULL)
    {
        printf("Nao existe o arquivo");
        return 1;
    }

    // Ler arquivo
    char out[50];

    // fread(&alguma_variavel, sizeof alguma_variavel, quantidade, arquivo);
    fread (&out , sizeof out, 5, binLer);
    printf("Lendo arquivo...\n");
    printf("--> %s <--", out);

    return 0;
}