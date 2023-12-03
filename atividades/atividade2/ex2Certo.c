#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void) {

  int i,j,N,contador;
  float erro,pi0,pi,soma;

  pi=(4.0); // primeiro termo
  soma=0; // N termos subsequentes a serem somados
  i=3.0; // indice dos termos, variando de 2 em 2.
  contador=2; // Para poder variar o sinal do termo pelo IF.
  pi0=3.14159265358979323846;
  N=200000; 
  
  for (j=0;j<=N;j++)
  {
    soma=(4.0/i);
    if (contador%2==0)  
    {
      pi=pi-soma;
    }
    else
      pi=pi+soma;
    contador+=1;
    i+=2;
    erro= fabs(pi-pi0);
    printf("O erro eh = %.8f\n",erro);
  }
  printf("\n");
  printf("O valor de pi é = %.8f , com um erro de %.8f\n",pi,erro);
  return 0;
}