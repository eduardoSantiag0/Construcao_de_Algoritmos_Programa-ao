#include <stdio.h>
int main (void)
{
    int num = 20;
    int *pNum = &num;

    printf("%d\n", num);
    printf("%d\n", pNum); // Endereço de num
    printf("%d\n", *pNum); // Valor no endereço 

    *pNum = 30; 

    printf("%d\n", num);

    return 0;


}