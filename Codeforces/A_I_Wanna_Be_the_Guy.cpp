#include<bits/stdc++.h>
using namespace std;

int x[110];

int main()
{
    int N,a,i,p,q,cnt = 0;

    cin >> N >> p;
    for(i = 1; i <= p; i++)
    {
        cin >> a;
        x[a]++;
    }

    cin >> q;
    for(i = 1; i <= q; i++)
    {
        cin >> a;
        x[a]++;
    }

    for(i = 1; i <= N; i++)
    {
        if(x[i] == 0)
        {
            cnt++;
        }
    }


    if(cnt == 0)
    {
        cout << "I become the guy." << endl;
    }
    else
    {
        cout << "Oh, my keyboard!" << endl;
    }

  return 0;
}

