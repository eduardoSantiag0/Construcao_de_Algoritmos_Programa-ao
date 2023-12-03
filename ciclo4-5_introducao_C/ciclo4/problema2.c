/*

Uma aluna de computação resolveu aplicar seus conhecimentos sobre algoritmos para deixar a solução de um problema de vestibular mais genérico.  O problema que ela encontrou foi o seguinte: Um avião decola de um aeroporto na Holanda, percorrendo uma trajetória retilínea, formando com o solo um ângulo de 30o. Para quem não conhece a Holanda, o território é incrivelmente plano. Depois de percorrer 1.000 metros, qual a altura atingida pelo avião?

Ela pensou sobre a questão e concluiu que poderia fazer um algoritmo mais genérico, em que a quantidade de metros sobrevoada poderia ser informada pelo usuário. Também poderia ser informado o ângulo de decolagem. Sua tarefa é fazer um programa em C da forma como pensado pela aluna para fazer o cálculo da altura atingida pelo avião.   

quantidade de metros sobrevoados
ângulo de decolagem

calcule a altura do avião

*/
#include <stdio.h>
#include <math.h>


int main (void){
    int metrosSobrevoados, anguloDecolagem; 
    float alturaAviao;

    printf("Qual a quantidade de metros sobrevoados?\n");
    scanf("%d", &metrosSobrevoados);

    while (metrosSobrevoados < 0){
        printf ("Porfavor insira um numero maior que 0\n");
        scanf("%d", &metrosSobrevoados);
    }

    printf("Qual o angulo de decolagem?\n");
    scanf("%d", &anguloDecolagem);

    while (anguloDecolagem > 360 || anguloDecolagem < 0){
        printf ("Por favor, insira um angulo valido\n");
        scanf("%d", &anguloDecolagem);

    }

    float anguloRadianos = (anguloDecolagem * M_PI) / 180;
    alturaAviao =  sin(anguloRadianos) * metrosSobrevoados;

    printf ("A altura do aviao foi %.2f", alturaAviao);

    return 0;
}