#include <stdio.h>

int main() {
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if(num % 2 == 0) {
        for(int i = 1; i <= 10; i++) {
            num += 2;
            printf("%d\n", num);
        }
    } else {
        printf("O numero nao e par.\n");
    }

    return 0;
}