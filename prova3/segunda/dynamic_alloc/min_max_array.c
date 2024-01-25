#include <stdio.h>
#include <stdlib.h>


// O seu programa deve implementar uma função que receba um vetor de inteiros V e retorne um outro vetor de inteiros alocado dinamicamente com todos os valores de V que estejam entre o valor mínimo e máximo (que também são passados como parâmetro para a função)

//* A função deve:
// - Verificar a quantidade de elementos do vetor que sejam maiores do que min e menores que max;
// - Caso a quantidade seja maior do que 0 (zero), alocar dinamicamente uma área do exato tamanho necessário para armazenar os valores;
// - Copia os elementos do vetor que sejam maiores do que min e menores que max para a área alocada dinamicamente.

//* A função retorna:
// - O endereço da área alocada dinamicamente, preenchida com os números maiores do que min e menores que max, ou NULL, caso essa relação de números não tenha sido criada;
// - A quantidade de números carregados na área alocada dinamicamente, através do parâmetro qtd


// Em seguida, crie a função principal do programa para inicializar um vetor de inteiros, exibir esses valores na tela e pedir para o usuário digitar o valor mínimo e máximo a ser buscado. 
// Em seguida o programa deverá chamar a função valores_entre e exibir na tela os valores resultantes. Lembre-se de exibir uma mensagem de erro caso nenhum valor seja encontrado. Não se esqueça de liberar a memória alocada dinamicamente.

int* valores_entre (int vetor[], int num_elem, int min, int max, int *qtd)
{
    int i;
    int contador = 0;
    // Verificar a quantidade de elementos do vetor que sejam maiores do que min e menores que max;
    for (i = 0; i < num_elem; i++) {
        if (vetor[i] >= min && vetor[i] <= max) {
            contador++;
        }
    }

    if (contador == 0) {
        printf("Nao existem numeros nesse intervalo");
        *qtd = 0;
        return NULL;
    }

    int *ptr = malloc (sizeof (int) * contador);

    // - Copia os elementos do vetor que sejam maiores do que min e menores que max para a área alocada dinamicamente.
    int index_ptr = 0;
    for (i= 0; i < num_elem; i++) {
        if (vetor[i] >= min && vetor[i] <= max) {
            ptr[index_ptr] = vetor[i];
            index_ptr++;
        }
    }

    *qtd = index_ptr;

    return ptr;
}

int main (void)
{
    int array1[10] = {5, 20, 43, 54, 113, 178, 203, 221, 250};

    int min, max;
    int qtd = 0;
    printf("Informe o intervalor (max-min) para ser buscado no array\n");
    printf("Min: \n");
    scanf("%d",&min);
    printf("Max: \n");
    scanf("%d",&max);

    int *ptr_out = valores_entre (array1, 10, min, max, &qtd);

    if (qtd > 0) {
        int i;
        printf("Valores encontrados no intervalo: \n");
        for (i = 0; i < qtd; i++) {
            printf("%d ", ptr_out[i]);
        }
    }

    free(ptr_out);
    return 0;
}