#include<stdio.h>
int main()
{
    int T,n,i,x;
    scanf("%d",&T);
    for(i = 1; i <= T; i++)
    {
        scanf("%d",&n);
        if(n <= 10)
        {
            printf("0 %d\n",n);
        }
        else
        {
           x = n - 10;
           printf("10 %d",x);
        }
    }
    return 0;
}
