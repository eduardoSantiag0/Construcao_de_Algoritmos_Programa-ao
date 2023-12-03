#include <stdio.h>

int main (void){
    int i;

    char asterisco = '*';

    for (i=0; i < 10; i++){
        printf("%d \n", i);

        if (i < 5){
            printf(asterisco * i);
        } else{
            printf(asterisco *i);
        }
    }

    return 0;
}