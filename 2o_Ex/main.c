#include <stdio.h>
#include <stdlib.h>


/* 2. Dado um n�mero inteiro positivo n, calcular a soma dos n primeiros
n�meros naturais. */

int main()
{

    int n,num,soma;
    soma = 0;
    printf("N�mero de elementos: ");
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
