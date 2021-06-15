#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int T,i,p,q,c,multi,result;

	cin >> T;
	while(T--)
	{
		multi = 1;

		cin >> p >> q >> c;
		for(i = 1; i <= q; i++)
		{
			multi = multi*p;
		}

		result = multi % c;
        cout << "Result = " << result << endl;
	}

	return 0;
}