#include <stdio.h>
#include <stdlib.h>// necessário p/ as funções rand() e srand()
#include <stdio.h>
#include<time.h>//necessário p/ função time()
int main(void)
{
      int i;
      int um = 0;
      int dois = 0;
      int tres = 0;
      printf("Lancando um dado 10 vezes:\n\n");

      srand(time(NULL)); // inicialização da semente (gerador de números aleatórios)


      for (i=0; i < 200; i++)
      {
           // gerando valores aleatórios na faixa de 0 a 5 e somando 1 a eles
           //printf("%d ", 1+rand() % 6);
           int rolagem = 1+rand() % 3;
           if (rolagem == 1)
                um++;
           else if (rolagem == 2)
                dois++;
           else 
                tres++;

      }
      printf("Numero Um saiu: %d\n\n", um);
      printf("\tNumero Dois saiu: %d\n\n", dois);
      printf("\t\tNumero tres saiu: %d\n\n", tres);

      // getch(); //*Esperar uma tecla


      return 0;
}
