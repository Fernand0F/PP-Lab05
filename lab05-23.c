#include <stdio.h>

void piramide(int x) {
    int c, d, count = 1, tam;

    printf("\n");

    tam = 2 * x - 1;
    for (c = 1; c <= tam; c++) {

        for (d = 1; d <= count; d++) {
            printf("*");
        }

        if (c < x) count++;
        if (c >= x) count--;

        printf("\n");
    }
    printf("\n");
}

void main() {
    int x;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &x);

    piramide(x);
}