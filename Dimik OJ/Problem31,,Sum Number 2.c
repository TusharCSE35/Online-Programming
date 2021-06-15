#include<stdio.h>
#include<math.h>
int main()
{
    long long int T,n,i,j,k,l,m,x,sum,a[10];
    scanf("%lld",&T);
    for(i = 1; i <= T; i++)
    {
        l = 0;
        scanf("%lld",&n);
        for(j = 1; j <= n; j++)
        {
            sum = 0;
            for(k = 1; k < j; k++)
            {
                if(j % k == 0)
                {
                    sum = sum + k;
                }
            }
            if(sum == j)
            {
                a[l] = sum;
                l++;
            }
        }
        for(m = 0; m < l; m++)
        {
            printf("%d\n",a[m]);
        }
        if(T >= i + 1)
        {
            printf("\n");
        }
    }
    return 0;
}
