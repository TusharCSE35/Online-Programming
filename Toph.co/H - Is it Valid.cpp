#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,A,B,C,i;

    cin >> T;
    for(i = 1; i <= T; i++)
    {
        cin >> A >> B >> C;
        if((A+B+C) == 180)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
