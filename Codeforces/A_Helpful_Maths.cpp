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
	int i,j,k,y,x;
	char s[101];

	cin >> s;

	x = strlen(s);
	y = x;
	x = x/2 + 1;
	char a[x];

	for(i = 0,j = 0; i < y; i++)
	{
		if(s[i] == '+')
		{
			continue;
		}
		else
		{
           a[j] = s[i];
           j++;
		}
	}
    
	sort(a,a+x);
	for(k = 1,i = 0; k <= y; k++)
	{
		if(k%2 == 0)
		{
			cout << "+";
		}
		else
		{
            cout << a[i];
            i++;
		}
	}

	cout << endl;

	return 0;
}