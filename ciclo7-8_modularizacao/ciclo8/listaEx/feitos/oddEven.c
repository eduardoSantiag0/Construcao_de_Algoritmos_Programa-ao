#include <stdio.h>

int check(num){
    return (num % 2 == 0) ? 0 : 1;
}

// (age >= 18) ? printf("Can Vote") : printf("Cannot Vote");

int main (void){
    int in_num;

    printf("Numero: ");
    scanf("%d", &in_num);

    int placeholder = check(in_num);
    (placeholder == 0) ? printf("Even") : printf("Odd");
    
    return 0;
}