#include <stdio.h>

void piramide(int x) {
    int c, d, count = 1, tam = 2 * x - 1;

    printf("\n");

    for (c = 1; c <= x; c++) {
        for (d = 1; d <= tam/2 - count/2; d++) {
            printf(" ");
        }

        for (d = 1; d <= count; d++) {
            printf("*");
        }

        printf("\n");

        count += 2;
    }

    printf("\n");

}

void main() {
    int x;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &x);

    piramide(x);
}