#include<stdio.h>
int main()
{
    int i,j,a[4],temp;

    for(i = 0; i < 4; i++)
    {
        scanf("%d",&a[i]);
    }

    for(i = 0; i < 3; i++)
    {
        for(j = i+1; j < 4; j++)
        {
            if(a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("%d %d",a[0],a[3]);
    return 0;
}
