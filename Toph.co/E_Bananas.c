#include<stdio.h>
int main()
{
    long long k,n,w,x,i,sum = 0;
    scanf("%lld %lld %lld",&k,&n,&w);
    for(i = 1; i <= w; i++)
    {
        sum = sum + i*k;
    }
    if(sum > n)
    {
        x = sum - n;
        printf("%d",x);
    }
    else
    {
        printf("0");
    }
    return 0;
}
