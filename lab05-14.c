#include <stdio.h>

void consumo(float d, float l) {
    float con = d / l;

    if (con < 8) {
        printf("Venda o carro!");
    }
    else if ((con >= 8)&&(con <=14)) {
        printf("Economico!");
    }
    else {
        printf("Super economico!");
    }
}

void main() {
    float d, l;

    printf("Distancia percorrida em km: ");
    scanf("%f", &d);

    printf("Litros de gasolina consumidos: ");
    scanf("%f", &l);

    printf("\n");
    consumo(d, l);
    printf("\n\n");
}