#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    float result;
    do
    {
        printf("Digite um número: ");
        scanf("%d", &num);
    }while(num == 0);
    result = 1.00/num;
    printf("Resultado é : %f", result);
    return 0;
}
