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
	int i,x,h=0,e=0,l=0,o=0;
	char s[101];
 
	cin >> s;
	x = strlen(s);
 
	for(i = 0; i < x; i++)
	{
		if(s[i]=='h')
		{
			h++;
			if(h > 1)
			{
				continue;
			}
			e=0;
			l=0;
			o=0;
		}
		if(s[i]=='e')
		{
			e++;
			if(e > 1)
			{
				continue;
			}
			l=0;
			o=0;
		}
		if(s[i]=='l')
		{
			l++;
			if(l > 2)
			{
				continue;
			}
			o=0;
		}
		if(s[i]=='o')
		{
			o++;
		}
	}
 
	if(h>=1 && e>=1 && l>=2 && o >= 1)
	{
		cout << "YES" << endl;
	}
	else
	{
		cout << "NO" << endl;
	}
 
 
	return 0;
}