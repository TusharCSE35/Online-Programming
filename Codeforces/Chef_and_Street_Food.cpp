/*#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,N,S,V,P,i;

    cin >> T;

    while(T--)
    {
        cin >> N;
        int result[N+1];
        for(i = 0; i < N; i++)
        {
            cin >> S >> V >> P;
            S++;
            result[i] = (V/S)*P;
        }
        sort(result,result+N);
        cout << result[N-1] << endl;
    }


    return 0;
}
*/

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


int main()
{
    long long T,N,a,b,c,i,result,result1;

    cin >> T;
    while(T--)
    {
        result = 0;
        result1 = 0;
        int cnt = 0;
        cin >> N >> a >> b >> c;
        int x[N+1];

        for(i = 0; i < N; i++)
        {
            cin >> x[i];
            if((x[i] > a && x[i] < b)||(x[i] > b && x[i] < a))
            {
                result1 = c + abs(x[i]-b) + abs(x[i]-a);
                cnt++;
            }

        }
        if(cnt == 0)
        {
            sort(x,x+N);
            result = c + abs(x[0] - b) + abs(x[0] - a);
            cout << result << endl;
        }
        else
        {
            cout << result1 << endl;
        }
    }

    return 0;
}

