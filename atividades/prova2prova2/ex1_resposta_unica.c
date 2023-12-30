#include <stdio.h>
int t (int a, int b, int c){

    if (a >= b + c || b >= a + c || c >= a + b)
        return 0;
    else if ((a == b) && (b == c)) 
        return 1;
    else if ((a != b) && (a != c) && ( b != c ))
        return 2;
    else 
        return 3;
}


int main (void)
{
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);

    if (t(x, y, z) == 0)
        printf (" Nao existe");
    else if (t(x, y, z) == 1)
        printf("Equilatero");
    else if (t(x, y, z) == 2)
        printf("Escaleno");
    else 
        printf("Isoceles");

    return 0;
}