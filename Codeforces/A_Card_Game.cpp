#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T,n,k1,k2,i,j,k;

	cin >> T;
	for(i = 1; i <= T; i++)
	{
		cin >> n >> k1 >> k2;
		int a[k1],b[k2];

		for(j = 0; j < k1; j++)
		{
			cin >> a[j];
		}

		for(k = 0; k < k2; k++)
		{
			cin >> b[k];
		}

		sort(a,a+k1);
		sort(b,b+k2);

		int x = a[k1-1],y = b[k2-1];
		if(x > y)
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}

	return 0;
}