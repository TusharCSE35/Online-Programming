#include <bits/stdc++.h>
using namespace std;

int main()
{
    int H,N,A,sum = 0;

    cin >> H >> N;

    while(N--)
    {
        cin >> A;
        sum = sum + A;
    }

    if(H <= sum)
    {
        cout << "Yes" << endl;
    }

    else
    {
        cout << "No" << endl;
    }

    return 0;
}
