#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T,H,M,result;

	cin >> T;

	while(T--)
	{
		cin >> H >> M;
		result = (24-H)*60 - M;
		cout << result << endl;
	}

return 0;
}