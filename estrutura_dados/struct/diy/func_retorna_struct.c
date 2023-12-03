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

Character SetCharacter (float dinheiro, int att, int def, char first_letter){
    Character C;

    C.gold = dinheiro;
    C.attack = att;
    C.defense = def;
    C.first_letter = first_letter;

    return C;
}

void imprimirPersonagem(Character p){
    printf("Dinheiro: %.2f, Ataque: %d, Defesa: %d, Nome: %c\n", p.gold, p.attack, p.defense, p.first_letter);
}

int main (void)
{
    int i;

    Character Moira;

    Moira = SetCharacter(1200.12, 20, 60,'M');

    imprimirPersonagem(Moira);


    return 0;
}