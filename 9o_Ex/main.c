#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, resultado, n1, n2, n3;
    resultado = 0;
    n1 = 0;
    n2 = 0;
    n3 = 0;
    printf("Insira um numero: ");
    scanf("%d", &n);

    for(i = 1; resultado < n; i++)
    {
        resultado = i * (i+1) * (i+2);

        if(resultado == n)
        {
            n1 = i;
            n2 = i+1;
            n3 = i+2;
        }

    }

    if(resultado == n)
        printf("%d e triangular (%d * %d * %d)", n, n1, n2, n3);


    else
        printf("%d nao e triangular", n);

    return 0;
}
