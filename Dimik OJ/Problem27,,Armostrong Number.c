#include<stdio.h>
int main()
{
    int T,i,j,k,l,n,x,mul,sum,rem,a[10];
    scanf("%d",&T);
    for(i = 1; i <= T; i++)
    {
        j = 0;
        sum = 0;
        scanf("%d",&n);
        x = n;
        while(n != 0)
        {
            rem = n % 10;
            n = n / 10;
            a[j] = rem;
            j++;
        }
        for( k = 0; k < j; k++)
        {
            mul = 1;
            l = j;
            while(l--)
            {
                mul = mul * a[k];
            }
            sum = sum + mul;
        }
        if(sum == x)
        {
            printf("%d is an armstrong number!\n",x);
        }
         else
        {
            printf("%d is not a armstrong number!\n",x);
        }
    }
    return 0;
}
