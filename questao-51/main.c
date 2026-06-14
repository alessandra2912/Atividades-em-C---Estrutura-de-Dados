#include <stdio.h>

int main() {
    int linhas, colunas;

    printf("Linhas: ");
    scanf("%d", &linhas);

    printf("Colunas: ");
    scanf("%d", &colunas);

    if(linhas < 1)
        linhas = 1;

    if(linhas > 20)
        linhas = 20;

    if(colunas < 1)
        colunas = 1;

    if(colunas > 20)
        colunas = 20;

    for(int i = 1; i <= linhas; i++) {

        for(int j = 1; j <= colunas; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}