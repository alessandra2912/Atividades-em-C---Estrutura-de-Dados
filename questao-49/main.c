#include <stdio.h>

int main() {
    int uso;
    int total = 0, menos10 = 0, entre = 0, acima15 = 0;

    while(1) {

        printf("Numero de vezes que usou: ");
        scanf("%d", &uso);

        if(uso < 0)
            break;

        total++;

        if(uso < 10)
            menos10++;
        else if(uso <= 15)
            entre++;
        else
            acima15++;
    }

    printf("Percentual abaixo de 10: %.2f%%\n",
           menos10 * 100.0 / total);

    printf("Percentual entre 10 e 15: %.2f%%\n",
           entre * 100.0 / total);

    printf("Percentual acima de 15: %.2f%%\n",
           acima15 * 100.0 / total);

    printf("Total entrevistados: %d\n", total);

    return 0;
}