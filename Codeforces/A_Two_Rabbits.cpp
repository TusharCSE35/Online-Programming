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

/*#include<bits/stdc++.h>
using namespace std;


int main()
{
	long long T,x,y,a,b,sum,s;

    cin >> T;

    while(T--)
    {
        cin >> x >> y >> a >> b;
        sum = y-x;
        s = a + b;

        if(sum%s == 0)
        {
            cout << sum/s << endl; 
        }
        else
        {
            cout << "-1" << endl;
        }
    }

	return 0;
}*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    while(1)
    {
        int A,B,C;

    cin >> A >> B >> C;

    if(A == B && B == C)
    {
        cout << "No" << endl;
    }

    else if(A != B && B != C)
    {
        cout << "No" << endl;
    }
    else if((A == B && A != C) || (A == C && A!= B))
    {
        cout << "Yes" << endl;
    }
    }


    return 0;
}
