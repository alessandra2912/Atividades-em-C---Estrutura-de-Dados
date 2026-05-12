#include <stdio.h>

int main() {
    int idade1, idade2, idade3;
    float media;

    printf("Digite a idade 1: ");
    scanf("%d", &idade1);

    printf("Digite a idade 2: ");
    scanf("%d", &idade2);

    printf("Digite a idade 3: ");
    scanf("%d", &idade3);

    media = (idade1 + idade2 + idade3) / 3.0;

    printf("Media = %.2f\n", media);

    return 0;
}