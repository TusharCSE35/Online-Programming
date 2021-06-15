#include<stdio.h>
int main()
{
    int i,j,k,x[10],temp,count[3];
    for(i = 0; i < 4; i++)
    {
        scanf("%d",&x[i]);
    }
    for(i = 0; i < 3; i++)
    {
        for(j = i+1; j < 4; j++)
        {
            if(x[i] > x[j])
            {
                temp = x[i];
                x[i] = x[j];
                x[j] = temp;
            }
        }
    }
    for(i = 3,k = 0; i > 0; i--,k++)
    {
       count[k] = x[3] - x[i - 1];
    }
    for(k = 0; k < 3; k++)
    {
        printf("%d ",count[k]);
    }
    return 0;
}
