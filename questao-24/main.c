#include <stdio.h>

int main() {
    int soma = 0;

    for(int i = 50; i >= 1; i--) {
        soma += i;
    }

    printf("Soma = %d\n", soma);

    return 0;
}