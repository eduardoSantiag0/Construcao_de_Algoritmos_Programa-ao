#include <stdio.h>

int main (void){
    int i;
    printf("Faca Algo");
    for (i = 0; i<=100 ;i++)
    {
        if (i%2==0){
            printf("\t\t||i: %d\n", i);
        } else{

            printf("\ti: %d ||\n", i);
        }
    }

    return 0;
}