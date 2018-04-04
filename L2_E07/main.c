#include <stdio.h>
#include <stdlib.h>
#define max 5

int main()
{
    int matriz[max][max];
    int i, k, maior, posi, posk;
    maior = 0;

    for(i = 0; i < max; i++)
        for(k = 0; k < max; k++)
            scanf("%d", &matriz[i][k]);

    for(i = 0; i < max; i++)
        for(k = 0; k < max; k++)
        {
            if(maior < matriz[i][k])
            {
                maior = matriz[i][k];
                posi = i;
                posk = k;
            }

        }
    printf("Maior elemento: %d\nEncontrado em [%d][%d]\n", maior, posi, posk);

    return 0;
}
