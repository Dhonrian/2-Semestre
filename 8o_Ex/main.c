#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, n, cont, result1, result2;
    printf("Digite dois numeros\n");
    printf("Digite o primeiro: ");
    scanf("%d", &i);
    printf("Digite o segundo: ");
    scanf("%d", &j);
    printf("Insira o numero de multiplos: ");
    scanf("%d", &n);
    for (cont = 0; cont < n; cont++)
    {
        result1 = i*cont;
        result2 = j*cont;
        if (result1 == result2)
            printf("%d,", result1);
        else
            printf("%d,%d,", result1, result2);
    }

    //printf("%d,%d,", result1, result2);

}
