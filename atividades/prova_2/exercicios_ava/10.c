#include <stdio.h>
#include <stdlib.h>

// Um sistema de cartão de crédito armazena dados dos seus clientes sobre perfil de gastos. 
// Em geral, as despesas foram classificadas em mobilidade, alimentação, educação, manutenção, impostos_diretos, moveis, imóveis e outros. Assim, gastos com combustível, bilhete de ônibus ou metrô são classificados como mobilidade; gastos com escola dos filhos, escola de inglês ou aulas de informática são classificados como gastos com educação; troca de óleo do carro, troca do filtro de combustível ou troca de pneu são classificadas como manutenção (assim como despesas com o encanador ou eletricista para a casa); IPVA ou IPTU são impostos_diretos; as compras de um carro e de um computador são classificadas como um bens móveis; a compra de um terreno ou uma casa seria classificada como sendo um bem imóvel.

// Você foi escolhido(a) para desenvolver um software para o município de São Paulo envolvendo padrão de consumo (e utilizará os dados do cartão de crédito para isso). O município de São Paulo é dividido em 32 subprefeituras. Foram sorteadas 10 pessoas que moram em cada uma das  32 regiões que compõem as 32 subprefeituras.  As regiões serão denominadas pelo número administrativo (de 0 a 31). 


//* O software deverá permitir que o usuário escolha um perfil de gasto (mobilidade, alimentação, educação, manutenção, impostos diretos, moveis, imóveis ou outros) e o software deverá informar:

// ·        Média de gastos dentre os moradores das 32 subprefeituras para aquela categoria;

// ·        Subprefeitura cujos moradores apresentaram o maior gasto naquela categoria;

// ·        Subprefeitura cujos moradores apresentaram o menor gasto para aquela categoria;

// Também é possível que o usuário escolha uma análise de uma subprefeitura qualquer (indicando o número dela). Aí o software deverá informar qual o gasto médio dos cidadãos daquela subprefeitura, qual categoria apresentou maior gasto e qual categoria apresentou menor gasto.

//* Gasto médio de determinada região
//* Média de gastos dentre os moradores das 32 subprefeituras para aquela categoria
//* Subprefeitura cujos moradores apresentaram o maior gasto naquela categoria
//* Subprefeitura cujos moradores apresentaram o menor gasto para aquela categoria
//* Qual categoria apresentou maior gastos
//* Qual categoria apresentou menor gastos

#define NUM_REGIAO 32

typedef struct 
{
    int numero_administrativo;
    float mobilidade; 
    float alimentacao; 
    float educacao; 
    float manutencao;
    float impostos_diretos; 
    float moveis;
    float imoveis;
    float outros;
    
} Subprefeitura;

void regiao_Maior_Menor (Subprefeitura Regiao[]){
    int i;
    float *ptr = &Regiao->mobilidade;

    float maiorGasto, menorGasto;

    for (i = 0 ; i < 8; i++){ 
        float *proximo = ptr + 1;
        if (*proximo > *ptr)
            maiorGasto = *proximo;
        if (*proximo < *ptr)
            menorGasto = *proximo;
    }

    printf("%d", maiorGasto);
    printf("%d", menorGasto);

}

void regiao_Media_Gastos (Subprefeitura Regiao[]){
    float maiorGastoRegiao, menorGastoRegiao;
    float mediaGastoRegiao = 0.0;
    float out = 0.0;

    out = (Regiao->mobilidade + Regiao->educacao + Regiao->alimentacao + Regiao->manutencao +Regiao->impostos_diretos + Regiao->moveis + Regiao->imoveis + Regiao->outros )/ 8.0;

    printf("A media de gastos sao %.2f\n", out);

}


void media_GastosCategoria (Subprefeitura Regiao[], int categoria){
    int i;
    float contador = 0.0;
    float gasto = 0.0;
    float maiorGasto, menorGasto, gasto;
    int maiorGasto_ID, menorGasto_ID;

    for (i = 0; i < 32; i++){
        switch (categoria){
            case 1:
                gasto = Regiao[i].mobilidade; break;
            case 2:
                gasto = Regiao[i].alimentacao; break;
            case 3:
                gasto = Regiao[i].educacao; break;
            case 4:
                gasto = Regiao[i].manutencao; break;
            case 5:
                gasto = Regiao[i].impostos_diretos; break;
            case 6:
                gasto = Regiao[i].moveis; break;
            case 7:
                gasto = Regiao[i].imoveis; break;
            case 8:
                gasto = Regiao[i].outros; break;
            default:
                printf("Categoria invalida!\n");
                return;
            
            contador += gasto;

            if (gasto > maiorGasto){
                maiorGasto = gasto;
                maiorGasto_ID = Regiao[i].numero_administrativo;
            }
            if (gasto < menorGasto){
                menorGasto = gasto;
                menorGasto_ID = Regiao[i].numero_administrativo;
            }
            
        }
    
    }
    float out = contador / NUM_REGIAO;

    printf("A media de gastos nessa categoria: %.2f\n", out);
    
    printf("Maior Gasto dessa categoria: %d\n",maiorGasto);
    printf("Numero Administrativo do Maior Gasto: %d\n",maiorGasto_ID);

    printf("Menor Gasto dessa categoria: %d\n",menorGasto);
    printf("Numero Administrativo do Menor Gasto: %d\n",menorGasto_ID);

}



int main (void)
{
    int i, inCategoria, inRegiao;

    Subprefeitura  Regiao[NUM_REGIAO];

    printf("Escolha um perfil de gasto (1-8): ");
    scanf("%d", &inCategoria);


    media_GastosCategoria (Regiao, inCategoria);

    printf("Escolha uma regiao (Entre com o codigo administrativo): ");
    scanf("%d", &inRegiao);

    for ( i = 0; i < NUM_REGIAO; i++){
        if (Regiao[i].numero_administrativo == inRegiao)
            regiao_Maior_Menor_Media_Gastos (&Regiao[i]);
            regiao_Maior_Menor (&Regiao[i]);
        
    }


    return 0;
}