#include<stdio.h>
int main()
{
    int X,Y,i,j,sum=0;
    scanf("%d %d",&X,&Y);
    if(X>Y)
    {
        for(j = Y+1; j < X; j++)
        {
            if(j % 2 != 0)
            {
                sum = sum + j;
            }
        }
    }
    else
    {
        for(j = X+1; j < Y; j++)
        {
            if(j % 2 !=0)
            {
                sum = sum + j;
            }
        }
    }
    printf("%d\n",sum);
    return 0;
}
