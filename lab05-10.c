#include <stdio.h>

float maior(float x, float y) {
    if (x >= y)
        return x;
    else
        return y;  
}

void main() {
    float x, y;

    printf("Digite um valor: ");
    scanf("%f", &x);

    printf("Digite outro valor: ");
    scanf("%f", &y);

    printf("O maior valor digitado foi %.2f", maior(x, y));
}