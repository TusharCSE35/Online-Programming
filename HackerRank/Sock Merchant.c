#include<stdio.h>
int main()
{
    int n,a[100],i,j,count,sum=0,x=0;
    scanf("%d",&n);
    for(i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i = 0; i < n; i++)
    {
        if(a[i] == 0)
        {
            x++;
        }
    }
    for(i = 0; i < n; i++)
    {
        count = 0;
        for(j = i+1; j < n; j++)
        {
            if(a[i] == a[j] && a[i] != 0 & a[j] != 0)
            {
                count++;
                a[i] = 0;
                a[j] = 0;
            }
        }
        sum = sum + (x/2) + ((count+1)/2);
    }
    printf("%d",sum);
    return 0;
}
