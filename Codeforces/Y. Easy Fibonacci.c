#include<stdio.h>
int main()
{
    int a[50],n,i;
    a[0] = 0;
    a[1] = 1;
    scanf("%d",&n);
    for(i = 2; i < n; i++)
    {
        a[i] = a[i-1] + a[i-2];
    }
    for(i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
