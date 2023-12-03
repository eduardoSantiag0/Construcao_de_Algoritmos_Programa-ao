#include <stdio.h>
#include <math.h>

int main(void) {

  float i,pi,pi0,erro;
  int j;
  pi0=3.14159265358979323846;
  
  for (i=3.0;i<=700;i++)
  {
    for (j=1;j<i;j++)
    {
      pi=i/j;
      if (fabs(pi-pi0)<0.00001)
      {
        erro=fabs(pi-pi0);
        printf("O numerador da fracao eh %.f e o denominador eh %.d \n",i,j);
        printf("\n");
        printf("O valor de pi eh de %.8f, e o erro eh de %.8f\n",pi,erro);
        printf("\n");
      }
    }
  }  
    
  return 0;
}