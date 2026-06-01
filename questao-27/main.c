#include <stdio.h>

int main() {
    int N;

    while(1) {

        printf("Digite N: ");
        scanf("%d", &N);

        if(N == 0)
            break;

        int soma = 0;
        int impar = 1;
        int termos = 0;

        while(soma < N) {
            soma += impar;
            impar += 2;
            termos++;
        }

        if(soma == N)
            printf("Raiz quadrada = %d\n", termos);
        else
            printf("Nao e quadrado perfeito\n");
    }

    return 0;
}