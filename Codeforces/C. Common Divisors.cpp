#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long i,j,n,num,x=0;
    scanf("%lld",&n);
    long long A[n];
    for(i = 0; i < n; i++)
    {
        scanf("%lld",&A[i]);
    }
    sort(A,A+n);
    for(i = 1; i <= A[n-1]; i++)
    {
        num = 0;
        for(j = 0; j < n; j++)
        {
            if(A[j] % i == 0)
            {
                num++;
            }
        }
        if(num == n)
        {
            x++;
        }
    }
    printf("%lld",x);
    return 0;
}
