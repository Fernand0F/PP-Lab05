#include <stdio.h>

int ver(float x) {
    if (x == 0) {
        return 0;
    }
    else if (x < 0) {
        return -1;
    }
    else {
        return 1;
    }
}

void main() {
    float x;

    printf("Digite um numero: ");
    scanf("%f", &x);

    printf("%d", ver(x));
}