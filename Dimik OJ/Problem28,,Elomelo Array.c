#include<stdio.h>
int main()
{
    int T,n,a[20],b[20],c[20],i,j,k,count,mount,min,max;
    scanf("%d",&T);
    for(i = 1; i <= T; i++)
    {
        count = 0;
        mount = 0;
        scanf("%d",&n);
        for(j = 0; j < n; j++)
        {
            scanf("%d",&a[j]);
            b[j] = a[j];
            c[j] = a[j];
        }
        for(j = 0; j < n-1; j++)
        {
            for(k = j + 1; k < n; k++)
            {
                if(b[j] > b[k])
                {
                    min = b[k];
                    b[k] = b[j];
                    b[j] = min;
                }
            }
        }
        for(j = 0; j < n-1; j++)
        {
            for(k = j + 1; k < n; k++)
            {
                if(c[j] < c[k])
                {
                    max = c[k];
                    c[k] = c[j];
                    c[j] = max;
                }
            }
        }
        for(j = 0; j < n; j++)
        {
            if(a[j] == b[j])
            {
                count++;
            }
            if(a[j] == c[j])
            {
                mount++;
            }
        }
        if(n == count)
        {
            printf("YES\n");
        }
        else if(n == mount)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}
