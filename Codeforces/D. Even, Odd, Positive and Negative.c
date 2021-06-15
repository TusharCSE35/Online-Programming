#include<stdio.h>
int main()
{
    long long int x;
    int i,y,e=0,o=0,p=0,n=0;
    scanf("%d",&y);
    for(i = 1; i <= y; i++)
    {
        scanf("%lld",&x);
        if(x > 0)
        {
            p++;
        }
        if(x < 0)
        {
            n++;
        }
        if(x % 2 == 0)
        {
            e++;
        }
        if(x % 2 != 0)
        {
            o++;
        }
    }
    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d",e,o,p,n);
    return 0;
}
