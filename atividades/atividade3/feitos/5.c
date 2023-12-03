#include <stdio.h>
// Faça uma função que recebe por parâmetro o tempo de duração de uma fábrica expressa em segundos 
// retorna também por parâmetro esse tempo em horas, minutos e segundos. 

// 


//? void converter(int entrada, int *horas, int *minutos, int *segundos) {
//?     *horas = entrada / 3600; // Calcula as horas
//?     int resto = entrada % 3600; // Calcula o resto dos segundos após calcular as horas
//?     *minutos = resto / 60; // Calcula os minutos a partir do resto
//?     *segundos = resto % 60; // Calcula os segundos restantes
//? }



void converterSegs( int in_segundos, int *out_hrs, int *out_min, int *out_seg)
{
    *out_hrs = (in_segundos / 3600);
    *out_min =(in_segundos - (3600 * *out_hrs)) / 60;
    *out_seg = (in_segundos - (3600 * *out_hrs) - (*out_min * 60));
}

int main (void){

    int input_seg, out_hrs, out_min, out_seg;

    printf("Informe Segundos: ");
    scanf("%d", &input_seg);

    converterSegs(input_seg, &out_hrs, &out_min, &out_seg);

    printf("\t\t Total de: %d horas, %d minutos, %d segundos", out_hrs, out_min, out_seg);



    return 0;
}