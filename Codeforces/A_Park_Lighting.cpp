#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long T;
	cin >> T;
	while(T--)
	{
		long long N,M;
		cin >> N >> M;

		if((N*M)%2==0)cout << (N*M)/2 << endl;
		else cout << ((N*M)/2)+1 << endl;
	}

	return 0;
}