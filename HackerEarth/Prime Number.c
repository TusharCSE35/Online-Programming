#include<stdio.h>
int main()
{
    int n,i,j,count;
    scanf("%d",&n);
    for(i = 2; i <= n; i++)
    {
        if(i==2) printf("%d ",i);
        else
        {
            count = 0;
            for(j = 2; j < i; j++)
            {
                if(i % j == 0)
                {
                    count++;
                    break;
                }
            }
            if(count == 0) printf("%d ",i);
        }
    }
    return 0;
}
