#include <stdio.h>
#include <math.h>

int main() {
    int num1, num2;
    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &num1, &num2);
    
    printf("%d elevado a %d: %.0f\n", num1, num2, pow(num1, num2));
    printf("%d elevado a %d: %.0f\n", num2, num1, pow(num2, num1));
    return 0;
}