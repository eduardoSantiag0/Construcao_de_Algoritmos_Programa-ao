#include <stdio.h>

typedef struct pessoa
{
    char nome[50];
    float conta_bancaria;
    int idade;
    int cpf;
    int ano_nascimento;
    struct ufscar;

} alguem;

struct ufscar
{
    int r_a;
    int ano_ingressado;
    int ano_conclusao;
    int aprovado;


};



int main (void){

    alguem Pedro; // Criar uma instância 

    printf ("Inserir idade:") ;
    scanf("%d", &Pedro.idade);

    printf ("Inserir idade:") ;
    scanf("%d", &Pedro.ano_nascimento);

    printf("%d", Pedro.idade);
    printf("%d", Pedro.ano_nascimento);

    return 0;
}