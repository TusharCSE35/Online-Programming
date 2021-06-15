#include<stdio.h>
int main()
{
    int n,i,x=0;
    scanf("%d",&n);
    for(i = 1; i <= n; i++)
    {
        if(i % 2 == 0)
        {
            printf("%d\n",i);
            x++;
        }
    }
    if(x == 0)
    {
        printf("-1");
    }
    return 0;
}
