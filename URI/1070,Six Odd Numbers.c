#include<stdio.h>
int main()
{
    int x,i;
    scanf("%d",&x);
    for(i = 1; i <= 6; i++)
    {
        if(x % 2 == 0)
        {
            printf("%d\n",x + 1);
            x = x + 1;
        }
        else if(x % 2 == 1)
        {
            printf("%d\n",x + 2);
            x = x + 2;
        }
    }
    return 0;
}
