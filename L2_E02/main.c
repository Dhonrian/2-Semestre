#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, k, numero;
    int lista[8];
    for(i = 0; i < 8; i++)
    {
        scanf("%d", &numero);
        lista[i] = numero;
    }

    for(i = 0; i < 4; i++)
    {
        k = lista[i+4];
        lista[i+4] = lista[i];
        lista[i] = k;
    }

    for(i = 0; i < 8; i++)
        printf("%d ", lista[i]);

    return 0;

}
