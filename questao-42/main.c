#include <stdio.h>

int main() {
    float C, F;

    printf("Temperatura em Celsius: ");
    scanf("%f", &C);

    F = (9 * C / 5) + 32;

    printf("Fahrenheit = %.2f\n", F);

    return 0;
}