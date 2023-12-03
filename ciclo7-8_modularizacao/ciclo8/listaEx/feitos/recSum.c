#include <stdio.h>
// Write a program in C to calculate the sum of numbers from 1 to n using recursion.
// Input the last number of the range starting from 1 : 5
// Expected Output:

// The sum of numbers from 1 to 5 : 
// 15

int sum(int num){

    if (num == 1) {
        return 1;
    } else {
        return num + sum(num - 1);
    }

}

int main (void){
    int in_limit;

    printf("Numero: ");
    scanf("%d", &in_limit);

    int output = sum(in_limit);

    printf("Resultado: %d", output); 

    return 0;
}