#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,i,n,cnt;
    cin >> T;
    while(T--)
    {
        cnt = 0;
        cin >> n;
        char a[n+1];
        for(i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for(i = 0; i < n; i++)
        {
            if(a[i] == 'J' && a[i+1] == 'G' && a[i+2] == 'E' && a[i+3] == 'C')
            {
                cnt++;
                i += 3;
            }
        }

        cout << cnt << endl;
    }



    return 0;
}

