#include <stdio.h>
#include <stdlib.h>


int main (void)
{
    int *p, *q; // criou  ponteiro
    int i;

    p = malloc(30*sizeof(int)); // determinou o tamanho de p

    if (p == NULL) // caso não tenha espaço, retorna erro.
        return 1;

    q = p;

    for (i=0;i<30;i++){
        *q = i;
        q++;
    }

    for (i=0;i<30;i++){
        p[i]=i;
    }


    for (i=0;i<30;i++){
        if (i % 10 == 0)
            printf("\n");
        printf("%d ", p[i]);
    }

    for (i=0;i<30;i++){
        printf("%d "), *q;
    }


    free(p);
    free(q);

    return 0;
}