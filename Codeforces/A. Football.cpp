#include<bits/stdc++.h>
using namespace std;

int main()
{
    string c;
    int i,l,x=0;

    cin >> c;
    l = c.size();

    if(l < 7)
    {
        cout << "NO" << endl;
    }
    else
    {
        for(i = 1; i <= l; i++)
        {
           if(c[i] == c[i - 1])
           {
               x++;
           }
        }
    }



    return 0;
}
