#include <stdio.h>
#include <math.h>

float hipo(float c1, float c2) {
    return sqrt(c1*c1 + c2*c2);
}

void main() {
    float c1, c2;

    printf("Digite o valor do primeiro cateto: ");
    scanf("%f", &c1);

    printf("Digite o valor do segundo cateto: ");
    scanf("%f", &c2);

    printf("A hipotenusa vale %.2f", hipo(c1, c2));
}