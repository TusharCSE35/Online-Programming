#include<stdio.h>
int main()
{
    int x,y,i,sum=0;
    scanf("%d %d",&x,&y);
    if(y > x)
    {
        for(i = x; i <= y; i++)
        {
            if(i % 13 == 0)
            {
                continue;
            }
            else
            {
                sum = sum+i;
            }
        }
    }
    else {
        for(i = y; i <= x; i++)
        {
            if(i % 13 == 0)
            {
                continue;
            }
            else
            {
                sum = sum+i;
            }
        }
    }
    printf("%d\n",sum);
    return 0;
}
