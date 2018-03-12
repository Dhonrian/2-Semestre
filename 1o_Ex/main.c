#include <stdio.h>
#include <stdlib.h>

/* 1. Dada uma seqüência de números inteiros não-nulos, seguida por 0,
imprimir seus quadrados. */

int main()
{
    int n, result;
    printf("Insira o número: ");
    scanf("%d", &n);
    while(n != 0)
    {
        result = n*n;
        printf("Quadrado de n: %d\n", result);
        printf("Insira proximo numero: ");
        scanf("%d", &n);
    }
    return 0;
}
