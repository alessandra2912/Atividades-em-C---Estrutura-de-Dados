#include <stdio.h>

int main() {
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    for(int i = 1; i <= 5; i++) {
        printf("%d\n", num + i);
    }

    return 0;
}