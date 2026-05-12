#include <stdio.h>

int main() {
    int num;

    for(int i = 1; i <= 5; i++) {
        printf("Digite um numero: ");
        scanf("%d", &num);

        printf("Numero digitado: %d\n", num);
    }

    return 0;
}