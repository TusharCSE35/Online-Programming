#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,i,k,x,sum = 0,s,temp,result;
	cin >> n;

	x = n;

	while(n != 0)
	{
		temp = n%10;
		n = n/10;
		sum = sum + temp;
	}

	if(sum%4 == 0)
	{
		cout  << x << endl;
	}

	else
	{
		x++;
		for(i = x ; ; i++)
		{
			k = i;
			s = 0;

			while(k != 0)
			{
			    temp = k%10;
			    k = k/10;
			    s = s + temp;
		    }

			if(s%4 == 0)
			{
				result = i;
				break;
			}
		}

		cout << result << endl;
	}


	return 0;
}