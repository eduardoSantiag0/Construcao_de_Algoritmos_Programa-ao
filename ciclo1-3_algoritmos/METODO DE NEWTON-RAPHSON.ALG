Algoritmo "Metodo de Newton-Raphson"
//  
//  
// 
//  
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 19/10/2023
Var
// Seção de Declarações das variáveis 
   N, i, indice: inteiro
   aproxAtual, novaAprox, primeiraAprox, erro: real

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
   escreva ("Informe o número para o qual deseja uma aproximaçção da raiz: ")
   leia (N)
   escreva ("Agora informe o erro desejado: ")
   leia (indice)
   i <- 1
   enquanto i^indice < N faça
            i <- i + 1
   fimenquanto
   primeiraAprox <- i - 0.5
   
   escreva ("Primeira aproximação = " primeiraAprox)
   
   aproxAtual <- primeiraAprox
   
   enquanto abs (aproxAtual^indice-N) erro faça
            novaAprox <- aproxAtual - (aproxAtual^indice - )
            aproxAtual <- novaAprox
   fimenquanto

Fimalgoritmo