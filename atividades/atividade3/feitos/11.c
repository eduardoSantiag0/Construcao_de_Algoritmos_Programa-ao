#include <stdio.h>

// Faça uma função que recebe a média final de um aluno por parãmetro e retorna o seu conceito, conforme a tabela abaixo: 

char determinarConceito(float media) {
    char conceito;

    if (media >= 9.0) {
        conceito = 'A';
    } else if (media >= 7.0 && media < 9.0) {
        conceito = 'B';
    } else if (media >= 5.0 && media < 7.0) {
        conceito = 'C';
    } else if (media >= 4.0 && media < 5.0) {
        conceito = 'D';
    } else {
        conceito = 'F';
    }

    return conceito;
}

int main(void) {
    float mediaAluno;
    
    printf("Digite a media final do aluno: ");
    scanf("%f", &mediaAluno);

    char conceito = determinarConceito(mediaAluno);

    printf("Conceito do aluno: %c\n", conceito);

    return 0;
}
