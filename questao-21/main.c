#include <stdio.h>

int main() {
    int a, b, resultado = 0;

    printf("Digite o primeiro numero: ");
    scanf("%d", &a);

    printf("Digite o segundo numero: ");
    scanf("%d", &b);

    for(int i = 1; i <= b; i++) {
        resultado += a;
    }

    printf("Resultado = %d\n", resultado);

    return 0;
}