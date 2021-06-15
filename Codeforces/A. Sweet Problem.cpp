#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,r,i,j,x[10];

    cin >> t;
    for(i = 1; i <= t; i++)
    {
        int A = 0;
        for(j = 0; j < 3; j++)
        {
            cin >> x[j];
        }
        sort(x,x+3);
        r = x[2]-x[1];
        if (x[0] <= r)
        {
            A = x[0] + x[1];
        }
        else
        {
            A = x[0];
            x[2] = x[1];
            x[0] = x[0] - r;
            x[1] = x[1] - (x[0]/2);
            x[2] = x[2] - (x[0] - x[0]/2);
            A = A + min(x[1],x[2]);
        }
        cout << A << endl;
    }

    return 0;
}
