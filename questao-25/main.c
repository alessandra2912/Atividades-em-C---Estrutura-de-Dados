#include <stdio.h>

int main() {
    float largura, comprimento, area, total = 0;
    int opcao = 1;

    while(opcao == 1) {

        printf("Largura: ");
        scanf("%f", &largura);

        printf("Comprimento: ");
        scanf("%f", &comprimento);

        area = largura * comprimento;
        total += area;

        printf("Continuar? (1-SIM / 0-NAO): ");
        scanf("%d", &opcao);
    }

    printf("Area total = %.2f\n", total);

    return 0;
}