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
int A[10];



int main() {
	long long l,r,i,x,y;

	cin >> l >> r;
	/*for(i = l; i <= r; i++)
	{
		if(i%2 == 0)
		{
			A[0]++;
		}
		if(i%3 == 0)
		{
			A[1]++;
		}
		if(i%5 == 0)
		{
			A[2]++;
		}
		if(i%7 == 0)
		{
			A[3]++;
		}
	}

	x = A[0],y=0;

	for(i = 1; i < 4; i++)
	{
		if(x < A[i])
		{
			x = A[i];
			y = i;
		}
	}
	if(y == 0)
	{
		cout << 2 << endl;
	}
	else if(y == 1)
	{
		cout << 3 << endl;
	}
	else if(y == 5)
	{
		cout << 5 << endl;
	}
	else
	{
		cout << 7 << endl;
	}*/
	if(l == r)
	{
		cout << l << endl;
	}
	else
	{
        cout << 2 << endl;
	}


	return 0;
}