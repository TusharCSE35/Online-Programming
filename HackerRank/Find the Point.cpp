#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,i,Px,Py,Qx,Qy,Rx,Ry;
    scanf("%d",&N);
    for(i = 1; i <= N; i++)
    {
        scanf("%d %d %d %d",&Px,&Py,&Qx,&Qy);
        Rx = (Qx - Px) + Qx;
        Ry = (Qy - Py) + Qy;
        printf("%d %d\n",Rx,Ry);
    }
    return 0;
}
