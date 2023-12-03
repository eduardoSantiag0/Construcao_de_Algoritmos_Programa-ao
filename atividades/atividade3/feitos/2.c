#include <stdio.h>
// Procedimento que recebe as 3 notas de um aluno por parâmetro e uma letra. 
// Se a letra for A o procedimento calcula a média aritmética das notas do aluno, 
// se for P, a sua média ponderada (pesos: 5, 3 e 2) e 
// se for H, a sua média harmônica. 
// A média calculada também deve retornar por parâmetro. 

void mediaCalcular (char letra, int nota1, int nota2, int nota3, float *media){

    if (letra == 'a')
        *media = (nota1 + nota2 + nota3)/3; 

     else if (letra == 'p')
        *media = ((nota1*5) + (nota2*3) + (nota3*2)) / 10.0;

     else if (letra == 'h')
        *media = 3.0 / ((1.0/nota1) + (1.0/nota2) + (1.0/nota3));  
    
}

int main (void){
    char in_letra;
    int in_nota1, in_nota2, in_nota3;
    float out_media;

    do {
        printf("Informe Letra (a, p ou h): \n");
        scanf("%c", &in_letra);
    } while (in_letra != 'a' && in_letra != 'p' && in_letra != 'h');

    printf("Nota 1: ");
    scanf("%d", &in_nota1);

    printf("Nota 2: ");
    scanf("%d", &in_nota2);

    printf("Nota 3: ");
    scanf("%d", &in_nota3);

    mediaCalcular(in_letra, in_nota1, in_nota2, in_nota3, &out_media);

    printf("\tA media de %c: %.2f",in_letra, out_media);


    return 0;
}