#include <stdio.h>

int main (void){

    int inputAnoNascimento, idade, anoAtual;

    printf ("Qual o seu ano de nascimento? ");
    scanf ("%d", &inputAnoNascimento);

    anoAtual = 2023;
    idade = anoAtual - inputAnoNascimento;

    if (idade > 18){
        printf ("Voce pode votar");}
    else if (idade == 17){
        printf ("Voce nao pode votar, volte ano que vem!");} 
    else {
        printf ("Voce nao pode votar");}

    return 0; 
}