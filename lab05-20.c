#include <stdio.h>

int qPrimos(int x) {
    int c, d, ver, count = 0;

    for (c = 1; c < x; c++) {
        ver = 0;

        for (d = 2; d <= c/2; d++) {
            if (!(c%d)) {
                ver = 1;
            }
        }

        if (c == 1) ver = 1;

        if (ver == 0) count++;
    }
    return count;
}

void main() {
    int x;

    printf("Digite um numero: ");
    scanf("%d", &x);

    printf("A quantidade de numeros primos antes de %d eh %d", x, qPrimos(x));
}