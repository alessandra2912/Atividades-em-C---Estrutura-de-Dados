#include <stdio.h>

int main() {
    int razao, primeiro, ultimo;
    int soma = 0;

    printf("Razao: ");
    scanf("%d", &razao);

    printf("Primeiro termo: ");
    scanf("%d", &primeiro);

    printf("Ultimo termo: ");
    scanf("%d", &ultimo);

    for(int i = primeiro; i <= ultimo; i += razao) {
        soma += i;
    }

    printf("Soma da PA = %d\n", soma);

    return 0;
}