#include <stdio.h>
// 1. Foi realizada uma pesquisa de algumas características físicas de 50 habitantes de uma certa região. 
//// De cada habitante foram coletados os seguintes dados: sexo, cor dos olhos (azuis, verdes ou castanhos), cor dos cabelos (louros, pretos ou castanhos) e idade.  
// Faça um procedimento que leia esses dados em um vetor de registro. O vetor de registro deve ser enviado por referência.

typedef struct{
    int idade;
    int rg;
    int cpf;

} Pessoa;

void lerDados (Pessoa *serhumano){
    printf("%d ", serhumano->cpf);
    printf("%d ", serhumano->rg);
    printf("%d ", serhumano->idade);
}

int main (void)
{
    int i;
    Pessoa habitantes[50];

    for (i = 0; i < 50; i++){
        lerDados(&habitantes[i]);
    }



    return 0;
}