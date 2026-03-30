#include <stdio.h>
#include <math.h>

int main() {
    double num;
    printf("Digite um numero: ");
    scanf("%lf", &num);
    
    if (num >= 0) {
        printf("Raiz quadrada: %.2lf\n", sqrt(num));
    } else {
        printf("Nao existe raiz quadrada real de numero negativo.\n");
    }
    return 0;
}