#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int T,i,N,r,sum;

    cin >> T;
    for(i = 1; i <= T; i++)
    {
        sum = 0;
        cin >> N;
        while(N != 0)
        {
           r = N  % 10;
           N = N/10;
           sum = sum + r;
        }
        cout << sum;
    }

    return 0;
}
