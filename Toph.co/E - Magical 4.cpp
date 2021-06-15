#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,N,i,cnt,r;

    cin >> T;
    for(i = 1; i <= T; i++)
    {
        cin >> N;
        cnt = 0;
        while(N != 0)
        {
            r = N%10;
            N = N / 10;
            if(r == 4)
            {
                cnt++;
            }
        }

        cout << cnt << endl;
    }

    return 0;
}
