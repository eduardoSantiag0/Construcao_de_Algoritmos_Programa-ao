#include <stdio.h>
#include <math.h>

int main(void) {
    float originalPi = 3.14159265358979323846;
    int i, j;
    float output, aproximation;

    aproximation = 0.001;

    for (i = 3; i <= 700; i++) {
        for (j = 1; j <= i; j++) {
            output = (float)i / j;
            float result = output - originalPi;
            printf("%d", result);
            if (result < aproximation) {
                printf("%d / %d --> %.6f\n", i, j, output);
            }
        }
    }

    return 0;
}