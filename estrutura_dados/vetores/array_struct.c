#include <stdio.h>

typedef struct Student
{
    char name [12];
    int r_a;
} aluno;



int main (void){

    int i;
    aluno aluno1 = {"Bruno", 1000};
    aluno aluno2 = {"Matias", 1001};
    aluno aluno3 = {"Pietro", 1002};
    aluno aluno4 = {"Mesk", 1003};

    aluno meusAlunos[] = {aluno1, aluno2, aluno3, aluno4};


    for (i =0; i < sizeof(meusAlunos) / sizeof(meusAlunos[0]); i++)
    {
        printf("%s \t", meusAlunos[i].name);
        printf("%d\n", meusAlunos[i].r_a);
    }

    return 0;
}