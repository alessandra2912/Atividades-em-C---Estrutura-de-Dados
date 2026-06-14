#include <stdio.h>

int main() {
    float fabrica, consumidor;

    printf("Custo de fabrica: ");
    scanf("%f", &fabrica);

    consumidor = fabrica + (fabrica * 0.28) + (fabrica * 0.45);

    printf("Custo ao consumidor: %.2f\n", consumidor);

    return 0;
}