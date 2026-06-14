#include <stdio.h>

int main() {
    float largura, comprimento, potencia;
    float area, watts;
    int lampadas;

    printf("Largura: ");
    scanf("%f", &largura);

    printf("Comprimento: ");
    scanf("%f", &comprimento);

    printf("Potencia da lampada: ");
    scanf("%f", &potencia);

    area = largura * comprimento;
    watts = area * 18;

    lampadas = watts / potencia;

    if(watts > lampadas * potencia)
        lampadas++;

    printf("Numero de lampadas = %d\n", lampadas);

    return 0;
}