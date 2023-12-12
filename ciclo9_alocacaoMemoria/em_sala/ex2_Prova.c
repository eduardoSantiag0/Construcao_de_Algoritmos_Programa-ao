#include <stdio.h>
#include <stdlib.h>


//todo Criar tipos de dados
//todo struct Nome, Sobrenome, Data de Nascimento, RG, Altura e Peso
//todo Criar vetor de 5 posiçções (Estática e Dinâmica)

#define tam 5

typedef struct {
    char Nome[30];
    char Sobrenome[30];
    int Ano_Nascimento;
    int RG;
    int Altura;
    int Peso;
} Cadastro;


int main (void)
{
    int i;

    printf("\t ESTATICA");
    printf("\n");

    Cadastro pessoas[tam] = {
        {"Jose", "Silva", 2001, 50060070011, 170, 75},
        {"Maria", "Silva", 2005, 50060070012, 160, 60},
        {"Joao", "Silva", 1998, 50060070013, 180, 80},
        {"Ana", "Silva", 2003, 50060070014, 165, 55},
        {"Pedro", "Silva", 1995, 50060070015, 175, 70}
    };

    for (i=0;i<tam;i++)
    {
        printf("%d\n", pessoas[i].Ano_Nascimento);
    }

    //!!!

    printf("\t DINAMICA");
    printf("\n");

    Cadastro *pCadastro;
    pCadastro = (Cadastro*) malloc (tam * sizeof (Cadastro));
    if (pCadastro == NULL)
        return 1;
    

    for (i=0;i<tam;i++) {
        pCadastro[i] = pessoas[i];
    }

    for (i=0;i<tam;i++) {
        printf("%d\n", pCadastro[i].Ano_Nascimento);
    }


    free(pCadastro);

    return 0;
}