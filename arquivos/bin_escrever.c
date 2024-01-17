#include <stdio.h>
#include <stdlib.h>


int main (void) {
    FILE *arq;
    char input[50];

    arq = fopen("binario.bin", "wb");

    if (arq == NULL)
    {
        printf("Erro ao abrir");
        return 1;
    }

    printf("Escreva: ");
    scanf("%s",input);

    // fwrite(&alguma_variavel, sizeof alguma_variavel, quantidade, arquivo);
    fwrite(&input, sizeof input, 5, arq);

    fclose(arq);
    printf("Sucesso");
    



    return 0;
}