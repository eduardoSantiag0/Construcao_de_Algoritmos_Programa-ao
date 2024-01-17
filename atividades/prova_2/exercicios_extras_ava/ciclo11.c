#include <stdio.h>
#include <stdlib.h>
// Escreva uma função em C que atenda a especificação:

// Nome: iguais
// Tipo de retorno: int
// Parâmetros: dois registros (struct dados) contendo vetores


// struct dado{
//     int tamanho;              // quantidade de posicoes validas
//     int dado[TAMANHO_MAXIMO]; // vetor com os dados
// };

// Por exemplo, se o campo tamanho tiver valor 5, então as posições válidas do vetor dado são as de índice de 0 a 4. As demais posições são irrelevantes.

#define TAMANHO_MAXIMO 10

//todo A função deve retornar 0 (falso) caso haja qualquer diferença entre os vetores, seja no comprimento ou seja no conteúdo (valores e ordem desses valores); 
//todo Ou deve retornar um valor diferente de zero (verdadeiro) caso os vetores sejam iguais. Somente os valores válidos devem ser comparados; os lixos devem ser ignorados.

struct dado{
    int tamanho;              // quantidade de posicoes validas
    int dado[TAMANHO_MAXIMO]; // vetor com os dados
};

// int iguais (struct dado vetor1, struct dado vetor2){
//     int i, j;

//     if (vetor1.tamanho == vetor2.tamanho){
//         for (i = 0 ; i < TAMANHO_MAXIMO; i++){
//             if (vetor1.dado[i] != vetor2.dado[i])
//                 return 0;
//         }
//     } 

//     return 1;

// }

//! 1 = são idênticos
//! 0 = tem diferença



int iguais(struct dado vetor1, struct dado vetor2) {
    int i, j;


    for ( i = 0; i < vetor1.tamanho; i++) {
        for (j = 0; j < vetor2.tamanho; j++){
            printf("i) %d -> Vetor 1: %d e Vetor 2:  %d\n", i, vetor1.dado[i], vetor2.dado[j]);
            if (vetor1.dado[i] != vetor2.dado[j]) {
                return 0; 
            }
        }
    }

    return 1; 
}

int main (void)
{
    struct dado vetorA = {5, {1, 2, 3, 4, 5}};
    vetorA.tamanho = 5;
    struct dado vetorB = {5, {1, 2, 3, 4, 5}};
    vetorB.tamanho = 5;

    

    int resultado = iguais(vetorA, vetorB);

    printf("->  %d  <-", resultado);


    return 0;
}