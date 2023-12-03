#include <stdio.h>
// Função recusrivoa que passa um nnumero innteiro e retorna a soma de todos os numeros ate ele

int soma(int num){

    return num == 0 ? 0 : num + soma(num-1);

    // if (num == 0){
    //     return 0;
    // } else {
    //     return num + soma(num-1);
    // }

}

int main (void){

    int in_num = 5;

    printf("%d", soma(in_num));

    return 0;
}