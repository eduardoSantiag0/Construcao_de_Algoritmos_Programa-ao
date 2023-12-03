#include <stdio.h>


int ret(int num){
    return (num % 2 == 0) ? num + 10 : num + 30;
    //return (num % 2 == 0) ? 0 : 1;
    // if (num % 2 == 0){
        // return num + 10;
    // } else {
        // return num + 30;
    // }
}


int main (void){
    int in_num, i;
    printf("Numero: ");
    scanf("%d", &in_num);

    for (i = 0; i <= in_num; i++){
        int out = ret(i);
        printf("\t\t%d\n", out);
    }

    return 0;
}