#include<stdio.h>
int main()
{
    long long int T,n,i,j,a[10],rem;
    scanf("%lld",&T);
    while(T--)
    {
        i = 0;
        scanf("%lld",&n);
        while(n != 0)
        {
            rem = n % 10;
            n = n / 10;
            a[i] = rem;
            i++;
        }
        for(j = 0; j < i; j++)
        {
            printf("%lld",a[j]);
        }
        printf("\n");
    }
    return 0;
}
