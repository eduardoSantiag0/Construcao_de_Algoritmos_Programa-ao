//! *p
//! p -> day  
//? The arrow operator (->) is used to access members of a struct through a pointer in C.

typedef struct 
{
    float Peso;
    int Idade;
    float Altura; 
} Pessoa;

void SetPessoa(Pessoa *P, int idade, float peso, float altura)
{
    P->Peso = peso; 
    P->Altura = altura;
}






// Função que cria o tipo de dados pessoa a partir dos parâmetros
// Observe que o tipo retornado é pessoa.


void SetPessoa(Pessoa *P, int idade, float peso, float altura)
{ // Nesta função o parâmetro P é um ponteiro para o tipo de dados Pessoa
    (*P).Idade = idade;  // o campo pode ser acessado desta forma
    P->Peso = peso;      // ou desta
    P->Altura = altura;
}

    // colocar & antes da variável
    SetPessoa(&Joao, 15, 70.5, 1.75);




Pessoa SetPessoa(int idade, float peso, float altura)
{ 
    Pessoa P;
    P.Idade = idade; 
    P.Peso = peso;   
    P.Altura = altura;
    return P; // retorna P do tipo Pessoa
}

    Pessoa Joao;
    // com Return
    Joao = SetPessoa(15,60.5,1.75); 