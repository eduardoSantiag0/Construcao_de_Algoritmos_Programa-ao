#include <stdio.h>
#include <string.h>

#define MAX_SIZE 5
#define POPULACAO 2

// Um procedimento que receba o vetor de registro definido no exercício anterior (28), por parâmetro, 


typedef struct pessoa {
    int id;
    char sexo[20];
    char cor_olho[20];
    char cor_cabelo[20];
    int idade;

} Habitante;

typedef struct vetorPopulacao
{
    Habitante pessoa;
    int maiorIdade;
} Vetor;



void lerDados(Habitante *LaEla){
    printf("Sexo: %s, Cor do Olho: %s, Cor do Cabelo: %s, Idade: %d, ID; %d\n", LaEla->sexo, LaEla->cor_olho, LaEla->cor_cabelo, LaEla->idade, LaEla->id);
}

// e retorna também por parâmetro: a maior idade entre os habitantes
void encontrarMaiorIdade (Habitante *pessoa, int tamanho, int *maior){
    int i;
    *maior = 0;
    for (i=0; i < tamanho ;i++){
        if (pessoa[i].idade > *maior)
            *maior = pessoa[i].idade;
    }
}


// a quantidade de individuos do sexo feminino cuja idade está entre 18 e 35 (inclusive) e que tenham olhos verdes e cabelos louros. 

void contarLoiras (Habitante *pessoa, int tamanho, int *contador){
    *contador = 0;
    for (int i = 0; i < tamanho; i++) {
        if (strcmp(pessoa[i].sexo, "feminino") == 0 &&
            pessoa[i].idade >= 18 && pessoa[i].idade <= 35 &&
            strcmp(pessoa[i].cor_olho, "verde") == 0 &&
            strcmp(pessoa[i].cor_cabelo, "louros") == 0) {
            (*contador)++;
        }
    }
}



int main (void)
{
    Habitante pessoa[MAX_SIZE];

    int i,j, maiorIdade, contadorLoira;
    Vetor idade [POPULACAO];
    
    for (i=0; i < POPULACAO;i++){
        printf("ID: ");
        scanf("%d", &pessoa[i].id);

        printf("Informe o Sexo: ");
        scanf("%19s", pessoa[i].sexo);

        printf("Informe a cor dos olhos: ");
        scanf("%19s", pessoa[i].cor_olho);

        printf("Informe a cor do cabelo: ");
        scanf("%19s", pessoa[i].cor_cabelo);

        printf("Informe a idade: ");
        scanf("%d", &pessoa[i].idade);
    }



    for(j=0; j < POPULACAO; j++){
        lerDados(&pessoa[0]);
    }    

    encontrarMaiorIdade(pessoa, POPULACAO, &maiorIdade);
    printf("Maior idade: %d\n", maiorIdade);

    contarLoiras(pessoa, POPULACAO, &contadorLoira);
    printf("Numero de loiras: %d", contadorLoira);

    return 0;
}



