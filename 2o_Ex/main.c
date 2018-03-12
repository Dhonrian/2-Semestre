#include <stdio.h>
#include <stdlib.h>


/* 2. Dado um número inteiro positivo n, calcular a soma dos n primeiros
números naturais. */

int main()
{

    int n,num,soma;
    soma = 0;
    printf("Número de elementos: ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
    {
        printf("Digite o numero: ");
        scanf("%d", &num);
        if(num > 0)
            soma += num;
    }
    printf("Soma final: %d", soma);
    return 0;
}
