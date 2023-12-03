Algoritmo "semnome"
// 
//  
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 17/10/2023
Var
// Seção de Declarações das variáveis 
numero, i, fatorial: inteiro

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 

escreva ("Digite o fatorial: ")

leia (numero)

fatorial <- 1

para i de 1 ate numero faça
     fatorial <- fatorial * i
fimpara

escreva("Fatorial de ", numero, " é ", fatorial)


Fimalgoritmo