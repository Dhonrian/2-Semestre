#include <stdio.h>
#include <stdlib.h>



#Soma negativos

int main()
{
    int total = 0;
    int n;
    scanf("%d", &n);
    while(n != 0)
    {
        if(n < 0)
            total += n;
        scanf("%d", &n);
    }
    printf("Soma: %d",total);
    return 0;
}
