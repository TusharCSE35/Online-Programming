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
	int N,i,cnt=0,r=0,b=0,result,x,y;

	cin >> N;
	int R[N+1],B[N+1];

	for(i = 0; i < N; i++)
	{
		cin >> R[i];
	}

    for(i = 0; i < N; i++)
	{
		cin >> B[i];
	}

	for(i = 0; i < N; i++)
	{
		if(R[i] == B[i])
		{
			cnt++;
		}
		else if(R[i] == 1 && B[i] == 0)
		{
			r++;
		}
		else
		{
			b++;
		}
	}
     
    cout << r << " " << b << endl;

	if(cnt == N)
	{
		cout << "-1" << endl;
	}
	else if(r > b)
	{
		cout << "1" << endl;
	}
	else
	{
        x = (b-r)+1;
        cout << x << endl;
        y = x;
        if(x%b == 0)
        {
        	result = y/b;
        	cout << " result1 = " << result << endl;
        } 
        else
        {
        	result = (y/b) + 1;
        	cout << result << endl;
        } 

        cout << result+1 << endl;
	}



	return 0;
}