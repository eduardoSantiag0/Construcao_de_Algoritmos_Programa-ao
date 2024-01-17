#include <stdio.h>
#include <stdlib.h>

// Faça um programa em C que leia duas matrizes numéricas (pode ser números inteiros ou reais) de dimensões iguais cujos tamanhos devem ser escolhidos pelo usuário 
// e gere uma terceira matriz que é o resultado da soma das duas e imprima a resposta (a matriz resultante).

int** somaMatrizes (int **matriz1, int **matriz2,  int linha, int coluna){
    int i, j;

    int **resultante = malloc (linha * sizeof(int *));
    if (resultante == NULL)
        return;
    
    for (i = 0; i < linha ;i++){
        resultante[i] = malloc ( coluna * sizeof(int));
        if (resultante[i] == NULL)
            return;
    }

    for (i = 0; i < linha; i++){
        for ( j = 0; j < coluna; j++){
            resultante[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }

    return resultante;
}


int main (void)
{
    int i, j, inputColuna, inputLinha;

    printf("Linha: \n");
    scanf("%d", &inputLinha);
    printf("Coluna: \n");
    scanf("%d", &inputColuna);

    //* Criando primeira matriz
    int **array1 = malloc (inputLinha * sizeof(int *));
    if (array1 == NULL)
        return 1;
    
    for (i = 0; i < inputLinha ;i++){
        array1[i] =  (int*) malloc ( inputColuna * sizeof(int));
        if (array1[i] == NULL)
            return 1;
    }


    //* Criando segundo matriz

    int **array2 = malloc (inputLinha * sizeof(int *));
    if (array2 == NULL)
        return 1;
    
    for (i = 0; i < inputLinha ;i++){
        array2[i] = (int*) malloc ( inputColuna * sizeof(int));
        if (array2[i] == NULL)
            return 1;
    }



    for (i = 0; i < inputLinha; i++){
        for (j = 0; j < inputColuna; j++){ //!!!!!!!!!!!!!!!
            printf("Linha: %d e Coluna %d da Primeira Matriz: ", i, j);
            scanf("%d", &array1[i][j]);
            printf("\n");
            printf("Linha: %d e Coluna %d da Segunda Matriz: ", i, j);
            scanf("%d", &array2[i][j]);
        }
    }

    //* Chamando função de Soma
    int **matrizResultante = somaMatrizes(array1, array2, inputLinha, inputColuna);

    if (matrizResultante == NULL)
        return 1;



    printf("Matriz 1: \n");
    for (i = 0; i < inputLinha; i++){
        for ( j = 0; j < inputColuna; j++){
            printf("%d ", array1[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    printf("Matriz 2: \n");
    for (i = 0; i < inputLinha; i++){
        for ( j = 0; j < inputColuna; j++){
            printf("%d ", array2[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    printf("Matriz Resultante: \n");

    for (i = 0; i < inputLinha; i++){
        for ( j = 0; j < inputColuna; j++){
            printf("%d ", matrizResultante[i][j]);
        }
        printf("\n");
    }

    // Liberando memória
    for (i = 0; i < inputLinha ;i++){
        free(array1[i]);
        free(array2[i]);
        free(matrizResultante[i]);
    }

    // Liberando ponteiro para ponteiros;
    free(array1);
    free(array2);
    free(matrizResultante);


    return 0;
}