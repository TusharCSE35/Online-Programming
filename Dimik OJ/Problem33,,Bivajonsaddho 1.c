#include<stdio.h>
int main()
{
    long long int T,a,b,c,i,j,k;
    scanf("%lld",&T);
    for(i = 1; i <= T; i++)
    {
        scanf("%lld %lld %lld",&a,&b,&c);
        for(j = a; j <= b; j++)
        {
            if(j % c == 0)
            {
                printf("%lld\n",j);
            }
        }
        if(T >= i+1)
        {
            printf("\n");
        }
    }
    return 0;
}
