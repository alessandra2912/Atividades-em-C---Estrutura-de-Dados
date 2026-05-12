#include <stdio.h>
#include <math.h>

int main() {
    float cat1, cat2, hipotenusa;

    printf("Digite o cateto 1: ");
    scanf("%f", &cat1);

    printf("Digite o cateto 2: ");
    scanf("%f", &cat2);

    hipotenusa = sqrt(pow(cat1, 2) + pow(cat2, 2));

    printf("Hipotenusa = %.2f\n", hipotenusa);

    return 0;
}