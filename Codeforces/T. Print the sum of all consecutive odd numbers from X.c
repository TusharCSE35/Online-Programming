#include<stdio.h>
int main()
{
    int t,i,j,x,y,sum;
    scanf("%d",&t);
    for(i = 1; i <= t; i++)
    {
        sum = 0;
        scanf("%d %d",&x,&y);
        if(x % 2 == 0)
            {
                x = x +1;
            }
        for(j = 1; j <= y; j++)
        {
            sum = sum + x;
            x = x + 2;
        }
       printf("%d\n",sum);
    }
    return 0;
}
