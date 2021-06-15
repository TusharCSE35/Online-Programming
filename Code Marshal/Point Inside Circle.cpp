#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,Cx,Cy,Px,Py,r,x,y,R;

    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> Cx >> Cy >> r >> Px >> Py;

        x = Px - Cx;
        y = Py - Cy;
        R = sqrt(x*x + y*y);

        if(R < r)
        {
            cout << "Case " << i << ": " << "yes" << endl;
        }
        else
        {
            cout << "Case " << i << ": " << "no" << endl;
        }
    }

    return 0;
}
