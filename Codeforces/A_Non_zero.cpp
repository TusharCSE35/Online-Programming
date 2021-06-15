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
/*
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T,N,i;

	cin >> T;
	while(T--)
	{
		cin >> N;
		int a[N+1],sum = 0,cnt = 0;

		for(i = 0; i < N; i++)
		{
			cin >> a[i];
			sum = sum + a[i];

			if(a[i] == 0)
			{
				cnt++;
			}
		}

        if(sum == 0 && cnt == 0)
		{
            cout << "1" << endl;
		}

		if(sum >= 0 && cnt > 0)
		{
			cout << cnt << endl;
		}
		if((sum > 0 || sum < 0) && cnt == 0)
		{
			cout << "0" << endl;
		}
		if(sum < 0 && cnt > 0)
		{
            sum = sum + cnt;
            if(sum == 0)
            {
            	cout << cnt+1 << endl;
            }
            else
            {
            	cout << cnt << endl; 
            }
		}
	}


	return 0;
}

*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T,N,i;

	cin >> T;
	while(T--)
	{
		cin >> N;
		int a[N+1],sum = 0,cnt = 0;

		for(i = 0; i < N; i++)
		{
			cin >> a[i];
			if(a[i] == 0)
			{
				cnt++;
				a[i] = 1;
			}
			sum = sum + a[i];
		}

		if(sum == 0)
		{
			cout << cnt + 1 << endl;
		}
		else
		{
			cout << cnt << endl;
		}
	}


	return 0;
}