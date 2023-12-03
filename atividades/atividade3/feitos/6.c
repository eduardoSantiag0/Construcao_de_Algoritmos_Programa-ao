#include <stdio.h>
// Faça uma função que recebe a idade de uma pessoa em anos, meses e dias e retorna essa idade expressa em dias. 

void calcularDias (int ano, int mes, int dia, int *out){

    int vividos = 0;

    vividos += ano * 365;
    printf("1) %d\n", vividos);

    vividos += mes * 30;
    printf("2) %d\n", vividos);

    vividos +=  dia;
    printf("3) %d\n", vividos);

    *out = vividos;
}

int main (void){

    int in_ano, in_mes, in_dias, out_diasVididos;
    out_diasVididos = 0;

    printf("Ano: ");
    scanf("%d", &in_ano);

    printf("Mes: ");
    scanf("%d", &in_mes);

    printf("Dia: ");
    scanf("%d", &in_dias);

    calcularDias(in_ano, in_mes, in_dias, &out_diasVididos);

    printf("\t Dias Vividos: %d", out_diasVididos);



    return 0;
}