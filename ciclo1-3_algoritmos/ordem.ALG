Algoritmo "semnome"
// 
//  
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 19/10/2023
Var
// Seção de Declarações das variáveis 
num1, num2, num3: inteiro

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 

leia (num1)
leia (num2)
leia (num3)

se (num1 > num2) E (num1 > num3) entao
   se (num2 > num3)então
      escreva (num1, num2, num3)
   senão
        escreva (num1, num3, num2)
   fimse
fimse

se (num2 > num1) E (num2 > num3) então
   se num1> num3 então
      escreva (num2, num1, num3)
   senão
        escreva (num2, num3, num1)
   fimse
fimse

se (num3 > num1) E (num3 > num2) então
   se (num1> num2) então
      escreva (num3, num1, num2)
   senao
        escreva (num3, num2, num1)
   fimse
fimse
      
      
      
      

Fimalgoritmo