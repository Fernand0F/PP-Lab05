#include <stdio.h>

float ctof(float c) {
    return c*(9.0/5.0) + 32.0;
}

void main() {
    float c;

    printf("Digite um valor em graus Celsius: ");
    scanf("%f", &c);

    printf("Esse valor equivale a %.1f graus Fahrenheit", ctof(c));
}
