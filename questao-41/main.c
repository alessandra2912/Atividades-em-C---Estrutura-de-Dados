#include <stdio.h>

int main() {
    int codigo, carrosVendidos;
    char nome[50];
    float vendas, salarioFixo, valorCarro, salarioFinal;

    printf("Codigo do vendedor: ");
    scanf("%d", &codigo);

    printf("Nome: ");
    scanf("%s", nome);

    printf("Carros vendidos: ");
    scanf("%d", &carrosVendidos);

    printf("Valor total vendas: ");
    scanf("%f", &vendas);

    printf("Salario fixo: ");
    scanf("%f", &salarioFixo);

    printf("Valor por carro vendido: ");
    scanf("%f", &valorCarro);

    salarioFinal = salarioFixo +
                    (carrosVendidos * valorCarro) +
                    (vendas * 0.05);

    printf("Codigo: %d\n", codigo);
    printf("Nome: %s\n", nome);
    printf("Salario final: %.2f\n", salarioFinal);

    return 0;
}