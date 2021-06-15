#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q,a,b,n,S,i,j,k,c;
    scanf("%d",&q);
    for(i = 1; i <= q; i++)
    {
        c = 0;
        scanf("%d %d %d %d",&a,&b,&n,&S);
        int x[a];
        for(j = 1; j <= a; j++)
        {
            for(k = 1; k <= b; k++)
            {
                if((j*n + k*1) == S)
                {
                    c++;
                    break;
                }
            }
        }
        if(c > 0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}
