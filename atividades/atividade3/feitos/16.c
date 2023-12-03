#include <stdio.h>
/*
// 1) leia esses dados para um número não determinado de pessoas 
2) retorne: 
    // TODO média de salário da população - salario
    // TODO a média do número de filhos - numero ffilhos
    //TODO o maior salário - maior salario
    TODO o percentual de pessoas com salário até R$350,00. 
*/



float mediaFilhos (int filhos, int populacao){
    return (float) filhos / populacao;
}


float mediaSalario (float salario, int populacao){
    return 1.0 * (salario / populacao);
}

int main (void){
    int in_num;
    float salario, maior_salario;

    int num_filhos = 0;
    int total_pessoas = 0;
    salario = 0;
    maior_salario = 0;
    float sum_salario = 0;
    int sum_filhos = 0;

    printf("Salario: ");
    scanf("%f", &salario);

    while (salario != 0) 
    {
        total_pessoas ++;
        sum_salario += salario;

        if (salario > maior_salario)
            maior_salario = salario;

        printf("Numero de filhos: ");
        scanf("%d", &num_filhos);
        sum_filhos += num_filhos;
        
        printf("Salario: ");
        scanf("%f", &salario);
    }

    float outSalario = mediaSalario(sum_salario, total_pessoas);
    float outFilhosMedia = mediaFilhos(sum_filhos, total_pessoas);

    printf("Media Salarial: %.2f\n", outSalario);
    printf("Media de Filhos: %.2f\n", outFilhosMedia);
    printf("Maior salario: %.2f", maior_salario);


    return 0;
}