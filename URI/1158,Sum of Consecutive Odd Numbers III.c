#include<stdio.h>
int main()
{
    int n,x,y,i,j,sum = 0;
    scanf("%d",&n);
    for(i = 1; i <= n; i++)
    {
        scanf("%d %d",&x,&y);
        if(x %2 != 0)
        {
            for(j = 1; j <= y; j++)
            {
                sum = sum + x;
                x = x + 2;
            }
        }
        else
        {
            for(j = 1; j <= y; j++)
            {
                sum = sum + x+1;
                x = x + 2;
            }
        }
        printf("%d\n",sum);
        sum = 0;
    }
    return 0;
}
