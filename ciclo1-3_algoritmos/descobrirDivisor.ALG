Algoritmo "semnome"
// 
//  
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 17/10/2023
Var
// Se��o de Declara��es das vari�veis 
N, k: inteiro

Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 
escreva ("Por favor, insira um n�mero: ")
leia(N)

// Mod = %

escreva ("Os divisores de ", N, " s�o: ")
para k <- 1 ate N fa�a
     se N mod k = 0 entao
        escreva (k, " ")
     fimse
fimpara

Fimalgoritmo