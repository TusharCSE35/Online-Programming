#include<bits/stdc++.h>
using namespace std;

int main()
{
    int X,Y;
    int i = 1,cnt = 0;
    cin >> X >> Y;

    if(X >= Y)
    {
        cout << X-Y << endl;
    }

    else
    {

        while(X != Y)
        {
            if(i % 2 != 0)
            {
                X = X - 1;
            }
            else
            {
                X = X * 2;
            }
            i++;
            cnt++;
        }
        cout << cnt << endl;
    }

    return 0;
}
