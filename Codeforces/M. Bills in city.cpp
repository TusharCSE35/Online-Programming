#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N,a[100000];

    cin >> N;
    for(int i = 0; i < N; i++)
    {
        cin >> a[i];
    }

    sort(a,a+N);
    int x = abs(a[N-1]-a[0]);
    cout << x << endl;

    return 0;
}
