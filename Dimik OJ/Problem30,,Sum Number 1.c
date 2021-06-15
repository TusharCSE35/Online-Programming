#include<stdio.h>
#include<math.h>
int main()
{
    long long int T,n,i,j,sum;
    scanf("%lld",&T);
    for(i = 1; i <= T; i++)
    {
        sum = 0;
        scanf("%lld",&n);
        //n = sqrt(n);
        for(j = 1; j < n; j++)
        {
            if(n % j == 0)
            {
                sum = sum + j;
            }
        }
        if(sum == n)
        {
            printf("YES, %lld is a perfect number!\n",n);
        }
         else
        {
            printf("NO, %lld is not a perfect number!\n",n);
        }
    }
    return 0;
}
