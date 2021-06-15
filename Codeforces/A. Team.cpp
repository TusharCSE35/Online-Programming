#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a[3],i,j,c,sum = 0;
    scanf("%d",&n);
    for(i = 1; i <= n; i++)
    {
        c = 0;
        for(j = 0; j < 3; j++)
        {
            scanf("%d",&a[j]);
            if(a[j] == 1)
            {
                c++;
            }
        }
        if(c >= 2)
        {
            sum = sum + 1;
        }
    }
    printf("%d",sum);
    return 0;
}
