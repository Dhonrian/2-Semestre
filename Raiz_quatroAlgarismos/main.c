#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count = 1000;
    int fim = 9999;
    int soma = 0;
    int n_inicio;
    int n_fim;
    while(fim > count)
    {
        n_inicio = count / 100;
        n_fim = count % 100;
        soma = n_inicio + n_fim;
        if(soma*soma == count)
            printf("%d\n", count);
        count++;
    }
    return 0;
}
