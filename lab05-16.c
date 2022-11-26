#include <stdio.h>

void linha(int x) {
    int c;

    printf("\n");

    for (c = 0; c < x; c++) {
        printf("=");
    }

    printf("\n\n");
}

void main() {
    int x;

    printf("Digite o tamanho da linha: ");
    scanf("%d", &x);

    linha(x);
}