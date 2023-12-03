#include <stdio.h>

int main (void){
    int i;

    for (i=3; i < 300; i++){
        if (i%3 == 0 || i %7 == 0){
            printf("\n %d", i);
        }
    }
    return 0;
}