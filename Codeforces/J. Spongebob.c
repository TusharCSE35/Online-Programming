#include<stdio.h>
int main()
{
    long long int m,n;
    int sum,x,y;
    scanf("%lld %lld",&m,&n);

    if(m < 10)
    {
        x = m;
    }
    if(n < 10)
    {
        y = n;
    }
    if(10 <= m)
    {
        x = m % 10;
    }
    if(n >= 10)
    {
        y = n % 10;
    }

    sum = x + y;
    printf("%d",sum);

    return 0;
}
