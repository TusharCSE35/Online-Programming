#include<stdio.h>
int main()
{
    long long n,a,b,k,i,A,B,sum;
    scanf("%lld",&n);
    for(i = 1; i <= n; i++)
    {
        scanf("%lld %lld %lld",&a,&b,&k);
        if(k % 2 == 0)
        {
            A = a * (k/2);
        }
        else
        {
            A = a * ((k/2) + 1);
        }
        B = b * (k/2);
        sum = A - B;
        printf("%lld\n",sum);
    }
    return 0;
}
