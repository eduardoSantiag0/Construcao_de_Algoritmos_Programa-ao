#include <stdio.h>

int recFunc(int input)
{
    if (input == 0)
        return 1;
    else
        return recFunc(input - 1) * input;
}

int main (void)
{
    int numero = 5;
    int out = recFunc(numero);

    printf("%d", out);

    return 0;

}