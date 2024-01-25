#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//todo Read All File Contents Into A String

int main (void)
{
    FILE *file;

    file = fopen("theblocks.txt", "r");
    if (file == NULL) return 1;

    char buffer [256];
    int num_linhas;

    fseek (file, 0, SEEK_END);
    num_linhas = ftell(file);
    fseek (file, 0, SEEK_SET);

    // fgets (str, 60, fp)!=NULL ) 
    while (fgets (buffer, 200, file ) != NULL) {
        printf("%s", buffer);
    } 
    
    printf("\nTamanho em bytes do arquivo: %d", num_linhas);
    fclose(file);
    return 0;
}

// 124 - 108 = 16
// 147 - 124 = 43