#include <stdio.h>

int mdc(int numUm, int numDois){
    int maior = numUm;
    if (numDois > numUm)
        maior = numDois;
    
    
}

int main (void){
    int numUm, numDois;

    printf("Um: ");
    scanf("%d", &numUm);

    printf("Dois: ");
    scanf("%d", &numDois);

    int out = mdc(numUm, numDois);
    printf("%d", out);

    return 0;
}