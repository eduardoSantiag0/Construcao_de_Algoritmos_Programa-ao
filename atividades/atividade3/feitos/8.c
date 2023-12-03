#include <stdio.h>
/* Faça um procedimento que recebe a idade de um nadador por parâmetro e retorna , também por parâmetro, a categoria desse nadador de acordo com a tabela abaixo:  
Idade 	Categoria
5 a 7 anos 	Infantil A
8 a 10 anos 	Infantil B
11-13 anos 	Juvenil A
14-17 anos 	Juvenil B
Maiores de 18 anos (inclusive) 	Adult 
*/

void determinarCategoria (int idade, char *categoria){
    if (idade >= 5 && idade <= 7) {
        *categoria = 'A';
    } else if (idade >= 8 && idade <= 10) {
        *categoria = 'B';
    } else if (idade >= 11 && idade <= 13) {
        *categoria = 'C';
    } else if (idade >= 14 && idade  <= 17) {
        *categoria = 'D';
    } else {
        *categoria = 'E';
    }
    
}

int main (void){
    int in_idade;
    char out_categoria;

    printf("Idade: ");
    scanf("%d", &in_idade);

    determinarCategoria(in_idade, &out_categoria);
    printf("\t Categoria: %c", out_categoria);
    return 0;
}