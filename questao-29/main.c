#include <stdio.h>

int main() {
    int dias, hospedes20 = 0, totalHospedes = 0;
    float valor, soma = 0, mediaDias = 0, maior = 0;

    while(1) {

        printf("Quantidade de diarias: ");
        scanf("%d", &dias);

        if(dias == 0)
            break;

        valor = dias * 150;

        if(dias <= 5)
            valor -= valor * 0.05;
        else if(dias <= 10)
            valor -= valor * 0.10;
        else
            valor -= valor * 0.15;

        if(dias > 20)
            hospedes20++;

        if(valor > maior)
            maior = valor;

        soma += valor;
        mediaDias += dias;
        totalHospedes++;

        printf("Valor a pagar: %.2f\n", valor);
    }

    printf("Hospedes acima de 20 dias: %d\n", hospedes20);
    printf("Media contas: %.2f\n", soma / totalHospedes);
    printf("Media dias: %.2f\n", mediaDias / totalHospedes);
    printf("Maior conta: %.2f\n", maior);

    return 0;
}