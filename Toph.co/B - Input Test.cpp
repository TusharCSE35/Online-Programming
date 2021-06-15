#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,k,x,i,cont = 0;

    cin >> n >> k;
    for(i = 1; i <= n; i++)
    {
        cin >> x;
        if((x%k) == 0)
        {
            cont++;
        }
    }

    cout << cont;

    return 0;
}
