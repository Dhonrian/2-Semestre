#include <stdio.h>
#include <stdlib.h>

int main()
{
    int base, expo, result;
    result = 1;
    printf("Insira o numero: ");
    scanf("%d", &base);
    printf("Insira o expoente: ");
    scanf("%d", &expo);

    for(int i = 1; i <= expo; i++)
    {
        result *= base;
    }

    printf("%d", result);

    return 0;
}
