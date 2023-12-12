#include <stdio.h>
#include <stdlib.h>

//// - Código de identificação do produto: representado por um valor inteiro
//// - Nome do produto: com até 50 caracteres
//// - Quantidade disponível no estoque: representado por um número inteiro
//// - Preço de venda: representado por um valor real
//// a) Defina uma estrutura, denominada produto, que tenha os campos apropriados para guardar as informações de um produto.
//// b) Crie um conjunto de N produtos (N e um valor fornecido pelo usuário e peca ao usuário para entrar com as informações de cada produto.
//// c) Encontre o produto com o maior preço de venda
//// d) Encontre o produto com a maior quantidade disponível no estoque
#define SIZE 2

typedef struct
{
    int ID;
    int quantidadeDisponivel;
    float preco;

}Produtos;


int main (void)
{
    Produtos **ptrVetorProdutos;
    int i, j;

    ptrVetorProdutos = (Produtos **)malloc (SIZE * sizeof(Produtos));
    if (ptrVetorProdutos == NULL)
        return 1;
    
    for ( i = 0; i < SIZE; i++){
        printf("ID: \n");
        scanf("%d", &ptrVetorProdutos[i]->ID);
        printf("Quantidade: \n");
        scanf("%d", &ptrVetorProdutos[i]->quantidadeDisponivel);
        printf("Preco: \n");
        scanf("%f", &ptrVetorProdutos[i]->preco);
        printf("\n");
    }


    //* Criação de Vetores auxiliares para armazenar o resultado
    Produtos *ptrMaiorQuantidade = ptrVetorProdutos[0];
    Produtos *ptrMelhorPreco = ptrVetorProdutos[0];
    printf("\t Antes Endereco %p \n", ptrMaiorQuantidade);

    for (i = 0; i < SIZE ; i++) {

        if (ptrVetorProdutos[i]->quantidadeDisponivel > ptrMaiorQuantidade->quantidadeDisponivel)
            ptrMaiorQuantidade = ptrVetorProdutos[i]; 


        if (ptrVetorProdutos[i]->preco < ptrMelhorPreco->preco)
            ptrMelhorPreco = ptrVetorProdutos[i];
    }
    // Criar um ponteiro olhando para o primeiro item do vetor
    // Iterar sobre os outros items e, caso algum seja maior, apontar ele para o maior
    // Printar o ID do endereço em que o ponteiro está olhando

    printf("Maior quantidade eh do ID: %d \n", ptrMaiorQuantidade->ID);
    printf("Melhor preco ID: %d \n", ptrMelhorPreco->ID);
    printf("Endereco do Melhor Preco: %p \n", ptrMelhorPreco);
    printf("Depois Endereco %p \n", ptrMaiorQuantidade);
    printf("Endereco do Produto 1: %p \n", ptrVetorProdutos[0]);
    printf("Endereco do Produto 2: %p \n", ptrVetorProdutos[1]);


    return 0;
}