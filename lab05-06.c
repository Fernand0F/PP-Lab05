#include <stdio.h>

int segundos(int h, int m, int s) {
    return h*3600 + m*60 + s;
}

void main() {
    int h, m, s;

    printf("Digite o valor das horas: ");
    scanf("%d", &h);

    printf("Digite o valor dos minutos: ");
    scanf("%d", &m);

    printf("Digite o valor dos segundos: ");
    scanf("%d", &s);

    printf("Esse tempo equivale a %d segundos", segundos(h, m, s));
}