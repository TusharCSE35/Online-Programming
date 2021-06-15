#include<stdio.h>
#include <stdlib.h>
int main()
{
    int n,i,j,s1=0,s2=0,sub;
    scanf("%d",&n);
    int a[n][n];
    for( i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for( i = 0; i < n; i++)
    {
        s1 = s1 + a[i][i];
    }
    for(i = 0,j = 1; i < n; i++)
    {
           s2 = s2 + a[i][n-j];
           j++;
    }
    sub = s1-s2;
    printf("%d",abs(sub));
    return 0;
}
