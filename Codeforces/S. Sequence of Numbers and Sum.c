#include<stdio.h>
int main()
{
    int x,y,i,sum;
    while(1)
    {
        sum = 0;
        scanf("%d %d",&x,&y);
        if((x <= 0) || (y <= 0))
        {
            break;
        }
       else if(x >= y)
        {
            for(i = y; i <= x; i++)
            {
                sum = sum + i;
                printf("%d ",i);
            }
            printf("sum =%d\n",sum);
        }
        else
        {
            for(i = x; i <= y; i++)
            {
                sum = sum + i;
                printf("%d ",i);
            }
            printf("sum =%d\n",sum);
        }
    }
    return 0;
}
