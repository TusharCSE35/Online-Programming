#include<stdio.h>
int main()
{
    long long int x,y;
    scanf("%lld",&x);
    y = x / 5;
    if(y*5 == x)
    {
        printf("%lld",y);
    }
    else
    {
        printf("%lld",y+1);
    }
    return 0;
}
