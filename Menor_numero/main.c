#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, menor, x;
    printf("Digite o tamanho da lista: ");
    scanf("%d", &n);
    printf("Digite o número: ");
    scanf("%d", &x);
    for (int i = 1; i < n; i++)
    {
        printf("Digite o numero: ");
        scanf("%d", &x);
        if(menor > x)
            menor = x;
    }
    printf("Menor n = %d", menor);
    return 0;
}
