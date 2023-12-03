#include <stdio.h>

//TODO 1) Critério de Parada.
//TODO 2) Cada iteração da função, ir em direção ao ccritério de parada. (Convergência)
//TODO 3) Chamada para ela própria.

//? Para descobrirmos o valor de Fibonacci de N, é só somar os dois valores anteriores de Fibonacci. 

int fibonacci(int numUm, int numDois, int contador){

    if (contador == 0){ // Condição de parada.
        return numUm;
    } else {
        int proxNum = numUm + numDois;
        printf("%d\n", proxNum);
        fibonacci(numDois, proxNum, contador - 1);
    }
}

// numUm - primeiro termo
// numDois - segundo termo
// contador - quantas sequências 
// proxNum - soma dos dois ==  próximo termo

int main (void){
    int contador = 7;

    fibonacci(1, 1, contador);

    return 0;
}