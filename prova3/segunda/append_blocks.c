
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main (void) 
{
    FILE *file;

    file = fopen ("theblocks.txt", "a");
    if (file == NULL) return 1;

    char novo_bloco[50];
    printf("Qual bloco deseja adicioanr? Bloco do: ");
    scanf("%s", novo_bloco);
    
    fprintf(file, "\nBloco do %s", novo_bloco);
    
    
    fclose(file);

    return 0;
}