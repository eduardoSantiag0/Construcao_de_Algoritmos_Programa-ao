#include <stdio.h> 
#include <stdlib.h>


int main (void) {
    FILE *arq1;
    char palarva[20];

    arq1 = fopen ("helloMom.txt", "w");

    if (arq1 == NULL)
    {
        printf("erro ao abrir o arquivo!");
        return 1;
    }

    printf("Escreva uma palavra: ");
    scanf("%s", palarva);

    fprintf(arq1, "%s", palarva);
    fclose(arq1);

    printf("Sucesso!!");


    return 0;
}

//todo Um para escrever em um arquivo
//todo Outro para abrir o programa no formato read
//todo Repetir para arquivo binário