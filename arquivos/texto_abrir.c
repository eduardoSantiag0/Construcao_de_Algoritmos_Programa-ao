#include <stdio.h>
#include <stdlib.h>


int main (void) {
    FILE *arqLer;
    // fscanf

    // Abrir o arquivo
    arqLer = fopen("helloMom.txt", "r");

    if (arqLer == NULL)
    {   
        printf("Nao existe esse arquivo");
        return 1;
    }

    // Ler o arquivo
    char texto[50];
    fscanf (arqLer, "%s" , &texto );

    printf("\t%s", texto);

    return 0;
}