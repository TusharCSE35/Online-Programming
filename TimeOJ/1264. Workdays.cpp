#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m,n,i,sum = 0;

    scanf("%d %d",&m,&n);
    if(n >= m)
    {
        for(i = m; i <= n; i++)
        {
            sum = sum + i;
        }
    }
    else
    {
        for(i = n; i <= m; i++)
        {
            sum = sum + i;
        }
    }

    printf("%d",sum);
    return 0;
}
