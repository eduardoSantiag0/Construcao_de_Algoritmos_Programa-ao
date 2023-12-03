#include <stdio.h>


int main (void){

    int age = 21;
    int *pAge = &age;

    printf("%d\n", sizeof(age));    
    printf("%d\n", sizeof(pAge));    
    printf("%d\n", sizeof(*pAge));    

    return 0;
}