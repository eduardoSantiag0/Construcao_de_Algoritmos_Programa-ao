#include <stdio.h>
#include <math.h>

int main(void) {
    double originalPi = M_PI;
    int i, j;
    double output, aproximation;

    aproximation == 0.001;

    for (i = 3; i <= 700; i++) {
        for (j = 1; j <= i; j++) {
            output = (double)i / j;
            double result = output - originalPi;
            if (result < aproximation) {
                printf("%d / %d --> %.6f\n", i, j, output);
            }
        }
    }

    return 0;
}
