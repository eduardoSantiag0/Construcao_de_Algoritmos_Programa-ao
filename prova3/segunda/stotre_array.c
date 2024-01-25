// Read And Store Each Line Of A File Into An Array Of Strings 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINES 100
#define MAX_LEN 1000

int main (void)
{
    FILE *file;

    // Dynamic Allocate the array;

    file = fopen("theblocks", "r");
    if (file == NULL) return 1;
    
    // Descobrir tamanho do Arquivo
    fseek (file, 0, SEEK_END);
    int lenght = ftell (file);
    fseek (file, 0, SEEK_SET);

    // Ponteiro para ponteiros
    char **array_strings = malloc (lenght * sizeof (char *));
    if (array_strings == NULL) {
        printf("Sem espaço");
        return 1;
    }

    int i = 0;
    for (i = 0; i < lenght; i++) {
        array_strings[i] = (char *) malloc (sizeof (lenght +1));
    }


    char buffer[256];
    i = 0;
    while (fscanf (file, "%s", buffer) != EOF)
    {
        array_strings[i] = buffer;
        i++;
    }


    for (i = 0; i < 10; i++) {
        printf("%s", array_strings[i]);
    }


    fclose(file);
    free(array_strings);
    
    return 0;
}