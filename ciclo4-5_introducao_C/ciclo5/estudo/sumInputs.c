#include <stdio.h>

int main (void){
    int sumOutput;

    sumOutput = 0;

    for (int i = 0; i<10 ;i++){

        int input;

        printf ("Adicione numero %d --> ", i+1);
        scanf ("%d", &input);
        sumOutput += input;
        printf("Contando... %d\n", sumOutput);

    }

    printf ("%d", sumOutput);

    return 0;
} 