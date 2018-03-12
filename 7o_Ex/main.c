#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, resultado;
    resultado = 1;
    printf("Digite um numero: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
     resultado *= i;
    }
    printf("Resultado: %d", resultado);
    return 0;
}

