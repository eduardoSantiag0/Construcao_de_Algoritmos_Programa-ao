#include <stdio.h>
#include <stdlib.h>

//// Percorra essa matriz com um ponteiro P de forma semelhante como demonstrado no capítulo sobre reflexões para comprovar ou não que a matriz alocada não tem espaços de memória contíguos

//// Tente com vários tamanhos e apresente um relatório sobre as execuções que realizou. 

//// Aproveite para testar a alocação com malloc e calloc e 

//// veja se os valores alocados com malloc apresentam uniformidade ou podem apresentar valores aleatórios (lixo). 

//// Veja, também, se o espaço de memória retornado por calloc vem zerado, conforme indica a documentação. 

#define LINHA 5
#define COLUNA 5

void mallocZerado (int **pMatriz){
    int i, j;

    for(i = 0; i < LINHA; i++) {
        pMatriz[i] = (int *)malloc(COLUNA * sizeof(int));

        if (pMatriz[i] == NULL)
            return;
    }

    for (i = 0; i < LINHA; i++) {
        for (j = 0; j < COLUNA; j++) {
            pMatriz[i][j] = i + j; 
        }
    }
    printf("\n");

    for (i = 0; i < LINHA; i++) {
        for (j = 0; j < COLUNA; j++) {
            printf("%d ", &pMatriz[i][j]); 
        }
        printf("\n");
    }
    
    for (i = 0; i < LINHA; i++) {
        free(pMatriz[i]);
    }
    free(pMatriz);
}

void callocZerado(int **pMatriz){
    int i, j;

    for(i = 0; i < LINHA; i++) {
        pMatriz[i] = (int *)calloc(COLUNA, sizeof(int));

        if (pMatriz[i] == NULL)
            return;
    }

    for (i = 0; i < LINHA; i++) {
        for (j = 0; j < COLUNA; j++) {
<<<<<<< HEAD:ciclo9_alocacaoMemoria/em_sala/ativ4/atividade4.c
            printf("%d ", pMatriz[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < LINHA; i++) {
        for (j = 0; j < COLUNA; j++) {
            printf("%d ", &pMatriz[i][j]); 
=======
            printf("%p ", &pMatriz[i][j]); 
>>>>>>> 9955e820650fbbd78a97ffa3db0027714d40b4c2:atividades/atividade4/ativ4/atividade4.c
        }
        printf("\n");
    }
    
    //* Liberando a memoria alocada
    for (i = 0; i < LINHA; i++) {
        free(pMatriz[i]);
    }
    free(pMatriz);
}


void usandoMalloc(int **pMatriz){
    int i, j;

    //* Iniciando a os ponteiros
    for(i = 0; i < LINHA; i++) {
        pMatriz[i] = (int *)malloc(COLUNA * sizeof(int));

        if (pMatriz[i] == NULL)
            return;
    }

    //* Preenchendo a matriz
    for (i = 0; i < LINHA; i++) { 
        for (j = 0; j < COLUNA; j++) {
            pMatriz[i][j] = i + j; 
        }
    }


    
    //* Imprimindo o endereço de cada elemento da matriz
    for (i = 0; i < LINHA; i++) {
        for (j = 0; j < COLUNA; j++) {
            printf(" %d ", &pMatriz[i][j]);
        }
        printf("\n");
    }
}


void usandoCalloc(int **pMatriz){
    int i, j;

    for(i = 0; i < LINHA; i++){
        pMatriz[i] = (int *)calloc(COLUNA, sizeof(int));

        if (pMatriz[i] == NULL)
            return;
    }

    for (i = 0; i < LINHA; i++) {
        for (j = 0; j < COLUNA; j++) {
            pMatriz[i][j] = i + j; 
        }
    }


 
    for (i = 0; i < LINHA; i++) {
        for (j = 0; j < COLUNA; j++) {
            printf(" %d ", &pMatriz[i][j]);
        }
        printf("\n");
    }
}

int main (void)
{
    int **pMatriz;
    int i, j;


    //* Ponteiro para linhas da matriz
    pMatriz = (int **)malloc(LINHA * sizeof(int*));
    if (pMatriz == NULL)
        return 1;

    
    //* Chamando Funções
    printf("\n");
    printf("\t Endereco do ponteiro --> %d \n\n", &pMatriz);
    
    printf("\n\n");

<<<<<<< HEAD:ciclo9_alocacaoMemoria/em_sala/ativ4/atividade4.c
    printf("\tUsando Malloc\n");
    usandoMalloc(pMatriz);
    printf("\n\n");
    
    printf("\tUsando Calloc\n");
    usandoCalloc(pMatriz);
    printf("\n\n");

    printf("\tUsando Malloc para ver se Apresenta Lixo\n");
    mallocZerado(pMatriz);
    printf("\n\n");

    printf("\tTestando com Calloc\n");
=======
    printf("\t Malloc: \n");
    usandoMalloc(pMatriz);
    printf("\n\n");
    printf("\t Calloc: \n");
    usandoCalloc(pMatriz);
    printf("\n\n");
    printf("\t Malloc Zerado: \n");
    mallocZerado(pMatriz);
    printf("\n\n");
    printf("\t Calloc Zerado: \n");
>>>>>>> 9955e820650fbbd78a97ffa3db0027714d40b4c2:atividades/atividade4/ativ4/atividade4.c
    callocZerado(pMatriz);


    printf("\n\n");


    //* Imprimindo os resultados
    for (i = 0; i < LINHA; i++) {
        for (j = 0; j < COLUNA; j++) {
            printf(" %d ", pMatriz[i][j]);
        }
        printf("\n");
    }

    //* Liberando espaço
    for (i = 0; i < LINHA; i++) {
        free(pMatriz[i]);
    }

    return 0;
}
