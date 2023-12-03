#include <stdio.h>
// Faça um procedimento que recebe, por parâmetro, a hora de inicio e a hora de término de um jogo, ambas subdivididas em 2 valores distintos: horas e minutos. O procedimento deve retornar, também por parâmetro, a duração do jogo em horas e minutos, considerando que o tempo máximo de duração de um jogo é de 24 horas e que o jogo pode começar em um dia e terminar no outro. 

float calcularTempoJogo (int a){

    int n, x, y, c;
    n = 0; 
    x = 1; 
    y = 3;
    float fim = 0;
    c = 1;

    while (n < a)
    {
        x = x + c;
        y +=1;
        c +=2;
        n+= 1;
        fim += (x / y);
    }
    return fim;

}

int main (void){



    return 0;
}