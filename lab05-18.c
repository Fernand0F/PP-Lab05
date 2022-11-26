#include <stdio.h>
#include <stdlib.h>

int expo(float n, int e) {
    int c;
    float r = 1;

    if ((n != 0) && (e == 0)) {
        return 1;
    }
    else {
        for (c = 0; c < e; c++) {
            r *= n;
        }
        return r;
    }
}

void main() {
    float n;
    int e, cmd;

    printf("---EXPONENCIACAO---\n\n");

    printf("Numero: ");
    scanf("%f", &n);

    printf("Expoente: ");
    scanf("%d", &e);

    printf("Resultado: %d", expo(n, e));   
}
