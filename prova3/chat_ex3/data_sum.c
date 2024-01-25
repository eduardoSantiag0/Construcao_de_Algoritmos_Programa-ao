#include <stdio.h>
#include <stdlib.h>

//todo Total number of integers in the file.
//todo Sum of all integers.
//todo Average of the integers.
//todo Minimum and maximum values.

//todo Total number of integers in the file.

int main (void)
{
    FILE *data;

    data = fopen("data.txt", "r");
    if (data == NULL)
    {
        printf("Nao foi possivel abrir o arquivo");
        return 1;
    }

    int sum = 0, num, counter = 0, avg, max = 0, min = 10000;


    while (fscanf(data, "%d", &num) == 1)
    {
        if (num > max)
            max = num;
    
        if (num < min)
            min = num;
        

        counter++;
        sum += num;
        
    }

    if (counter == 0) {
        printf("Nenhum numero no arquivo");
        return 1;
    }

    avg = sum / counter;

    printf("A soma: %d\n", sum);
    printf("Media: %d\n", avg);
    printf("Max: %d\n", max);
    printf("Min: %d\n", min);
    printf("Contador: %d\n", counter);
    
    fclose(data);

    return 0;
}