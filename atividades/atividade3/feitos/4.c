#include <stdio.h>
#include <math.h>

// Procedimento que recebe por parâmetro os valores necessário para o cálculo da fórmula de báskara e 
// retorna, também por parâmetro, as suas raízes, caso seja possível calcular. 


void calcularRaizes(float a, float b, float c, float *raiz1, float *raiz2) {
    float delta = b * b - 4 * a * c;

    if (delta >= 0) {
        *raiz1 = (-b + sqrt(delta)) / (2 * a);
        *raiz2 = (-b - sqrt(delta)) / (2 * a);
    } else {
        *raiz1 = *raiz2 = NAN; // Define as raízes como NaN (Not a Number) se delta for negativo
    }
}

int main() {
    float a, b, c, raiz1, raiz2;

    printf("Digite os valores de a, b e c da equacao quadratica (ax^2 + bx + c): \n");
    scanf("%f %f %f", &a, &b, &c);

    calcularRaizes(a, b, c, &raiz1, &raiz2);

    if (!isnan(raiz1) && !isnan(raiz2)) {
        printf("As raizes da equacao sao: %.2f e %.2f\n", raiz1, raiz2);
    } else {
        printf("Nao e possivel calcular as raizes da equacao.\n");
    }

    return 0;
}
