#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,s,d,i=0,j;
    cin >> n;
    int a[n];
    while(n--)
    {
        cin >> s >> d;
        a[i] = s+d;
        i++;
    }
    int m = a[0];
    for(j = 1; j < n; j++)
    {
        if(m < a[j])
        {
            m = a[j];
        }
    }
    cout << m << endl;
    return 0;
}
