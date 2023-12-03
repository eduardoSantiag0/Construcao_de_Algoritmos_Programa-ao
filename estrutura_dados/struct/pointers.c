#include <stdio.h> 


typedef struct {
    int power;
    int defense;
    char name[50];
} heroi;


const char* check4Win(heroi *heroi1, heroi *heroi2){
    if (heroi1->power > heroi2->power)
        return heroi1->name;
        else if (heroi2->power > heroi2->power)
            return heroi2->name;
        else 
            return 'Tie';
}

int main (void){
    
    heroi Cavaleiro;
    heroi Mago;

    Cavaleiro.name == "MacBeth";
    Mago.name == "Prospero";

    printf("Ataque do : %c", &Cavaleiro.name);
    scanf("%d", &Cavaleiro.power); 


    printf("Ataque do Mago: %c", &Mago.name);
    scanf("%d", &Mago.power);

    char resultado = check4Win(&Cavaleiro,&Mago);

    printf("\t\t Vencedor: %c", resultado);

    return 0;
}