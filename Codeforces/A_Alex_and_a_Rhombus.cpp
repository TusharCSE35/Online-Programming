#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,i,sum = 0;

	cin >> n;

	if(n==1)
	{
		cout << n << endl;
	}
	else
	{
		for(i = n; i >= 1; i--)
		{
			if(i == n)
			{
				sum = sum + ((i*2)-1);
			}
			else
			{
				sum = sum + 2*((i*2)-1);
			}

		}

		cout << sum << endl;
	}

	return 0;
}