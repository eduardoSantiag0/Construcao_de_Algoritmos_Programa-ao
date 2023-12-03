#include <stdio.h>
#include <stdlib.h>

int main (void){
    int i;
    int v[10];
    int maximo;
    float media;
    int soma = 0;

    for (i = 0; i<=10;i++){
        scanf("%d", &v[i]); //Add no Array;
        printf("%d\n", v[i]);

        if (i == 0)
            maximo = v[i];
        else{
            if(v[i] > maximo)
                maximo = v[i];
        }
        soma += v[i]; 
    }

    media = 1.0 * soma / 10.0;

    printf("\tMAXIMO: %d\n", maximo);
    printf("\tMEDIA: %.2f\n", media);

    return 0;
}