Algoritmo "ProgArit"
// 
//  
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 17/10/2023
Var
// Seção de Declarações das variáveis 
razao, n, elemento, primeiroElemento, i: inteiro

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
escreva ("Escreva o primeiro elemento: ")
leia (primeiroElemento) // Primeiro Elemento

escreva("Digite a razão: ")
leia (razao) // Aumenta em cada elemento

escreva ("Digite o tamanho da P.A: ")
leia(n) // Número de termos

para i <- 0 até n-1 faça
     escreva (primeiroElemento + i*razao)
fimpara

Fimalgoritmo