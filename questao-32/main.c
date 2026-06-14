#include <stdio.h>

#define PI 3.14159

int main() {
    float raio, comprimento;

    printf("Digite o raio: ");
    scanf("%f", &raio);

    comprimento = 2 * PI * raio;

    printf("Comprimento = %.2f\n", comprimento);

    return 0;
}