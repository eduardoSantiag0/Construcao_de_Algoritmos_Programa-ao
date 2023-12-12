#include <stdio.h>
#include <stdlib.h>

//// Faça um programa que receba do usuário o tamanho de uma string 
//// chame uma função para alocar dinamicamente essa string. 
//// Em seguida, o usuário deverá informar o conteúdo dessa string. 
//// O programa imprime a string sem suas vogais.



int main (void)
{
    int inSize, i;
    printf("Qual tamanho da string? "); //6
    scanf("%d", &inSize);

    
    char *ptrString = (char *) malloc (inSize * sizeof (char));
    if (ptrString == NULL)
        return 1;

    printf("Escreva a string: "); // hello -- Hll
    scanf("%s", ptrString);

    for (i = 0; i < inSize ; i++){
        if (ptrString[i] != 'e' && ptrString != 'o')
            printf("%c\n", ptrString[i]);
    }
    

    free(ptrString);

    return 0;
}