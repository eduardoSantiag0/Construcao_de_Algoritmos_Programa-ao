Algoritmo "semnome"
// 
//  
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 17/10/2023
Var
// Se��o de Declara��es das vari�veis 
n: inteiro
elementoAnterior: inteiro
elementoAtual: inteiro
elementoProximo: inteiro

Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 
   Escreva ("Escreva n�mero")
   leia (n)
   
   se n >= 1 ent�o
      Escreva("Os primeiros n�meros s�o")
      Escreva ("1")
   fimSe
   se n >= 2 ent�o
      escreva (", 1")
   fimse
   
   elementoAnterior <- 1
   elementoAtual <- 1
   
   para i = 0 de 3 ate n fa�a
        elementoProximo <- elementoAnterior + elementoAtual
        escreva (", " elementoProximo)
        elementoAnterior <- ellementoAtual
        elementoAtual <- elementoProximo
   fimpara
   fimse
        

Fimalgoritmo