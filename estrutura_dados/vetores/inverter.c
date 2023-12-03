#include <stdio.h>

typedef struct meuVetor {
    int tam;
} meuVetorChar;


void inverter (meuVetorChar *avesso){
    int i;

    for (i=0; i<avesso->tam/2; i++)
        troca(&avesso->v[i], &avesso->v[avesso->tam-1-i]);
    
}