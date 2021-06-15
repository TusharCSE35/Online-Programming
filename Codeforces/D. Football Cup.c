#include<stdio.h>
int main()
{
    int T,x,y,i;
    scanf("%d",&T);
    for(i = 1; i <= T; i++)
    {
        scanf("%d %d",&x,&y);
        if(x == y)
        {
            printf("Iskandar\n");
        }
        else if(x > y)
        {
            printf("Bashar\n");
        }
        else
        {
            printf("Hamada\n");
        }
    }
    return 0;
}
