#include <stdio.h>
#include <stdlib.h>

/* 1. Dada uma seq��ncia de n�meros inteiros n�o-nulos, seguida por 0,
imprimir seus quadrados. */

int main()
{
    int n, result;
    printf("Insira o n�mero: ");
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
