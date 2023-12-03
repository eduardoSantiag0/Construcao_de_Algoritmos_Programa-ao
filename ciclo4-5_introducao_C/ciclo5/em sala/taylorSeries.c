#include <stdio.h>
#include <math.h>

int fatorial ( int num1){
    if (num1 ==0){
        return 1;
    } else 
        return num1 * fatorial(num1-1);
}

int main (void){
    int input_parcelas, limite, input_seno, output, i;

    printf("Quantas parcelas voce deseja? ");
    scanf("%d", &input_parcelas);
    

    printf("Qual o seno? ");
    scanf("%d", &input_seno);

    //!
    limite = 3 + 2 * input_parcelas; 
    //!

    int sinal = 1;
    double seno_rad = input_seno * M_PI / 180;
    double result = 0;


    // 3 + (2 * input_parcelas);
    for (i = 0; i <= limite ; i += 2){
        output = input_seno - (sinal * (pow (input_seno, i) / fatorial(i)));
        result += output;
        sinal *= - 1;
    }

    printf("%lf\n", result);


    return 0; 
}