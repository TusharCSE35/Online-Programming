#include<stdio.h>
int main()
{
    double x;
    int T,i,count;
    scanf("%d",&T);
    for(i = 1; i <= T; i++)
    {
       count = 0;
        scanf("%lf",&x);
        while(x > 1)
        {
            x = x/2;
            count++;
        }
        printf("%d days",count);
        if(T >= i+1)
        {
            printf("\n");
        }
    }
    return 0;
}
