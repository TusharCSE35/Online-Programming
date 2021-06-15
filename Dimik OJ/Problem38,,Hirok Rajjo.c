#include<stdio.h>
int main()
{
    int T,n,m,j,k;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d %d",&n,&m);
        for(j = 1; j <= n; j++)
        {
            for(k = 1; k <= j; k++)
            {
                printf("%d ",m);
            }
            printf("\n");
        }
        for(j = n-1; j >= 1; j--)
        {
            for(k = 1; k <= j; k++)
            {
                printf("%d ",m);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
