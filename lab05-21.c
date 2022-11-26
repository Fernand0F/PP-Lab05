#include <stdio.h>

void piramide(int x) {
    int c, d;

    printf("\n");
    for (c = 1; c <= x; c++) {
        for (d = 1; d <= c; d ++) {
            printf("!");
        }
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