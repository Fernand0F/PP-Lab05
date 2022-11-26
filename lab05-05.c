#include <stdio.h>

float vEsfera(float r) {
    return (4.0/3.0) * 3.14 * r * r * r;
}

void main() {
    float r;

    printf("Raio da Esfera: ");
    scanf("%f", &r);

    printf("O volume da esfera eh de %.2f", vEsfera(r));
}