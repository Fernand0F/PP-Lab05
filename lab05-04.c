#include <stdio.h>
#include <math.h>

int ePerfeito(int x) {
    if (sqrt(x) == (int)(sqrt(x)))
        return 1;
    else
        return 0;
}

void main() {
    int x, r;

    printf("Digite um numero: ");
    scanf("%d", &x);

    r = ePerfeito(x);

    if (r == 1)
        printf("Eh um quadrado perfeito");
    else if (r == 0)
        printf("Nao eh um quadrado perfeito");
    
}