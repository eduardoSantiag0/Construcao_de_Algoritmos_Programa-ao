#include <stdio.h>
#include <stdlib.h>

// Write a C program that reads integers from a file named "input.txt" (assume one integer per line). The program should calculate the sum and average of these integers and then write the results to a new file named "output.txt". Make sure to handle the case where the input file might not exist.

int main (void) {
    FILE *file;

    file = fopen ("index.txt", "r");

    int num;
    int soma = 0;


    while (fscanf (file, "%d", &num) != EOF)
    {
        soma += num;
        
    }
    printf("Soma: %d", soma);

    fclose(file);
    return 0;

}