Algoritmo "Metodo de Newton-Raphson"
//  
//  
// 
//  
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 19/10/2023
Var
// Se��o de Declara��es das vari�veis 
   N, i, indice: inteiro
   aproxAtual, novaAprox, primeiraAprox, erro: real

Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 
   escreva ("Informe o n�mero para o qual deseja uma aproxima���o da raiz: ")
   leia (N)
   escreva ("Agora informe o erro desejado: ")
   leia (indice)
   i <- 1
   enquanto i^indice < N fa�a
            i <- i + 1
   fimenquanto
   primeiraAprox <- i - 0.5
   
   escreva ("Primeira aproxima��o = " primeiraAprox)
   
   aproxAtual <- primeiraAprox
   
   enquanto abs (aproxAtual^indice-N) erro fa�a
            novaAprox <- aproxAtual - (aproxAtual^indice - )
            aproxAtual <- novaAprox
   fimenquanto

Fimalgoritmo