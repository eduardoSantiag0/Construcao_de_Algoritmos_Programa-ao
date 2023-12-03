#include <stdio.h>

int main (void){

    int inputRows;

    printf("Quantas fileiras voce deseja? ");
    scanf ("%d", &inputRows); //! COLOCA & NO SCANF

    int metade = inputRows / 2;

    for (int i = 0; i < inputRows; i++){ 

        if (i < metade){
            for (int j = 0; j <= i ; j++){
                printf ("."); 
                } } 
        
        else {
            for (int k = metade; k > 0 ; k--){
                printf ("*");
                } }

        printf("\n");
    }
    return 0; 
}