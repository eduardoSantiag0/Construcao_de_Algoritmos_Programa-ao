// Read A Specific Line From A File

#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main (void) 
{
    FILE *file;

    file = fopen ("theblocks.txt", "r");
    if (file == NULL) return 1;

    char input[50];
    char buffer[256];
    int linha = 1;
    printf("Qual linha voce deseja encontrar?\n");
    scanf("%s", input);


    while (fscanf(file, "%s", buffer) != EOF)
    {
        printf("Meu buffer -> %s\n", buffer);
        if (strcmp (input, buffer) == 0) {
            printf("%s encontrado na Linha: %d\n", buffer, linha);
            break;
        }
        linha++;
        if (feof (file)) {
            printf("Nao foi encontrada a palavra!\n");
            return 1;
        }
    }

    
    
    fclose(file);

    return 0;
}