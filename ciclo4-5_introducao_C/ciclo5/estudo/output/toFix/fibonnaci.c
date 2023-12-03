#include <stdio.h>

int main (void){

    int i, proxTermo, anteriorTermo, atualTermo, inputSequencia;

    printf ("Qual numero fibonecci deseja ver?  ");
    scanf ("%d", &inputSequencia);

    atualTermo = 1;
    anteriorTermo = 0;
    proxTermo = 1;

    for (i = 2; i <= inputSequencia; i++){
        // anteriorTermo = atualTermo - 1;

        printf ("-> Posicao: %d\n", atualTermo);
        printf ("---> Fibonacci Number: %d\n", proxTermo);

        int temp = proxTermo;
        proxTermo = atualTermo + proxTermo;
        anteriorTermo = temp;

        // proxTermo++;
        // atualTermo = proxTermo;
        // anteriorTermo = atualTermo;

    }

    return 0; 
}