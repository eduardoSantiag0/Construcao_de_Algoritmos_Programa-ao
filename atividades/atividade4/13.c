#include <stdio.h> 

// Faça um procedimento que recebe, por parâmetro, um vetor A(25) de inteiros e substitui todos os valores negativos de A por zero. O vetor A deve retornar alterado. 
#define tam 5

void tirarNegativos(int array[tam][tam]){
    int i, j;

    for (i = 0; i < tam; i++) {
        for (j = 0; j < tam; j++) {
            if(array[i][j] < 0)
                array[i][j] = 0;
        }
    }
}

int main (void)
{
    int i, j;

    int vetorX [tam][tam] = {
        2, 3, 4, 5, 6, 
        2, 3, 4, 5, 6, 
        -2, -3, -4, -5, -6, 
        2, 3, 4, 5, 6, 
        2, 3, 4, 5, 6, 
    };

    tirarNegativos(vetorX);

    for (i = 0; i < tam; i++) {
        for (j = 0; j < tam; j++) {
            printf("%d ", vetorX[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}