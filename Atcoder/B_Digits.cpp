#include<bits/stdc++.h>
using namespace std;

int main()
{
	int N,K,cnt = 0;

	cin >> N >> K;
	while(N != 0)
	{
       N = N/K;
       cnt++;
	}

    cout << cnt << endl;

	return 0;
}