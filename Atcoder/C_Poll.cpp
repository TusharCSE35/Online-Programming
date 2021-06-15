/*********************************************************************************\
*  _________  _      _  ________  _       _       __       ________               *
* |___   ___|| |    | ||  ______|| |     | |     /  \     |  ____  |              *
*     | |    | |    | || |______ | |_____| |    / /\ \    | |____| |              *
*     | |    | |    | ||______  ||  _____  |   / /__\ \   |  __  __|              *
*     | |    | |____| | ______| || |     | |  / ______ \  | |  \ \                *
*     |_|    |________||________||_|     |_| /_/      \_\ |_|   \_\               *
*  ________       __      ________  _    __       __       ________               *
* |  ______|     /  \    |  ____  || |  / /      /  \     |  ____  |              *
* | |______     / /\ \   | |____| || |_/ /      / /\ \    | |____| |              *
* |______  |   / /__\ \  |  __  __||  __ \     / /__\ \   |  __  __|              *
*  ______| |  / ______ \ | |  \ \  | |  \ \   / ______ \  | |  \ \                *
* |________| /_/      \_\|_|   \_\ |_|   \_\ /_/      \_\ |_|   \_\               *
*                                                                                 *
*                                                                                 *
*   Department of Computer Science & Engineering                                  *
*   Student ID : 18CSE035                                                         *
*   Bangabnadhu Sheikh Mujibur Rahman Science & Technology University,Gopalgonj.  *
*                                                                                 *
\*********************************************************************************/

//Now Write to Code ___________________________

#include<bits/stdc++.h>
using namespace std;

int cnt[10000];

int Same(string x,string y)
{
    int n = x.size(),m = y.size();
    if(n != m)
    {
        return 0;
    }
    else if(n == m)
    {
        for(int i = 0; i < n; i++)
        {
            if(x[i] != y[i])
            {
                return 0;
            }
        }
    }
        
    return 1;
}

int main()
{
    int N,i,j,k=0,l;

    cin >> N;
    string S[N+1],T[N+1];

    for(i = 0; i < N; i++)
    {
        cin >> S[i];
    }

    for(i = 0; i < N; i++)
    {
        cnt[k] = 1,l=0;
        for(j = i+1; j < N-1; j++)
        {
            if(1 == Same(S[i],S[j]) && S[i] != "AAA" && S[j] != "AAA")
            {
                cnt[k]++; 
                T[k] = S[i];
                S[j] = "AAA";
                l++;

            }
        }
        if(l > 0)
        {
            k++;
        }
    }

    int x = 0,z;
    for(i = 0; i < k; i++)
    {
        if(x < cnt[i])
        {
            x = cnt[i];
            z = i;
        }
    }
    cout << T[i] << endl;
    cnt[i] = 0;

    for(i = 0; i < k; i++)
    {
        if(x == cnt[i])
        {
            cout << T[i] << endl;
        }
    }



    return 0;
}