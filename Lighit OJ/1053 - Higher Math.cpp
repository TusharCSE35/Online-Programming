#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,a,b,c,i;

    cin >> T;
    for(i = 1; i <= T; i++)
    {
        cin >> a >> b >> c;
        if((a*a + b*b == c*c) || (a*a + c*c == b*b) || (c*c + b*b == a*a))
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
