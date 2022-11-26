#include <stdio.h>

int tamanho(int x) {
    if ((x % 10) == x) {
        return 1;
    }
    else {
        return 10 * tamanho(x/10);
    }
}

int somaAlg(int x) {
    int tam = tamanho(x);

    if (!(x % tam)) {
        return x / tam;
    }
    else {
        return (x / tam) + somaAlg(x - (x / tam) * tam);
    }
}

void main() {
    int x;

    printf("Digite um numero inteiro maior que 0: ");
    scanf("%d", &x);

    if (x > 0) {
        printf("A soma dos algarismos de %d eh %d", x, somaAlg(x));
    }
    else {
        printf("Numero invalido!");
    }
}