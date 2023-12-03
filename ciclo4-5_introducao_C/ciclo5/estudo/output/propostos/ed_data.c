#include <stdio.h>

int main (void){
    int dia, mes, ano, i, ehPrimo;
    int A, B, C, D, E, F, G, H , I, J, K, N;
    
    printf ("Informe a data dd/mm/aaaa");
    scanf ("%d %d %d", &dia, &mes, &ano);

    A = (12 - mes) / 10;
    B = ano - A;
    C = mes + (12*A);
    D = B/100;
    E = (int) D/4; //Conversão explícita
    F = 2 - D + E;
    G = (int) (365.25*B);
    H = (int) (30.6001 * (C+1));
    I = F + G + H + dia + 5;
    J = I % 7;

    


}