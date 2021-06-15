#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q,n,i,j,x1,x2;
    scanf("%d",&q);
    for(i = 1; i <= q; i++)
    {
        scanf("%d",&n);
        int A[n];
        for(j = 0; j < n; j++)
        {
            scanf("%d",&A[j]);
        }
        x1 = 0;
        x2 = 0;
        for(j = 0; j < n; j++)
        {
            if(abs(A[0] - A[j+1])== 1)
            {
                x1++;
            }
            if(abs(A[0] - A[j+1]) > 1)
            {
                x2++;
            }
        }
        if(x1 > 0 && x2 > 0)
        {
            printf("2\n");
        }
        else if(n ==1)
        {
            printf("1\n");
        }
        else
        {
            printf("1\n");
        }
    }
    return 0;
}
