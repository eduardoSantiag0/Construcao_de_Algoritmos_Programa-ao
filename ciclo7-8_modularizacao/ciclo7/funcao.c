#include <stdio.h>

float absoluto(float); // Protótipo, avisa ao compilador de antemão sobre a função.


int main(void) 
{
    float x;
    
    x = -30;
    
    printf("O absoluto de %.3f = %.3f\n",x,absoluto(x));
    
    return 0;
}

// float absoluto(float x) //! Função Normal
// {
//     if (x < 0)
//         return -x;
//     else
//         return x;
// }

float absoluto(float x) //! Função Ternária.
{
    return (x < 0) ? -x : x;
}