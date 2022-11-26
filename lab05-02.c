#include <stdio.h>

void data(int d, int m, int a) {
    switch (m) {
        case 1:
            printf("\n%d de janeiro de %d\n", d, a); break;
        case 2:
            printf("\n%d de fevereiro de %d\n", d, a); break;
        case 3:
            printf("\n%d de março de %d\n", d, a); break;
        case 4:
            printf("\n%d de abril de %d\n", d, a); break;
        case 5:
            printf("\n%d de maio de %d\n", d, a); break;
        case 6:
            printf("\n%d de junho de %d\n", d, a); break;
        case 7:
            printf("\n%d de julho de %d\n", d, a); break;
        case 8:
            printf("\n%d de agosto de %d\n", d, a); break;
        case 9:
            printf("\n%d de setembro de %d\n", d, a); break;
        case 10:
            printf("\n%d de outubro de %d\n", d, a); break;
        case 11:
            printf("\n%d de novembro de %d\n", d, a); break;
        case 12:
            printf("\n%d de dezembro de %d\n", d, a); break;
    }
}

void main() {
    int d, m, a;

    printf("ANO: ");
    scanf("%d", &a);

    printf("MES: ");
    scanf("%d", &m);

    printf("DIA: ");
    scanf("%d", &d);

    data(d, m, a);
}