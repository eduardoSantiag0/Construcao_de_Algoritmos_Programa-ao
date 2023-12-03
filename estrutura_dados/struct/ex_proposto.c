#include <stdio.h>

// Uma função que tenha duas funcionalidades ao mesmo tempo: calcular o peso ideal e o IMC do paciente. 

typedef struct {
    float altura;
    char sexo;
    float peso_atual;    
} X;

typedef struct {
    float IMC;
    float Peso_ideal;
} Y;


Y DADOS_SAUDE(X p) {
    Y resultado;

    // Calculando o IMC
    resultado.IMC = p.peso_atual / (p.altura * p.altura);

    // Calculando o peso ideal baseado no sexo
    if (p.sexo == 'M') {
        resultado.Peso_ideal = (72.7 * p.altura) - 58;
    } else {
        resultado.Peso_ideal = (62.1 * p.altura) - 44.7;
    }

    return resultado;
}

// void lerDados (X *pessoa, Y dados)
// {
//     // Calculando o IMC
//     resultado.IMC = paciente.peso_agora / (paciente.altura * paciente.altura);

//     // Calculando o peso ideal baseado no sexo
//     if (paciente->sexo == 'M') {
//         resultado->peso_ideal = (72.7 * paciente->altura) - 58;
//     } else {
//         resultado->peso_ideal = (62.1 * paciente->altura) - 44.7;
//     }

//     return Y


// }


int main(void) {

    X pessoa;
    Y resultado;

    // Exemplo de uso
    pessoa.altura = 1.81; // Altura em metros
    pessoa.sexo = 'F'; // 'M' para masculino, 'F' para feminino
    pessoa.peso_atual = 75; // Peso atual em kg


    resultado = DADOS_SAUDE(pessoa);

    printf("IMC: %.2f\n", resultado.IMC);
    printf("Peso Ideal: %.2f kg\n", resultado.Peso_ideal);

    return 0;
}