#include <stdio.h>
#include <stdlib.h>


#define TAM 3

typedef struct
{
    int ID;
    int quantidadeDisponivel;
    float preco;

} Produtos;

//? Descobrir o Produto com Maior quantidade no estoque
//? Descobrir o Produto com Menor Preço
    
//* int** ptrMatrizOut = (int **) malloc (LINHA * sizeof(int *));  // Linha de Indices


int main (void)
{
    Produtos *ptrVetorProdutos;
    int i, j;

    ptrVetorProdutos = (Produtos *) malloc (TAM * sizeof(Produtos));
    if (ptrVetorProdutos == NULL)
        return 1;
    
    for ( i = 0; i < TAM; i++){
        printf("ID: \n");
        scanf("%d", &ptrVetorProdutos[i].ID);
        
        printf("Quantidade: \n");
        scanf("%d", &ptrVetorProdutos[i].quantidadeDisponivel);

        printf("Preco: \n");
        scanf("%f", &ptrVetorProdutos[i].preco);
        printf("\n");
    }


    //* Criação de ponteiros auxiliares para armazenar o endereço do resultado

    Produtos *ptrMaiorQuantidade = &ptrVetorProdutos[0];
    Produtos *ptrMelhorPreco = &ptrVetorProdutos[0];
    printf("Antes Endereco Maior Quantidade:  %p \n", ptrMaiorQuantidade);

    for (i = 0; i < TAM ; i++) {

        if (ptrVetorProdutos[i].quantidadeDisponivel > ptrMaiorQuantidade->quantidadeDisponivel)

            ptrMaiorQuantidade = &ptrVetorProdutos[i]; 

        if (ptrVetorProdutos[i].preco < ptrMelhorPreco->preco)
        
            ptrMelhorPreco = &ptrVetorProdutos[i];
    }
    // Criar um ponteiro olhando para o primeiro item do vetor
    // Iterar sobre os outros items e, caso algum seja maior, apontar ele para o maior
    // Printar o ID do endereço em que o ponteiro está olhando

    printf("Depois Endereco Maior Quantidade %p \n", ptrMaiorQuantidade);
    printf("Maior quantidade eh do ID: %d \n", ptrMaiorQuantidade->ID);
    printf("Melhor preco ID: %d \n", ptrMelhorPreco->ID);
    printf("\n");
    printf("Endereco do Melhor Preco: %p \n", ptrMelhorPreco);
    printf("Endereco do Produto 1: %p \n", ptrVetorProdutos[0]);
    printf("Endereco do Produto 2: %p \n", ptrVetorProdutos[1]);
    printf("Endereco do Produto 3: %p \n", ptrVetorProdutos[2]);

    // Limpando a matriz
    free(ptrVetorProdutos);
    free(ptrMaiorQuantidade);
    free(ptrMelhorPreco);


    return 0;
}