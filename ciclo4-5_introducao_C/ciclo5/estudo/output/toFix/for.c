#include <stdio.h>

int main (void) {
    int i;

    for ( i=100; i > 10; i -= 3) {
        printf("%d \n", i);
    }
    return 0;
}