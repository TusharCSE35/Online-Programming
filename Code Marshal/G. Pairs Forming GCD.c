#include<stdio.h>
int main()
{
    long long int i,gcd,rem,T,N,P;
    scanf("%lld",&T);
    for(i = 1; i <= T; i++)
    {
        scanf("%lld %lld",&N,&P);
        if(N < P)
        {
            while(P != 0)
            {
                rem = N % P;
                N = P;
                P = rem;
            }
            gcd = N;
        }
        else
        {
            while(N != 0)
            {
                rem = P % N;
                P = N;
                N = rem;
            }
            gcd = P;
        }
        printf("Case %lld: %lld\n",i,gcd);
    }
    return 0;
}
