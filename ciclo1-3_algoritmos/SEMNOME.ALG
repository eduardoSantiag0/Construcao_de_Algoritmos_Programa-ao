Algoritmo "fibonacci"
// 
//  
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 17/10/2023
Var
// Seção de Declarações das variáveis 
ultimo, penultimo, proximo, N, x: inteiro

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
escreva ("Escreva n: ")
leia(n)


ultimo <- 1
penultimo <- 1
escreva (ultimo, " ")
escreva (penultimo, " ")
x <- 2
enquanto x < N faça
         proximo <- ultimo + penultimo
         escreva (proximo, " ")
         ultimo <- penultimo
         penultimo <- proximo
         x <- x + 1
fimenquanto


Fimalgoritmo