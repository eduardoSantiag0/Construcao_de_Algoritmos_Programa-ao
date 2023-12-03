#include <stdio.h>
#include <string.h>

//Faça uma funcao que preenche um struct -> SetCharacter()
//todo Faça 3 personagens 
//todo Uma função que imprima os tres, com a escolha do usuário

typedef struct {
    float gold;
    int attack;
    int defense;
    char first_letter;
} Character;

void imprimirPersonagem(Character p){
    printf("Dinheiro: %.2f, Ataque: %d, Defesa: %d, Nome: %c\n", p.gold, p.attack, p.defense, p.first_letter);
}

int main (void)
{
    int i;


    Character personagem[3];
    for (i = 0; i < 3; i++){

        printf("Dinheiro: ");
        scanf("%f", &personagem[i].gold);

        printf("Ataque: ");
        scanf("%d", &personagem[i].attack);

        printf("Defesa: ");
        scanf("%d", &personagem[i].defense);

        printf("Primeira Letra: ");
        scanf(" %c", &personagem[i].first_letter);
    }

    for (i = 0; i < 3; i++){
        imprimirPersonagem(personagem[i]);
    }


    return 0;
}