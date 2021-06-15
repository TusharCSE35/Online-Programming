#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,i,A,B,C,cnt=0;

    cin >> T;

    for(i = 1; i <= T; i++)
    {
        cin >> A >> B >> C;
        if((A+B+C) >= 2)
        {
            cnt++;
        }
    }

    cout << cnt;

    return  0;
}
