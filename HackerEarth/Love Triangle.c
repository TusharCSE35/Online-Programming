#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    if(x < 10)
    {
        printf("%d",x);
    }
    if(x >= 10 && x < 100)
    {
        printf("%d",x+1);
    }
    if(x >= 100 && x < 1000)
    {
        printf("%d",x+21);
    }
    if(x >= 1000 && x < 10000)
    {
        printf("%d",x+31);
    }
    return 0;
}
