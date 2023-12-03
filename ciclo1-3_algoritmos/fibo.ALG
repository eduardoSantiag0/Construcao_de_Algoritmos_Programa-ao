Algoritmo "semnome"
// 
//  
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 17/10/2023
Var
// Seção de Declarações das variáveis 
n: inteiro
elementoAnterior: inteiro
elementoAtual: inteiro
elementoProximo: inteiro

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
   Escreva ("Escreva número")
   leia (n)
   
   se n >= 1 então
      Escreva("Os primeiros números são")
      Escreva ("1")
   fimSe
   se n >= 2 então
      escreva (", 1")
   fimse
   
   elementoAnterior <- 1
   elementoAtual <- 1
   
   para i = 0 de 3 ate n faça
        elementoProximo <- elementoAnterior + elementoAtual
        escreva (", " elementoProximo)
        elementoAnterior <- ellementoAtual
        elementoAtual <- elementoProximo
   fimpara
   fimse
        

Fimalgoritmo