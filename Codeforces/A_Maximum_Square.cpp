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
	int T,n,i,j,cnt;

	cin >> T;
	while(T--)
	{
		cin >> n;
		int a[n+1],result[1000],k = 0;


		for(i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		sort(a,a+n);

 
		for(i = 0; i < n; i++)
		{
			cnt = 0;
			for(j = 0; j < n; j++)
			{
				if(a[i] <= a[j])
				{
					cnt++;
				}
			}
			if(a[i] <= cnt)
			{
				result[k] = a[i];
				k++;
			}
			else
			{
			   result[k] = cnt;
			   k++;	
			}
		}

		sort(result,result+k);
		cout << result[k-1] << endl;
	}

	return 0;
}