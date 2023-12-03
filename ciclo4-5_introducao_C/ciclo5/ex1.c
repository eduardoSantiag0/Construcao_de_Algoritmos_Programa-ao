#include <stdio.h>

int main(void) {
    double approx_pi = 0.0;
    int i, input_frac;
    int sinal = 1;
    

    printf("Escolha quantas fracoes para aproximar o pi? ");
    scanf("%d", &input_frac);

    for (i = 0; i < input_frac; i++) {
        if (i % 2 == 0) {
            approx_pi += 1.0 / (2 * i + 1);
        } else {
            approx_pi -= 1.0 / (2 * i + 1);
        }
    }

    approx_pi *= 4;

    printf("Approximation of Pi: %f\n", approx_pi);

    return 0;
}
