#include<stdio.h>
int main()
{
    int N,i,a[1000];
    scanf("%d",&N);
    for(i = 0; i < N; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i = 0; i < N; i++)
    {
        if(a[i] > 0)
        {
            printf("1");
        }
        else if(a[i] < 0)
        {
            printf("2");
        }
        else
        {
            printf("0");
        }
        printf("  ");
    }
    return 0;
}
