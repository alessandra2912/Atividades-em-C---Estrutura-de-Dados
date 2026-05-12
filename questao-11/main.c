#include <stdio.h>

int main() {
    int num, positivos = 0, negativos = 0, zeros = 0;

    for(int i = 1; i <= 5; i++) {
        printf("Digite um numero: ");
        scanf("%d", &num);

        if(num > 0)
            positivos++;
        else if(num < 0)
            negativos++;
        else
            zeros++;
    }

    printf("Positivos: %d\n", positivos);
    printf("Negativos: %d\n", negativos);
    printf("Zeros: %d\n", zeros);

    return 0;
}