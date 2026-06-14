#include <stdio.h>

#define PI 3.14159

int main() {
    float raio, altura, volume;

    printf("Digite o raio: ");
    scanf("%f", &raio);

    printf("Digite a altura: ");
    scanf("%f", &altura);

    volume = PI * raio * raio * altura;

    printf("Volume = %.2f\n", volume);

    return 0;
}