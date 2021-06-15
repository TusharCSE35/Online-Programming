#include<stdio.h>
int main()
{
    long long T,n,m,i,count,j,k;
    scanf("%lld",&T);
    for(i = 1; i <= T; i++)
    {
        scanf("%lld %lld",&n,&m);
        for(j = n; j <= m; j++)
        {
            if(j == 2)
            {
                printf("%lld\n",j);
            }
            else if(j > 2)
            {
                count = 0;
                for(k = 2; k < j; k++)
                {
                    if(j % k == 0)
                    {
                        count++;
                        break;
                    }
                }
                if(count == 0)
                {
                    printf("%lld\n",j);
                }
            }
        }
    }
    return 0;
}
