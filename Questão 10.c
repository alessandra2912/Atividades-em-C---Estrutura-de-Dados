#include <stdio.h>

int main() {
    int num1, num2;
    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &num1, &num2);
    
    if (num2 != 0) {
        printf("Quociente da divisao inteira: %d\n", num1 / num2);
    } else {
        printf("Erro: Divisao por zero.\n");
    }
    return 0;
}
