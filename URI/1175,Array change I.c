#include<stdio.h>
int main()
{
    int a[20],b[20],i,j;
    for(i = 0; i < 20; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i = 19,j = 0; j < 20; j++,i--)
    {
        b[j] = a[i];
        printf("N[%d] = %d\n",j,a[i]);
    }
    return 0;
}
