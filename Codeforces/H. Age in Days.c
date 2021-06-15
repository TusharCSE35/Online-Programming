#include<stdio.h>
int main()
{
    int n,y = 0,m = 0,d = 0;
    scanf("%d",&n);
    if(n >= 365)
    {
        y = y + n /365;
        n = n % 365;
    }
    if(n >= 30)
    {
        m = m+ n/30;
        n = n % 30;
    }
    if(n >= 0)
    {
        d = d +n;
    }
    printf("%d years\n%d months\n%d days",y,m,d);
    return 0;
}
