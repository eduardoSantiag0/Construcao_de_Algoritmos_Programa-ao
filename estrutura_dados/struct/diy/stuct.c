// Foi realizada uma pesquisa entre 500 habitantes de uma certa região. De cada habitante foram coletados os dados: idade, sexo, salário e número de filhos. Faça um procedimento que leia esses dados em um vetor de registro. O vetor de registro deve ser enviado por referência. 

#include <stdio.h>


typedef struct pessoa
{
    int idade;;
    float salario;
    char sexo;
    int num_filhos;
} Habitante;

void imprimirDados(Habitante *cidadao){
    printf("&d\n", cidadao->idade);
    printf("&c\n", cidadao->sexo);
    printf("&f\n", cidadao->salario);
    printf("&d\n", cidadao->num_filhos);
}

void lerDados(Habitante *cidadao)
{
    printf("Idade: ");
    scanf("%d", &cidadao->idade);

    printf("Sexo: ");
    scanf("%c", &cidadao->sexo);

    printf("Salario: ");
    scanf("%f", &cidadao->salario);

    printf("Filhos: ");
    scanf("%d", &cidadao->num_filhos);
}

int main (void){

    Habitante Olar;

    // Criar uma instancia ccom o nome da pessoa
    // Ler dados, colocando a instancia recem-criada no procedimento
    // Imprimir dados


    lerDados(&Olar);
    imprimirDados(&Olar);


    return 0;
}