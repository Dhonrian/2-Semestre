#include <stdio.h>
#include <stdlib.h>

/* 3. Dado um número inteiro positivo n, imprimir os n primeiros naturais
ímpares.
Exemplo: Para n=4 a saída deverá ser 1,3,5,7. */

int main()
{
    int n;
    int contador = 1;
    printf("Insira o número: ");
    scanf("%d", &n);
    for (int i = 1; i < n; i++)
    {
        printf("%d,", contador);
        contador += 2;
    }

    printf("%d.", contador);
}
