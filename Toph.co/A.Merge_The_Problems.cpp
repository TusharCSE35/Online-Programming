#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,a,b,sum,i;

    cin >> T;
    for(i = 1; i <= T; i++)
    {
        cin >> a >> b;
        sum = a + b;
        cout << "case " << i << ": " << sum << endl;
    }

    return 0;
}
