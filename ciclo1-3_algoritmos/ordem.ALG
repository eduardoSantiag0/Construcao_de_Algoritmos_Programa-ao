Algoritmo "semnome"
// 
//  
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 19/10/2023
Var
// Se��o de Declara��es das vari�veis 
num1, num2, num3: inteiro

Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 

leia (num1)
leia (num2)
leia (num3)

se (num1 > num2) E (num1 > num3) entao
   se (num2 > num3)ent�o
      escreva (num1, num2, num3)
   sen�o
        escreva (num1, num3, num2)
   fimse
fimse

se (num2 > num1) E (num2 > num3) ent�o
   se num1> num3 ent�o
      escreva (num2, num1, num3)
   sen�o
        escreva (num2, num3, num1)
   fimse
fimse

se (num3 > num1) E (num3 > num2) ent�o
   se (num1> num2) ent�o
      escreva (num3, num1, num2)
   senao
        escreva (num3, num2, num1)
   fimse
fimse
      
      
      
      

Fimalgoritmo