#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d;

    cin >> a >> b >> c >> d;

    if(a==b && b==c && c==d && d==a)
    {
        cout << "3" << endl;
    }
    else if((a==b && b==c && a!=d)||(a==b && b==d && a!=c)||(a==c && c==d && a!=b)||(b==c && c==d && a!=b))
    {
        cout << "2" << endl;
    }
    else if((a==b && c==d && a!=c)||(a==c && b==d && a!=b)||(a==d && b==c && a!=b))
    {
        cout << "2" << endl;
    }
    else if((a==b && a!=c && a!=d && c!=d)||(a==c && a!=b && a!=d && b!=d)||(d==a && d!=c && d!=b && b!=c)||(b==c && b!=a && b!=d && a!=d)||(b==d && b!=a && b!=c && a!=c)||(c==d && c!=b && c!=a && a!=b))
    {
        cout << "1" << endl;
    }
    else if(a!=b && b!=c && c!=d && d!=a)
    {
        cout << "0" << endl;
    }

    return 0;
}
