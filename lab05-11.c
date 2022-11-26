#include <stdio.h>

float media(float n1, float n2, float n3, char t) {
    if (t == 'A') {
        return (n1 + n2 + n3) / 3;
    }
    if (t == 'P') {
        return (n1*5 + n2*3 + n3*2) / 10;
    }
}

void main() {
    float n1, n2, n3;
    char t;

    printf("Media aritmetica ou ponderada [ A / P ]: ");
    scanf("%c", &t);

    printf("Nota 1: ");
    scanf("%f", &n1);

    printf("Nota 2: ");
    scanf("%f", &n2);

    printf("Nota 3: ");
    scanf("%f", &n3);

    printf("Media: %.2f", media(n1, n2, n3, t));
}