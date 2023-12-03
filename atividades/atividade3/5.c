#include <stdio.h>
//Faça uma função que recebe por parâmetro o tempo de duração de uma fábrica expressa em segundos e retorna também por parâmetro esse tempo em horas, minutos e segundos. 



void calcularTempo(int duracaoSegundos, int *horas, int *minutos, int *segundos)
{
    *horas = duracaoSegundos / 3600;
    duracaoSegundos %= 3600;
    *minutos = duracaoSegundos / 60;
    *segundos = duracaoSegundos % 60;
}

int main (void){
    int in_segundos, out_horas, out_min, out_seg;

    printf("Segundos: ");
    scanf("%d", &in_segundos);

    calcularTempo(in_segundos, &out_horas, &out_min, &out_seg);

    printf("\t%d horas, %d minutos e %d segundos", out_horas, out_min, out_seg);

    return 0;
}