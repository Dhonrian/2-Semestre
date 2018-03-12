#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n_elem, num, soma, i;
    soma = 0;
    printf("Insira o número de elementos: ");
    scanf("%d", &n_elem);
    for(i = 1; i <= n_elem; i++)
    {
        printf("Digite o numero: ");
        scanf("%d", &num);
        if(num % 2 == 0)
            soma += num;
    }
    printf("soma: %d", soma);
    return 0;
}
