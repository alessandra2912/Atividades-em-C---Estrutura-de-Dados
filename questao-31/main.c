#include <stdio.h>

int main() {
    int anos, cigarrosDia;
    float precoCarteira, gasto;

    printf("Anos fumando: ");
    scanf("%d", &anos);

    printf("Cigarros por dia: ");
    scanf("%d", &cigarrosDia);

    printf("Preco da carteira: ");
    scanf("%f", &precoCarteira);

    gasto = ((anos * 365 * cigarrosDia) / 20.0) * precoCarteira;

    printf("Gasto total = %.2f\n", gasto);

    return 0;
}