#include<stdio.h>
int main()
    {
        int t,n,i,j;
        long long int fact;
        scanf("%d",&t);
        for(i = 1; i <= t; i++)
        {
            fact = 1;
            scanf("%d",&n);
            for(j = 2; j <= n; j++)
            {
                fact = fact * j;
            }
            printf("%lld\n",fact);
        }
      return 0;
    }
