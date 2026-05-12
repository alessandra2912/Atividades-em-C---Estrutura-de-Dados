#include <stdio.h>

int main() {
    int num, pares = 0, impares = 0;

    for(int i = 1; i <= 10; i++) {
        printf("Digite um numero: ");
        scanf("%d", &num);

        if(num % 2 == 0)
            pares++;
        else
            impares++;
    }

    printf("Pares: %d\n", pares);
    printf("Impares: %d\n", impares);

    return 0;
}