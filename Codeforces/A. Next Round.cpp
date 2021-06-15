#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,i,a[101],m,x,c=0,d =0;
    scanf("%d %d",&n,&k);
    for(i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    m = a[k-1];
    x = m;
    d = 0;
    if(x == 0)
    {
        for(i = 0; i < n; i++)
        {
            if(a[i] > 0)
            {
                d++;
            }
        }
        printf("%d",d);
    }
    else
    {
        for(i = 0; i < n; i++)
        {
            if(a[i] >= m)
            {
                c++;
            }
        }
        printf("%d\n",c);
    }
    return 0;
}
