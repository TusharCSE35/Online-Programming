#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N,t1,t2,i,j,k,l;
    scanf("%d",&N);
    for(i = 1; i <= N; i++)
    {
        scanf("%d %d",&t1,&t2);
        int ct = 0;
        for(j = t1; j <= t2; j++)
        {
            int c = 0;
            for(k = 2; k < t1; k++)
            {
                if(j % k == 0)
                {
                    c++;
                    break;
                }
            }
            int x,sum = 0;
            if(c == 0)
            {
                while(j != 0)
                {
                    x = j % 10;
                    j = j/10;
                    sum = sum + x;
                }
                int cn = 0;
                for(l = 2; l < sum; l++)
                {
                    if(sum == 2)
                    {
                        ct++;
                    }
                    else if(sum > 2)
                    {
                        if(sum % l == 0)
                        {
                            cn++;
                            break;
                        }
                    }
                }
                if(cn == 0)
                {
                    ct++;
                }
            }
        }
        printf("%d\n",ct);
    }

return 0;
}
