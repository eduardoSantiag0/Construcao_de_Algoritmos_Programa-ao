Algoritmo "ProgArit"
// 
//  
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 17/10/2023
Var
// Se��o de Declara��es das vari�veis 
razao, n, elemento, primeiroElemento, i: inteiro

Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 
escreva ("Escreva o primeiro elemento: ")
leia (primeiroElemento) // Primeiro Elemento

escreva("Digite a raz�o: ")
leia (razao) // Aumenta em cada elemento

escreva ("Digite o tamanho da P.A: ")
leia(n) // N�mero de termos

para i <- 0 at� n-1 fa�a
     escreva (primeiroElemento + i*razao)
fimpara

Fimalgoritmo