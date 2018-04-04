#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[10];
    int num, i, n;


    for(i = 0; i < 10; i++)
    {
        scanf("%d", &num);
        vetor[i] = num;
    }

    scanf("%d", &n);

    for(i = 0; i < 10; i++)
    {
        if(n == vetor[i])
        {
            printf("%d foi encontrado na %d posicao", n, vetor[i]);
            break;
        }
        else
        {
            printf("%d nao foi encontrado no vetor", n);
            break;
        }
    }

    return 0;
}
