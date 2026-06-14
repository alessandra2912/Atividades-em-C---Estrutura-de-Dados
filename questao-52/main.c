#include <stdio.h>

int main() {
    int idade, acidente;
    int pessoasAcidente = 0;
    float salario, salarioLiquido;
    float somaIdades = 0, totalSalarios = 0;

    while(1) {

        printf("Salario bruto: ");
        scanf("%f", &salario);

        if(salario < 0)
            break;

        printf("Idade: ");
        scanf("%d", &idade);

        printf("Acidente? (1-Sim / 0-Nao): ");
        scanf("%d", &acidente);

        if(salario > 1500)
            salarioLiquido = salario - (salario * 0.10);
        else
            salarioLiquido = salario;

        totalSalarios += salarioLiquido;

        if(acidente == 1) {
            somaIdades += idade;
            pessoasAcidente++;
        }
    }

    if(pessoasAcidente > 0)
        printf("Media idade acidentes: %.2f\n",
               somaIdades / pessoasAcidente);

    printf("Total salarios liquidos: %.2f\n", totalSalarios);

    return 0;
}