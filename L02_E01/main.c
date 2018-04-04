#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n, i, num;
    int numeros[50];
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &num);
        numeros[i] = num;
    }

    for(i = n; i >= 0; i--)
    {
        printf("%d ", numeros[i]);
    }
    return 0;
}
