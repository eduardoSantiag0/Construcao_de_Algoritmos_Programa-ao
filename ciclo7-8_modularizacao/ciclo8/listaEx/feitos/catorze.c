#include <stdio.h>

// 14. Faça um procedimento que recebe, por parâmetro, 
/// Parametros: a hora de inicio e a hora de término de um jogo, ambas subdivididas em 2 valores distintos: horas e minutos. 
// O procedimento deve retornar, também por parâmetro, a duração do jogo em horas e minutos, considerando que o tempo máximo de duração de um jogo é de 24 horas 
// e que o jogo pode começar em um dia e terminar no outro. 

//* Procedimento altera a informação na memória

void calcularHorario (int comecoMin, int comecoHr, int fimMin, int fimHr, int *duracaoHrs, int *duracaoMin)
{
    int deltaHrs, deltaMin;

    // Verifica se o jogo termina no dia seguinte
    if (comecoHr > fimHr || (comecoHr == fimHr && comecoMin > fimMin)) 
        deltaHrs = (24 - comecoHr) + fimHr;
    else 
        deltaHrs = fimHr - comecoHr;
    

    // Calcula os minutos
    if (fimMin >= comecoMin) {
        deltaMin = fimMin - comecoMin;
    } else {
        deltaMin = (60 - comecoMin) + fimMin; //Caso o comecoMin > fimMin == Reduz uma hora
        deltaHrs--; // Reduz uma hora
    }

    *duracaoHrs = deltaHrs;
    *duracaoMin = deltaMin;
}

int main (void){
    int in_comecoMin, in_comecoHrs, in_finalMin, in_finalHrs, duracaoHrs, duracaoMin;


    printf("Comeco Hora: \n");
    scanf("%d", &in_comecoHrs);

    printf("Comeco Minuto: \n");
    scanf("%d", &in_comecoMin);

    printf("Fim Hrs: \n");
    scanf("%d", &in_finalHrs);

    printf("Fim Minuto: \n");
    scanf("%d", &in_finalMin);

    calcularHorario(in_comecoMin, in_comecoHrs, in_finalMin, in_finalHrs, &duracaoHrs, &duracaoMin);

    printf("O horario total do jogo foram: \n");
    printf("\t%d horas e %d minutos", duracaoHrs, duracaoMin);

    return 0;
}