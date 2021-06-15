#include<stdio.h>
int main()
{
    int x,i;
    scanf("%d",&x);
    printf("I");
    for(i = 1; i <= x; i++)
    {
        if(i == 1)
        {
            printf(" hate");
        }
        else if(i % 2 != 0)
        {
            printf(" that I hate");
        }
        else
        {
            printf(" that I love");
        }
    }
    printf(" it");
    return 0;
}
