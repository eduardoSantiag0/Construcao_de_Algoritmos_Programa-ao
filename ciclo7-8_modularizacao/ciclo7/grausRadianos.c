#include <stdio.h>
#include <math.h>

double paraRadianos(float graus, int num){

    double rad;
    rad= graus*3.141592/180;

    return rad + num;
}

int main (void){

    float in_graus;
    int inNum;

    printf("Escolha um numero para adicionar ao resultado final: ");
    scanf("%d", &inNum);

    printf("Informe os graus e eu lhe darei os radianos: ");
    scanf("%f", &in_graus);

    double output = paraRadianos(in_graus, inNum);
    printf("Aqui esta os radianos %.4f\n", output);


    return 0;
}