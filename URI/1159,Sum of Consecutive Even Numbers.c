#include<stdio.h>
int main()
{
    int x,i,sum = 0;
    while(1)
    {
        scanf("%d",&x);
        if(x == 0)
        {
            break;
        }
        else if(x % 2 == 0)
        {
            for(i = 1 ; i <= 5; i++)
            {
                sum = sum + x;
                x = x + 2;
            }
        }
        else
        {
            for(i = 1; i <= 5; i++)
            {
                sum = sum + x + 1;
                x = x + 2;
            }
        }
        printf("%d\n",sum);
        sum = 0;
    }
}
