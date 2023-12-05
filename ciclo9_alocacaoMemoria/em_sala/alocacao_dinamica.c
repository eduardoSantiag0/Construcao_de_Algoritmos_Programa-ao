#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    float *p;

    p = (float *)malloc(sizeof(float)); // É o tamanho do pedido do Papai Noel;

    if (p == NULL)
        return (1);
    
    *p = 10.5;
    
    printf("%f\n", *p);

    free(p); // Permite que esse endereço seja utilizado novamente;

    return 0;
}