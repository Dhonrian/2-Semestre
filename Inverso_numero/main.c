#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    float result;
    do
    {
        printf("Digite um n�mero: ");
        scanf("%d", &num);
    }while(num == 0);
    result = 1.00/num;
    printf("Resultado � : %f", result);
    return 0;
}
