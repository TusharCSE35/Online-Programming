#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,A,B,i,X;

    cin >> T;

    for(i = 1; i <= T; i++)
    {
        cin >> A >> B;
        X = A % B;
        cout << X << endl;
    }

    return 0;
}
