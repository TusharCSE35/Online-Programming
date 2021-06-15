#include<stdio.h>
int main()
{
    int a[3],x[3],i,j,temp;
    for(i = 0; i < 3; i++)
    {
        scanf("%d",&a[i]);
        x[i] = a[i];
    }
    for(i = 0; i < 2; i++)
    {
        for(j = i+1; j < 3; j++)
        {
           if(a[i] > a[j])
           {
               temp = a[i];
               a[i] = a[j];
               a[j] = temp;
           }
        }
    }
    for(i = 0; i < 3; i++)
    {
        printf("%d\n",a[i]);
    }
    printf("\n");
    for(i = 0; i < 3; i++)
    {
        printf("%d\n",x[i]);
    }
    return 0;
}
