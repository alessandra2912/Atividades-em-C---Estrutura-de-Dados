#include <stdio.h>

int main() {
    float nota, soma = 0;

    for(int i = 1; i <= 5; i++) {
        printf("Digite a nota %d: ", i);
        scanf("%f", &nota);

        soma += nota;
    }

    printf("Media = %.2f\n", soma / 5);

    return 0;
}