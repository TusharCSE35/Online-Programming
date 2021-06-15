#include <stdio.h>
int main()
{
    long long i, N,Odd;
    scanf("%lld",&N);
    if(N%2 == 0 )
    {
        Odd = N/2 ;
    }
    else
    {
        Odd = (N/2) + 1;
    }
    printf("%lld\n",Odd);
    return 0 ;
}
