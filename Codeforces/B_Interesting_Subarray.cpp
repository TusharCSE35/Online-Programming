#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T,n,i;

	cin >> T;
	while(T--)
	{
		cin >> n;
		int a[n];

		for(i = 0; i < n; i++)
		{
			cin >> a[i];
		}

		sort(a,a+n);
		int x = a[n-1]-a[0];

		if(x < n)
		{
			cout << "NO" << endl;
		}
		else
		{
			cout << "YES" << endl << a[0] << " " << n << endl;
		}
    }

    return 0;
}