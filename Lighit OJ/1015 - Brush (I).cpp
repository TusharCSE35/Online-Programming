#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,N,a,sum;

    cin >> T;
    for(int i = 1; i <= T; i++)
    {
        cout << endl;
        cin >> N;
        sum = 0;
        for(int j = 1; j <= N; j++)
        {
            cin >> a;
            sum = sum + a;
        }
        cout << "Case " << i << ": " << sum;
       if(i < T)
        {
            cout << endl;
        }
    }

   return 0;
}
