#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,i;
    double r,pi,result;
    scanf("%d",&T);
    pi = 2*acos(0.0);
    for(i = 1; i <= T; i++)
    {
        scanf("%lf",&r);
        result = ((r*2.0)*(r*2.0)) - (pi*r*r);
        printf("Case %d: %.2lf\n",i,result);
    }
    return 0;
}
