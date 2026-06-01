#include <stdio.h>

int main() {
    float altura, maior = 0, menor = 999, somaMulheres = 0;
    int sexo, homens = 0, mulheres = 0, mulheresAbaixo = 0;

    while(1) {
        printf("Digite a altura: ");
        scanf("%f", &altura);

        if(altura <= 0)
            break;

        printf("Sexo (1-Masculino / 2-Feminino): ");
        scanf("%d", &sexo);

        if(altura > maior)
            maior = altura;

        if(altura < menor)
            menor = altura;

        if(sexo == 1) {
            homens++;
        } else {
            mulheres++;
            somaMulheres += altura;

            if(altura < 1.68)
                mulheresAbaixo++;
        }
    }

    printf("Maior altura: %.2f\n", maior);
    printf("Menor altura: %.2f\n", menor);
    printf("Numero de homens: %d\n", homens);

    if(mulheres > 0) {
        printf("Media das mulheres: %.2f\n", somaMulheres / mulheres);
        printf("Percentual mulheres abaixo de 1.68: %.2f%%\n",
               (mulheresAbaixo * 100.0) / mulheres);
    }

    return 0;
}