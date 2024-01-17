#include <stdio.h>
#include <stdlib.h>

int main (void) {

    char nome[50] = "eduardo";
    char sobrenome[50] = "rosalin";
    char nome_completo[50];
    sprintf(nome_completo, "%s_%s", nome, sobrenome);

    printf("%s", nome_completo);


    return 0;
}