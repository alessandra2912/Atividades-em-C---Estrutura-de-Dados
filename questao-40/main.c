#include <stdio.h>
#include <math.h>

int main() {
    int A, B, C;
    float R, S, D;

    printf("Digite A: ");
    scanf("%d", &A);

    printf("Digite B: ");
    scanf("%d", &B);

    printf("Digite C: ");
    scanf("%d", &C);

    R = pow((A + B), 2);
    S = pow((B + C), 2);

    D = (R + S) / 2;

    printf("D = %.2f\n", D);

    return 0;
}