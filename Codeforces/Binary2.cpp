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

	int T,N,x,i,j,cnt = 0,l_index,h_index,mid;

	cout << "Plz enter test case of T : ";
	cin >> T;

	while(T--)
	{
		cout << "Plz enter the value of N : ";
		cin >> N;

		int A[N];
		cout << "Elements of N : ";
		for(i = 0; i < N; i++)
		{
			cin >> A[i];
		}

		sort(A,A+N);
		cout << "Searching value of X : ";
		cin >> x;
        
        l_index = 0;
        h_index = N;
		while(l_index <= h_index)
		{
			mid = (l_index + h_index)/2;
			if(A[mid] == x)
			{
				cnt++;
                cout << "Yes,Found & This value : " << x << endl << endl;
                break;
			} 
			else if(A[mid] > x)
			{
				h_index = mid - 1;
			}		
			else
			{
				l_index = mid + 1;
			}
		}

		if(cnt == 0)
		{
			cout << "No Found" << endl << endl;
		}
	}


	return 0;
}