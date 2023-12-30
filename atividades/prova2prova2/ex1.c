#include <stdio.h>

// Exercicio feito por Eduardo Rosalin - 802539 e Eduardo Sanzovo Quaggio - 813641


// Resposta Duas Funções
int formacao (int a, int b, int c){
    if (a >= b + c || b >= a + c || c >= a + b)
        return 0;
    else 
        return 1;
}

int triangulo (int x, int y, int z){
    if ((x == y) && (y == z)){
        return 1;
    } else if ((x != y) && (x != z) && (y != z)){
        return 3;
    } else {
        return 2;
    }
}


int main (void)
{
    int f, g, h;
    scanf("%d %d %d", &f, &g, &h);

    if (formacao(f, g, h) == 0)
        printf("Nao forma triangulo");
    else {
        if ((formacao(f, g, h) == 1 )&& (triangulo(f, g, h) == 1))
            printf("Equilatero\n");
        else if ((formacao(f, g, h) == 1 ) && (triangulo(f, g, h) == 2))
            printf("Isoceles\n");
        else
            printf("Escaleno");
    }

    return 0;

}


// Resposta Única

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