#include <stdio.h>

int main() {
    float inicio, fim, litros, preco;
    float km, consumo, custo;

    printf("Km inicial: ");
    scanf("%f", &inicio);

    printf("Km final: ");
    scanf("%f", &fim);

    printf("Litros gastos: ");
    scanf("%f", &litros);

    printf("Preco combustivel: ");
    scanf("%f", &preco);

    km = fim - inicio;
    consumo = km / litros;
    custo = litros * preco;

    printf("Km rodados: %.2f\n", km);
    printf("Km por litro: %.2f\n", consumo);
    printf("Custo viagem: %.2f\n", custo);

    return 0;
}