#include<stdio.h>
int main()
{
    int n,x;
    scanf("%d",&n);
    x = n / 1000;
    if(x % 2 == 0)
    {
        printf("EVEN");
    }
    else
    {
        printf("ODD");
    }
    return 0;
}
