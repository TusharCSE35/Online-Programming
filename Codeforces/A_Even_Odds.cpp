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
	long long n,m,R;

	cin >> n >> m;
	
	/*long long a[n+1];

	if(n%2 == 0)
	{
		j = 0;
		for(i = 1,k = 1; i <= n/2; i++,k+=2)
		{
			a[j] = k;
			j++;
		}

		for(i = 1,k = 2; i <= n/2; i++,k+=2)
		{
			a[j] = k;
			j++;
		}
	}
	else
	{
		j = 0;
		for(i = 1,k = 1; i <= (n/2)+1; i++,k+=2)
		{
			a[j] = k;
			j++;
		}

		for(i = 1,k = 2; i <= n/2; i++,k+=2)
		{
			a[j] = k;
			j++;
		}
	}

	cout << a[m-1] << endl;
	*/

	if(n%2 == 1)
	{
		if(m <= (n/2)+1)
		{
			R = m*2 - 1;
		}
		else
		{
			R = (m - ((n/2)+1))*2; 
		}

		cout << R << endl;
	}

	else
	{
		if(m <= n/2)
		{
			R = m*2 - 1;
		}
		else
		{
			R = (m - (n/2))*2;
		}

		cout << R << endl;
	}

    
    return 0;
}