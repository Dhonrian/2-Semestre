#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, k;
    int matriz [5][5];

    for(i = 0; i < 5; i++)
        for(k = 0; k < 5; k++)
        {
            matriz[i][k] = 0;
            if(i == k)
                matriz[i][k] = 1;

        }
    for(i = 0; i < 5; i++)
        for(k = 0; k < 5; k++)
        {
            printf("%d ", matriz[i][k]);
            if(k == 4)
                printf("\n");
        }

    return 0;
}
