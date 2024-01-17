#include <stdio.h>
#include <string.h>

#define NUM_PRODUTOS 3

// Definição da estrutura para cada produto
typedef struct {
    int codigo;
    char descricao[50];
    float precoVenda;
} Produto;

// Sub-rotina para ler os dados dos produtos
void lerDadosProdutos(Produto produtos[], int numProdutos) {
    for (int i = 0; i < numProdutos; i++) {
        printf("Digite os dados para o produto %d:\n", i + 1);
        printf("Código: ");
        scanf("%d", &produtos[i].codigo);
        printf("Descrição: ");
        scanf("%s", produtos[i].descricao);
        printf("Preço de venda: ");
        scanf("%f", &produtos[i].precoVenda);
    }
}

// Sub-rotina para calcular a média dos preços de venda
float calcularMediaPrecos(Produto produtos[], int numProdutos) {
    float somaPrecos = 0;

    for (int i = 0; i < numProdutos; i++) {
        somaPrecos += produtos[i].precoVenda;
    }

    return somaPrecos / numProdutos;
}

// Sub-rotina para aplicar uma taxa sobre todos os valores
void aplicarTaxa(Produto produtos[], int numProdutos, float taxa) {
    for (int i = 0; i < numProdutos; i++) {
        produtos[i].precoVenda *= (1 + taxa);
    }
}

// Sub-rotina para apresentar todos os dados dos produtos
void apresentarDadosProdutos(Produto produtos[], int numProdutos) {
    printf("\nDados dos produtos:\n");

    for (int i = 0; i < numProdutos; i++) {
        printf("Produto %d:\n", i + 1);
        printf("Código: %d\n", produtos[i].codigo);
        printf("Descrição: %s\n", produtos[i].descricao);
        printf("Preço de venda: %.2f\n", produtos[i].precoVenda);
        printf("\n");
    }
}

int main(void) {
    Produto produtos[NUM_PRODUTOS];

    // Ler dados dos produtos
    lerDadosProdutos(produtos, NUM_PRODUTOS);

    // Calcular e apresentar a média dos preços de venda
    float mediaPrecos = calcularMediaPrecos(produtos, NUM_PRODUTOS);
    printf("Média dos preços de venda: %.2f\n", mediaPrecos);

    // Aplicar uma taxa sobre todos os valores
    float taxa;
    printf("Digite a taxa a ser aplicada: ");
    scanf("%f", &taxa);
    aplicarTaxa(produtos, NUM_PRODUTOS, taxa);

    // Apresentar todos os dados dos produtos após a aplicação da taxa
    apresentarDadosProdutos(produtos, NUM_PRODUTOS);

    return 0;
}
