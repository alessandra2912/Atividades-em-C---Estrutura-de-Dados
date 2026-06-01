#include <stdio.h>

int main() {
    float altura, somaMulheres = 0, somaTotal = 0;
    int sexo, mulheres = 0, homens = 0, abaixo = 0;

    for(int i = 1; i <= 50; i++) {

        printf("Altura: ");
        scanf("%f", &altura);

        printf("Sexo (0-Masc / 1-Fem): ");
        scanf("%d", &sexo);

        somaTotal += altura;

        if(sexo == 1) {
            mulheres++;
            somaMulheres += altura;

            if(altura < 1.65)
                abaixo++;
        } else {
            homens++;
        }
    }

    printf("Media mulheres: %.2f\n", somaMulheres / mulheres);
    printf("Media populacao: %.2f\n", somaTotal / 50);
    printf("Percentual homens: %.2f%%\n", homens * 100.0 / 50);
    printf("Quantidade mulheres: %d\n", mulheres);
    printf("Percentual mulheres abaixo 1.65: %.2f%%\n",
           abaixo * 100.0 / mulheres);

    return 0;
}