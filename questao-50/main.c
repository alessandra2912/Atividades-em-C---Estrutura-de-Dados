#include <stdio.h>

int main() {
    int numero, tentativa;

    printf("Jogador 1 digite um numero entre 1 e 10: ");
    scanf("%d", &numero);

    for(int i = 1; i <= 4; i++) {

        printf("Tentativa %d: ", i);
        scanf("%d", &tentativa);

        if(tentativa == numero) {
            printf("Acertou na tentativa %d!\n", i);
            return 0;
        }
    }

    printf("Nao acertou.\n");

    return 0;
}