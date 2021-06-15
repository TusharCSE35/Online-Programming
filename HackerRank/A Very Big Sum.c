#include<stdio.h>
int main()
{
    long long T,i,a,sum = 0;
    scanf("%lld",&T);
    for(i = 1; i <= T; i++)
    {
        scanf("%lld",&a);
        sum = sum + a;
    }
    printf("%lld",sum);
    return 0;
}
