#include<stdio.h>
int main()
{
    int n,a,b,i,j,count=0,k=0,l,m,z;
    scanf("%d",&n);
    int x[100];
    for(i = 2; i < n; i++)
    {
        for(j = 2; j < i; j++)
        {
            if(i % j == 0 )
            {
                count++;
                break;
            }
        }
        if(count == 0)
        {
            x[k] = i;
            k++;
        }
        count = 0;
    }

    for(l = 0; l < n; l++)
    {
        for(m = 0; m < n; m++)
        {
            if(n == x[l] + x[m])
            {
                printf("%d %d",x[l],x[m]);
                break;
            }
        }
        if(n == x[l] + x[m])
        {
            break;
        }
        else
        {
            printf("-1");
            break;
        }
    }
    return 0;
}
