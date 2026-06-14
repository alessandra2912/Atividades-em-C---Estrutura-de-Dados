#include <stdio.h>

int main() {
    char nome[50];
    int horas, dependentes;
    float salarioBruto, salarioLiquido;

    printf("Nome: ");
    scanf("%s", nome);

    printf("Horas trabalhadas: ");
    scanf("%d", &horas);

    printf("Dependentes: ");
    scanf("%d", &dependentes);

    salarioBruto = (horas * 3.0) + (dependentes * 100.0);
    salarioLiquido = salarioBruto - (salarioBruto * 0.135);

    printf("Funcionario: %s\n", nome);
    printf("Salario liquido: %.2f\n", salarioLiquido);

    return 0;
}