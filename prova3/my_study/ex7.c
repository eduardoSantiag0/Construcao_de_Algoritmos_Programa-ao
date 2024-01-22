#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// Write a program that dynamically allocates memory for a string. Implement a function to concatenate two strings. Don't forget to free the allocated memory.



int main (void)
{

    char *ptr1 = (char *) malloc (50 * sizeof(char));
    char *ptr2 = (char *) malloc (50 * sizeof(char));

    if  (ptr1 == NULL || ptr2 == NULL)
    {
        printf("Nao temm espaço disponivel\n");
        return 1;
    }

    printf("Manda um texto ai\n");
    scanf("%s", ptr1);
    printf("Manda outro ai\n");
    scanf("%s", ptr2);

    char *paux = (char *) malloc (1 * sizeof(*ptr1 + *ptr2));
    *paux = ptr1;

    while (*paux != '\0') {
        paux++;
    }

    printf("Strings concatenadas: %s\n", paux);

    while (*ptr2 != '\0') {
        *paux = *ptr2;
        paux++;
        ptr2++;
    }

    // Null-terminate the concatenated string
    *paux = '\0';

    // Display the concatenated string
    printf("Strings concatenadas: %s\n", &paux);

    free(ptr1);
    free(ptr2);
    free(paux);
    return 0;
}