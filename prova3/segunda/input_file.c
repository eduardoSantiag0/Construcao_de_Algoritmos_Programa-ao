#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

//// Adicionar numeros até o usuário apertar -1 
//// Ler todas as linhas de um arquivo com while (scanf() != EOF) 
//// printar na tela a média e o quantos numeros tem 

int main (void)
{
    FILE *fh;

    fh = fopen("numeros.txt", "w");
    if (fh == NULL) return 1;

    int input;
    int contador = 0; 
    int flag = 0;
    while (flag != 1)
    {
        printf("Digite um numero (-1 para parar): ");
        scanf("%d", &input);

        if (input == -1) 
            flag = 1;
        else 
            fprintf(fh,"%d\n", input);
    }

    fclose(fh);

    printf("Arquivo 'numeros.txt' Salvo com Sucesso\n");

    fh = fopen("numeros.txt", "r");

    int num_num = 0, elem;
    int total = 0;
    float media;

    while (fscanf(fh, "%d", &elem) != EOF)
    {
        total += elem;
        num_num ++;
    }

    media = (float) total / num_num;

    printf("Temos %d numeros e a media eh %.2f", num_num, media);

    fclose (fh);
    return 0;
}