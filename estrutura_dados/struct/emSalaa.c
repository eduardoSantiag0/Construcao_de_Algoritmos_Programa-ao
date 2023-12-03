#include <stdio.h>

// Criar um tipo e usar funções com esse tipo
// Usar com retorno de tipo
//TODO Tres alunos: RA, Prova 1, Prova 2, Prova 3, Frequencia, Aprovado ou NÃO == Aluno, 
//TODO Calcular a média a partir das notas
//TODO Aprovado se: Frequencia > 75% e Média > 6.
//TODO Imprimir os dados.

//? *x == &x -> p1 

struct Aluno {
    char nome;
    float p1, p2, p3, media;
    int r_a;
    float frequencia;
    int aprovado;
} ;


float calcularMedia (float prova1, float prova2, float prova3) {
    return (prova1 + prova2 + prova3 )/ 3;
}

void capturandoInformacoes (struct Aluno *x){

    struct Aluno z;
    printf("\nInforme P1: ");
    scanf("%f", &z.p1);

    printf("\nInforme P2: ");
    scanf("%f", &z.p2);

    printf("\nInforme P3: ");
    scanf("%f",&z.p3);

    printf("\nFrequencia: ");
    scanf("%f", &z.frequencia);

    z.media = calcularMedia(z.p1, z.p2, z.p3);

    *x = z;
}

int verificarAprovacao (float media, float frequencia){
    return ((media >= 6) && (frequencia >= 75.0)) ? 1 : 0;
    // Guardar dentro do struct media;
}

int main (void)
{
    struct Aluno alguem;

    capturandoInformacoes(&alguem);

    alguem.aprovado = verificarAprovacao(alguem.media, alguem.frequencia);

    if (alguem.aprovado)
        printf("\t\t APROVADO");
    else
        printf("\t\t nao conseguiu :<");


    return 0;
}