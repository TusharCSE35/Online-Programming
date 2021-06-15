#include<stdio.h>
int main()
{
    int i,c1=0,c2=0,a[3],b[3];
    for(i = 0; i < 3; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i = 0; i < 3; i++)
    {
        scanf("%d",&b[i]);
    }
    for(i = 0; i < 3; i++)
    {
        if(a[i] > b[i])
        {
            c1++;
        }
        if(a[i] < b[i])
        {
            c2++;
        }
    }
    printf("%d %d",c1,c2);
}
