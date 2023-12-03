#include <stdio.h>

int main (void){
    int dia;

    printf ("Digite um numero:  ");
    scanf("%d \n", &dia);

    switch (dia)
    {
        case 1: 
        printf("Domingo\n");
        break;
    }

    return 0;
} 
