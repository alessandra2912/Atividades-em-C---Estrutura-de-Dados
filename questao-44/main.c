#include <stdio.h>

int main() {
    float F;

    for(int C = 0; C <= 50; C += 10) {

        F = (9 * C / 5.0) + 32;

        printf("%d C = %.2f F\n", C, F);
    }

    return 0;
}