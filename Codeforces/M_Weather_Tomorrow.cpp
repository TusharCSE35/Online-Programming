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

const int N = (int) 1e5 + 5;



int main()
{
	int N,i,cnt=0;

	cin >> N;
	int A[N+1],sum[N];

	for(i = 0; i < N; i++)
	{
		cin >> A[i];
	}

	for(i = 1; i < N; i++)
	{
		sum[i-1] = A[i] - A[i-1];
	}

	for(i = 1; i < N-1; i++)
	{
		if(sum[i-1] != sum[i])
		{
			cnt++;
		}
	}
	if(cnt == 0)
	{
		cout << A[N-1] + sum[0] << endl; 
	}
	else
	{
		cout << A[N-1] << endl;
	}


	return 0;
}