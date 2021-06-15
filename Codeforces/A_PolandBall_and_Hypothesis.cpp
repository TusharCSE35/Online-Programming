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
	int n,m,x,i,j,cnt=0;

	cin >> n;
	if(n == 1)
	{
		cout << "3" << endl;
	}
	else if(n == 2)
	{
		cout << "4" << endl;
	}

	else
	{
	    for(m = 1; m <= n; m++)
	    {
		    x = n*m + 1;
		    cnt = 0;
		    for(j = 2; j < x; j++)
		    {
			    if(x%j == 0)
			    {
				    cnt++;
				    break;
			    }
		    }
		    if(cnt > 0)
		    {
			    i = m;
			    break;
		    }
	    }

	    cout << i << endl;
    }


    return 0;
}