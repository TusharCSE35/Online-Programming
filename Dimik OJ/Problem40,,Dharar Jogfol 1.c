#include<stdio.h>
int main()
{
    int T,x,k,i,sum,power;
    scanf("%d",&T);
    while(T--)
    {
        sum = 1,power = 1;
        scanf("%d %d",&x,&k);
        for(i = 1; i <= k; i++)
        {
            power = power * x;
            sum = sum + power;
        }
        printf("Result = %d\n",sum);
    }
    return 0;
}
