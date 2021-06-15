#include<stdio.h>
int main()
{
    int n,i,count;
    scanf("%d",&n);
    int a[n];
    for(i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    int min = a[0];
    for(i = 1; i < n; i++)
    {
        if(a[i] < min)
        {
            min = a[i];
            count = i;
        }
    }
    if(min == a[0])
    {
        count = 0;
    }
    else
    {
        count;
    }
    printf("Menor valor: %d\n",min);
    printf("Posicao: %d\n",count);
    return 0;
}
