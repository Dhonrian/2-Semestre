#include <stdio.h>
#include <stdlib.h>

/* 3. Dado um n�mero inteiro positivo n, imprimir os n primeiros naturais
�mpares.
Exemplo: Para n=4 a sa�da dever� ser 1,3,5,7. */

int main()
{
    int n;
    int contador = 1;
    printf("Insira o n�mero: ");
    scanf("%d", &n);
    for (int i = 1; i < n; i++)
    {
        printf("%d,", contador);
        contador += 2;
    }

    printf("%d.", contador);
}
