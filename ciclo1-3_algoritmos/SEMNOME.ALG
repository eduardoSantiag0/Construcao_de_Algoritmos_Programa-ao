Algoritmo "fibonacci"
// 
//  
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 17/10/2023
Var
// Se��o de Declara��es das vari�veis 
ultimo, penultimo, proximo, N, x: inteiro

Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 
escreva ("Escreva n: ")
leia(n)


ultimo <- 1
penultimo <- 1
escreva (ultimo, " ")
escreva (penultimo, " ")
x <- 2
enquanto x < N fa�a
         proximo <- ultimo + penultimo
         escreva (proximo, " ")
         ultimo <- penultimo
         penultimo <- proximo
         x <- x + 1
fimenquanto


Fimalgoritmo