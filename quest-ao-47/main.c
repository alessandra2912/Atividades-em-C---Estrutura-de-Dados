#include <stdio.h>

int main() {
    float salarioFixo, salarioFinal;
    float somaSalarios = 0, maiorFixo = 0;
    int produtos;

    for(int i = 1; i <= 1200; i++) {

        printf("Quantidade produtos: ");
        scanf("%d", &produtos);

        printf("Salario fixo: ");
        scanf("%f", &salarioFixo);

        if(produtos <= 5)
            salarioFinal = salarioFixo + (produtos * 1.5);
        else if(produtos <= 50)
            salarioFinal = salarioFixo + (produtos * 2.0);
        else
            salarioFinal = salarioFixo + (produtos * 2.5);

        printf("Salario final: %.2f\n", salarioFinal);

        somaSalarios += salarioFinal;

        if(salarioFixo > maiorFixo)
            maiorFixo = salarioFixo;
    }

    printf("Media salarios: %.2f\n", somaSalarios / 1200);
    printf("Maior salario fixo: %.2f\n", maiorFixo);

    return 0;
}