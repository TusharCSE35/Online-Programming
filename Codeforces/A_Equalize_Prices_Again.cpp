#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,n,i,sum,x;

    cin >> T;
    while(T--)
    {
        sum = 0;
        cin >> n;
        int a[n+1];

        for(i = 0; i < n; i++)
        {
            cin >> a[i];
            sum = sum + a[i];
        }

        x = sum/n;
        if(x*n == sum)
        {
            cout << x << endl;
        }
        else
        {
            cout << x+1 << endl;
        }
    }


    return 0;
}
