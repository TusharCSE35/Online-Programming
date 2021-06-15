#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,x,y;

    cin >> a >> b;
    x = a;
    while(a >= b)
    {
       x = x + a/b;
       y = a - b*(a/b);
       a = a/b + y;
    }
    cout << x << endl;


    return 0;
}
