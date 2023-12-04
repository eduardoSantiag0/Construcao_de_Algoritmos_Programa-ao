#include <stdio.h>

typedef struct pessoa {
    int dinheiro;
} Jogador;

void jogou_no_Tigrinho(Jogador *jogador){
    jogador->dinheiro *= 4; 
}

int main (void){

    Jogador Caio;

    printf("Dinheiro: ");
    scanf("%d", &Caio.dinheiro);

    jogou_no_Tigrinho(&Caio);
    
    printf("\t$$  TIGRINHO BONUS DE NATAL!  $$\n");
    printf("---> Dinheiro com Bonus: %d <---", Caio.dinheiro);

    return 0;
}