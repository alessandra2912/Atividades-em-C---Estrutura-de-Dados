#include <stdio.h>

int main() {
    int num, opcao = 1;

    while(opcao == 1) {

        printf("Digite um numero: ");
        scanf("%d", &num);

        for(int i = 1; i <= 10; i++) {
            printf("%d x %d = %d\n", num, i, num * i);
        }

        printf("Deseja continuar? (1-SIM / 0-NAO): ");
        scanf("%d", &opcao);
    }

    return 0;
}