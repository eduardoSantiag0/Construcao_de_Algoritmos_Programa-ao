#include <stdio.h>

// 5. Faça um procedimento que retorna, por parâmetro, um vetor A(5) com os 5 primeiros números perfeitos. 

int primosVetor(){
    int contadorPrimos, i, j;
    while (contadorPrimos <= 5)
    {
        for(i = 0; i<= contadorPrimos ;i++){
            int divisoresContador = 0;
            for (j = 1; j <= i/2; j++){
                if (i % 2  == 1){
                    divisoresContador++;
                }
            }
        }
    }
    

}

int main (void)
{
    int out[] ;
    


    return 0;
}