#include<stdio.h>
int main()
{
    long long T,n,m,i,j,sum1,sum2,sum;
    scanf("%lld",&T);
    for(i = 1; i <= T; i++)
    {
        scanf("%lld %lld",&m,&n);
        sum1 = 0;
        sum2 = 0;
        for(j = 1; j <= m; j++)
        {
            if(1 <= j && j <= n)
            {
                sum1 = sum1 + j;
            }
            else if(n <= j && j <= 2*n)
            {
                sum2 = sum2 + j;
            }
        }
       sum = sum2-sum1;
        printf("Case %lld: %lld\n",i,sum);
    }





    return 0;
}
