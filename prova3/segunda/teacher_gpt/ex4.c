#include <stdio.h>
#include <stdlib.h>
//! Dynamic Structs

// Create a program that uses dynamic memory allocation to create an array of structs representing books. 
// Each book should have attributes like title (string), author (string), and year (integer). 
// Allow the user to input details for a variable number of books. 
// After input, print the details of the book with the earliest publication year.

#define TAM 3

typedef struct 
{
    char title [50];
    char author [50];
    int year;
}Book;

void add_book (Book *ptr) {
    printf("Titulo / Autor / Ano \n");
    scanf ("%s / %s / %d", &ptr->title, &ptr->author, &ptr->year); // So scanf("%[^\n]", s); will read all characters until you reach \n (or EOF) and put them in s.
}


int main (void) {
    int escolha;
    printf("Deseja adicionar um livro? \n");
    printf("1 - Sim\n");
    scanf("%d", &escolha);

    int i;

    Book *ptr = malloc (sizeof (Book) * TAM);
    if (escolha == 1) {
        for (i = 0; i < TAM; i++) {
            add_book (&ptr[i]);
        }
    }

    printf("\n");
    printf("Imprimindo Livros\n");

    int pos_mais_velho = 0;

    for (i = 0; i < TAM; i++) {
        printf("%s / %s / %d\n", ptr[i].title, ptr[i].author,ptr[i].year);
        if (ptr[i].year < ptr[pos_mais_velho].year)
            pos_mais_velho = ptr[i].year;
    }

    
    printf("Livro com o menor ano de publicacao %s no ano de %d", ptr[pos_mais_velho].title, ptr[pos_mais_velho].year);
    free (ptr);
    return 0;
}