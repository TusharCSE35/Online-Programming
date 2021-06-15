#include<stdio.h>
int main()
{
    int x,y,i;
    for(i = 1; i <= 100; i++)
    {
        scanf("%d %d",&x,&y);
        if(x > y)
        {
            printf("Decrescente\n");
        }
        if(x < y)
        {
            printf("Crescente\n");
        }
        if(x == y)
        {
            break;
        }
    }
    return 0;
}
