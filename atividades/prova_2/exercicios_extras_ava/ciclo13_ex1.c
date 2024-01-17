#include <stdio.h>

#define NUM_VINHOS 5

typedef struct ciclo13_ex1
{
    char tipo[7];
    int anoSafra;
    float precoGarrafa;

}Vinho;

void precoMedioPorTipo (Vinho vinhos[NUM_VINHOS]){
    int i;
    int contadorBrancos = 0;
    float precoBrancos = 0;
    
    int contadorTintos = 0;
    float precoTintos = 0;

    int contadorRose = 0;
    float precoRose = 0;

    for (i = 0; i < NUM_VINHOS; i++){
        if (vinhos[i].tipo == "branco"){
            contadorBrancos++;
            precoBrancos+= vinhos->precoGarrafa;
        }
        else if ((vinhos[i].tipo == "tinto")){
            contadorTintos++;
            precoTintos += vinhos->precoGarrafa;
        }
        else{
            contadorRose++;
            precoRose += vinhos->precoGarrafa;

        }
    }

    float mediaBrancos = precoBrancos / contadorBrancos;
    float mediaTintos = precoTintos / contadorTintos;
    float mediaRose = precoRose / contadorRose;

}


void descobrirSafraMaisCara (Vinho vinhos[NUM_VINHOS]){
    int i;
    int contadorVetor = 0;

    // Descobrir os 10%;
    float dezPorcento;
    dezPorcento = NUM_VINHOS * 0.1;

    int vetorMaisCaros[NUM_VINHOS];
    for ( i = 0 ; i < NUM_VINHOS; i++){
        if (vinhos[i].precoGarrafa > dezPorcento){
            vetorMaisCaros[contadorVetor] = vinhos[i].anoSafra;
            contadorVetor++;
        }

    }
    for ( i = 0 ; i < NUM_VINHOS; i++){
        printf("%d ", vetorMaisCaros[i]);
    }



}

int main (void)
{
    int i;
    Vinho vinhos[NUM_VINHOS];

    for (i = 0; i < NUM_VINHOS; i++){
        scanf("%c", &vinhos->tipo);
        scanf("%d", &vinhos->anoSafra);
        scanf("%f", &vinhos->precoGarrafa);
    }


    

    return 0;
}