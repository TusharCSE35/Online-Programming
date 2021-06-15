#include<bits/stdc++.h>
using namespace std;

int solve()
{
    int i,L;
    char j;
    string s;

    cin >> s;
    L = s.size();

    if(L == 1)
    {
        if(s[0] == '?')
        {
            s[0] = 'a';
            cout << s << endl;
        }
    }
    else
    {
        for(i = 1; i < L; i++)
        {
            if(s[i] == s[i-1] && s[i] != '?')
                return cout << "-1" << endl;
        }

        for(i = 0; i < L; i++)
        {
            if(s[i] == '?')
            {
                for(j = 'a'; j <= 'c'; j++)
                {
                    if((i - 1 < 0 || s[i - 1] != j) && (i + 1 >= L || s[i + 1] != j))
                    {
                        s[i] = j;
                        break;
                    }
                }
            }
        }

        for(i = 0; i < L; i++)
        {
            if(s[i] == '?')
                return cout << "-1" << endl;
        }
        cout << s << endl;
    }
    return 0;
}

int main()
{

    int test;
    cin >> test;
    while (test--)
    {
        solve();
    }
    return 0;
}
