#include<stdio.h>
int main()
{
    long long int T,a,b,c,i,j;
    scanf("%lld",&T);
    for(i = 1; i <= T; i++)
    {
        scanf("%lld %lld %lld",&a,&b,&c);
        for(j = 1; j <= c; j++)
        {
            if(j % a == 0 && j % b == 0)
            {
                printf("%lld\n",j);
            }
        }
        if(T >= i + 1)
        {
            printf("\n");
        }
    }
    return 0;
}
