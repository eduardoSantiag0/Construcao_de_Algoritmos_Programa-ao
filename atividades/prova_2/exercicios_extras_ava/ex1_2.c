#include <stdio.h>

int main(void){
    int tamanho = 3;

    double vet[tamanho] = {1, 2, 3}; // Initialize the array directly

    double media = 0.0;
    int soma = 0;
    int i, divisores = 0;

    for (i = 0; i < tamanho; i++) {
        if (vet[i] > 0){
            soma += vet[i];
            divisores++;
        }
    }

    // Avoid division by zero
    if (divisores != 0) {
        media = (double)soma / divisores; // Ensure floating-point division
        printf("Average of positive numbers entered: %lf\n", media);
    } else {
        printf("No positive numbers entered.\n");
    }

    return 0;
}