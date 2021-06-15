#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,n1,n2,temp,i;
    cin >> T;
    for(i = 1; i <= T; i++)
    {
        cin >> n1 >> n2;
        if(n1 < n2)
        {
            while(n1 != 0)
            {
                temp = n2 % n1;
                n2 = n1;
                n1 = temp;
            }
            cout << n2 << endl;
        }
        else
        {
            while(n2 != 0)
            {
                temp = n1 % n2;
                n1 = n2;
                n2 = temp;
            }
        cout << n1 << endl;
        }
    }
    return 0;
}
