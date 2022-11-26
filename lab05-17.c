#include <stdio.h>
#include <stdlib.h>

int entreSoma(int x, int y) {
    int c, soma = 0;

    if (x <= y) {
        for (c = x + 1; c < y; c++) {
            soma += c;
        }
    }

    return soma;
}

void main() {
    int x, y, cmd;

    while (1) {
        system("cls");

        printf("Digite um valor inteiro: ");
        scanf("%d", &x);

        printf("Digite outro valor inteiro: ");
        scanf("%d", &y);

        printf("\nA soma dos numeros inteiros que existem entre %d e %d eh %d\n\n",x, y, entreSoma(x, y));
    
        printf("[ 0 ] Continuar\n[ 1 ] Encerrar\n");
        scanf("%d", &cmd);
        if (cmd == 1) {
            break;
        }
    }
}