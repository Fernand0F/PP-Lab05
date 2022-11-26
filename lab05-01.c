#include <stdio.h>
#include <stdlib.h>

int dobro(int x) {
    return x * 2;
}

void main() {
    int x, cmd;

    while (1) {
        system("clear");

        printf("Digite um numero inteiro: ");
        scanf("%d", &x);

        printf("\nO dobro de %d eh %d", x, dobro(x));

        printf("\n\n[ 0 ] Continuar\n[ 1 ] Encerrar\n");
        scanf("%d", &cmd);
        if (cmd == 1) {
            break;
        }
    }
}
