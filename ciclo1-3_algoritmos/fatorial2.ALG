Algoritmo "semnome"
// 
//  
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 17/10/2023
Var
// Se��o de Declara��es das vari�veis 
numero, i, fatorial: inteiro

Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 

escreva ("Digite o fatorial: ")

leia (numero)

fatorial <- 1

para i de 1 ate numero fa�a
     fatorial <- fatorial * i
fimpara

escreva("Fatorial de ", numero, " � ", fatorial)


Fimalgoritmo