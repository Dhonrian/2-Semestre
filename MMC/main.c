#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m, n, r;
    scanf("%d%d",&n,&m);
    while(m%n != 0)
    {
        r = m%n;
        m = n;
        n = r;
    }
    printf("A resposta é : %d",r);
    return 0;

}
