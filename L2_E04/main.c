#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, k, na, nb;
    int A[5];
    int B[8];

    printf("Vetor A\n");
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &na);
        A[i] = na;
    }

    printf("Vetor B\n");

    for(i = 0; i < 8; i++)
    {
        scanf("%d", &nb);
        B[i] = nb;
    }


    for(i = 0; i < 5; i++)
        for(k = 0; k < 8; k++)
        {
            if(A[i] == B[k])
                printf("%d ", A[i]);
        }



    return 0;
}
