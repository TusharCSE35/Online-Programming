#include<stdio.h>
int main()
{
    int x,y,t,i,j,k,sum;
    scanf("%d",&t);
    for(k = 1; k <= t; k++)
    {
        sum = 0;
        scanf("%d  %d",&x,&y);
        if(x <= y)
        {
            for(i = x+1; i < y; i++)
            {
                if(i % 2 != 0)
                {
                    sum = sum + i;
                }
            }
        }
        else
        {
            for(j = y+1; j < x; j++)
            {
                if(j % 2 != 0)
                {
                    sum = sum + j;
                }
            }
        }
        printf("%d\n",sum);
    }
    return 0;
}
