/*
        Name : Tushar Sarkar
        Dept. of Computer Science & Engineering
        Student ID : 18CSE035
        University : Bangabandhu Sheikh Mujibur Rahman Science & Technology University,Gopalgonj.
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,i,j,k,l;

	cin >> t;
	while(t--)
	{
		cin >> k;
		char s[k+1];
		int cnt = 0;

		for(i = 0; i < k; i++)
		{
			cin >> s[i];
		}

		
		while(1)
		{
			l = 0;
			for(j = 0; j < k; j++)
		    {
			    if(s[j] == 'A' && s[j+1] == 'P')
			    {
				   s[j+1] = 'A';
			       j++;
			       l++;
			    }
			}
			if(l > 0)
			{
				cnt++;
			}
			else
			{
				break;
			}
		}


		cout << cnt << endl;
	}


	return 0;
}