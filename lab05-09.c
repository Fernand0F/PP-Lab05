#include <stdio.h>

float aCilindro(float r, float h) {
    return 3.141592 * r * r * h;
}

void main() {
    float r, h;

    printf("Raio do cilindro: ");
    scanf("%f", &r);

    printf("Altura do cilindro: ");
    scanf("%f", &h);

    printf("O volume desse cilindro eh %.2f", aCilindro(r, h));
}