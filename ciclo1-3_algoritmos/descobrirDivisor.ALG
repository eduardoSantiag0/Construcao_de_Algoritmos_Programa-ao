Algoritmo "semnome"
// 
//  
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 17/10/2023
Var
// Seção de Declarações das variáveis 
N, k: inteiro

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
escreva ("Por favor, insira um número: ")
leia(N)

// Mod = %

escreva ("Os divisores de ", N, " são: ")
para k <- 1 ate N faça
     se N mod k = 0 entao
        escreva (k, " ")
     fimse
fimpara

Fimalgoritmo