#include<stdio.h>
int main()
{
    int n,a[1000],i;
    scanf("%d",&n);
    for(i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
        if(a[i] <= 10)
        {
            printf("A[%d] = %d\n",i,a[i]);
        }
    }
    return 0;
}
