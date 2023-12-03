#include <stdio.h>
// 7. Faça uma função que verifique se um valor é perfeito ou não. 
// Um valor é dito perfeito quando ele é igual a soma dos seus divisores excetuando ele próprio. (Ex: 6 é perfeito, 6 = 1 + 2 + 3, que são seus divisores). A função deve retornar um valor booleano

int perfeito(num){
    int verify = 0;
    int i;

    for (i = 1; i <= num / 2; i++){
        if (num % i == 0){
            verify += i;
        }
    }

    if (verify == num){
        return 1;
    } else 
        return 0;

}

int main (void){
    int in_valor = 6;

    if (perfeito(in_valor) == 1){
        printf ("\t %d --> Eh Perfeito \t", in_valor);
    }

    return 0;
}