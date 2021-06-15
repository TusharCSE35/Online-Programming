#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int T,a;

    cin >> T;
    for(int i = 1; i <= T; i++)
    {
        cin >> a;
        if(a % 2 == 0)
            cout << "Case " << i << ": " << "even" << endl;
        else
             cout << "Case " << i << ": " << "odd" << endl;
    }

    return 0;
}
