#include <stdio.h>
#include <stdlib.h>

int main()
{

    int N[10] = {1,2,3,4,5,6,7,8,9,10};
    int M[10] = {1,2,3,4,5,6,7,8,9,10};
    int produto, i;
    produto = 0;

    for(i = 0; i < 10; i++)
    {
        produto += N[i]*M[i];
        printf("%d\n", produto);
    }
    return 0;
}
