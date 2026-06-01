#include <stdio.h>

void imprimir(int n) {

    for(int i = 1; i <= n; i++) {

        for(int j = 1; j <= i; j++) {
            printf("%d ", i);
        }

        printf("\n");
    }
}

int main() {
    int n;

    printf("Digite n: ");
    scanf("%d", &n);

    imprimir(n);

    return 0;
}