#include <stdio.h>
#include <stdlib.h>

float calc(float n1, float n2, char op) {
    switch (op) {
        case '+':
            return n1 + n2; break;
        case '-':
            return n1 - n2; break;
        case '*':
            return n1 * n2; break;
        case '/':
            return n1 / n2; break;
    }
}

void main() {
    int cmd;
    float n1, n2;
    char op;

    while (1) {
        system("cls");

        printf("Digite um valor: ");
        scanf("%f", &n1);

        printf("Digite outro valor: ");
        scanf("%f", &n2);

        printf("Selecione a operacao [ + | - | * | / ]: ");
        scanf(" %c", &op);

        printf("\n%.2f %c %.2f = %.2f\n\n", n1, op, n2, calc(n1, n2, op));

        printf("[ 0 ] Continuar\n[ 1 ] Encerrar\n");
        scanf("%d", &cmd);
        if (cmd == 1) {
            break;
        }
    }
    
}