#include <stdio.h> 

int verify (int num){
    return (num>1) ? 1 : 0;
}

int main (void){

    int in_num;

    printf("Num: ");
    scanf("%d", &in_num);

    int out_booleo = verify(in_num);

    if (out_booleo == 1)
        printf("POSITIVO :>");
    else
        printf("negativo :(");

    return 0;
}