#include <stdio.h>

void calcularTempo(int duracaoSegundos, int *horas, int *minutos, int *segundos)
{
    *horas = duracaoSegundos / 3600;
    duracaoSegundos %= 3600;
    *minutos = duracaoSegundos / 60;
    *segundos = duracaoSegundos % 60;
}