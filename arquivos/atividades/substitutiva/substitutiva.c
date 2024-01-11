#include <stdio.h>
#include <stdlib.h>

// tem um arquivo que armazena apenas os nomes dos funcionários, outro que armazena apenas as matrículas etc. 

//  Os nomes, as matrículas, os cargos e os salários estão todos na mesma posição nos arquivos

//todo Desejamos construir um arquivo binário que armazene todas as informações em um arquivo só. Para tanto devemos criar o tipo de dados FUNC, ler as informações de cada arquivo (texto) e escrevê-las em um arquivo binário. 

typedef struct {
    char nome[20];
    int matricula;
    char cargo[20];
    float salario;
} FUNC;


int main (void) {
    // Descobrir o tamanho dos arquivos
    // Abrir arquivos textos
    // Ler as suas informaçoes (for loop)
    // Pipe do texto para um arquivo binário

    // fwrite(&alguma_variavel, sizeof alguma_variavel, quantidade, arquivo);

    return 0;
}