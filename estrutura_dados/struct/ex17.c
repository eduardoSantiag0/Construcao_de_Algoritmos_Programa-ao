#include <stdio.h>
#define tam 10


int inverter(int array[], int out [])
{
    int i;
    for (i = 0; i<tam; i++)
    {
        out[i] = array[tam - 1 - i];
    }

}

int main (void)
{
    int i;
    int vetor1[tam];
    int inverso[tam];

    for (i = 0; i < tam; i++)
    {
        vetor1[i] = i;
    }

    inverter(vetor1, inverso);

    for (i=0; i < tam; i++){
        printf("%d ", vetor1[i]);
    }

    printf("\n");

    for (i=0; i < tam; i++){
        printf("%d ", inverso[i]);
    }


    return 0;
}