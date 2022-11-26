#include <stdio.h>

int fatorial(int x) {
    if (x == 0)
        return 1;
    else
        return x * fatorial(x-1);  
}

void main() {
    int x;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &x);

    printf("O fatorial de %d eh %d", x, fatorial(x));
}