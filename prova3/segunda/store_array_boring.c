// Read And Store Each Line Of A File Into An Array Of Strings 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINES 100
#define MAX_LEN 1000

int main (void)
{
    FILE *file;

    file = fopen("theblocks", "r");
    if (file == NULL) return 1;

    int lines = 0;
    char array_strings [MAX_LINES][MAX_LEN];


    // while (lines < MAX_LINES && fgets(array_strings[lines], MAX_LEN, file) != NULL)
    // {
    //     lines++;
    // }
    
    while (!feof (file) && !ferror(file))
    {
        // fgets(array_strings[lines], MAX_LEN, file);

        if (fgets(array_strings[lines], MAX_LEN, file) != NULL) 
            lines++;
        
    }

    fclose(file);

    int i, j;
    for (i = 0 ; i < lines; i++) 
        printf("%s", array_strings[i]);


    return 0;
}