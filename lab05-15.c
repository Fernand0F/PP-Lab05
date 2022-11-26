#include <stdio.h>

int ehPossivel(float l1, float l2, float l3) {
    if ((l1 < l2 + l3)&&(l2 < l1 + l3)&&(l3 < l1 + l2)) {
        return 1;
    }
    else {
        return 0;
    }
}

void tipoTriangulo(float l1, float l2, float l3) {
    if ((l1 == l2)&&(l1 == l3)) {
        printf("Equilatero");
    }
    else if ((l1 == l2)||(l1 == l3)||(l2 == l3)) {
        printf("Isosceles");
    }
    else {
        printf("Escaleno");
    }
}

void main() {
    float l1, l2, l3;

    printf("Lado 1: ");
    scanf("%f", &l1);

    printf("Lado 2: ");
    scanf("%f", &l2);

    printf("Lado 3: ");
    scanf("%f", &l3);

    printf("\nEsse triangulo eh possivel?");
    if (ehPossivel(l1, l2, l3) == 1) {
        printf(" SIM\n");
        printf("TIPO: ");
        tipoTriangulo(l1, l2, l3);
    }
    else {
        printf(" NAO");
    }
}