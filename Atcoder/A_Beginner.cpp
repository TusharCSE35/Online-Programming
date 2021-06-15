#include<bits/stdc++.h>
using namespace std;

int main()
{
	int N,R,result;

	cin >> N >> R;
	if(N <= 10)
	{
		result = R + 100*(10-N);
		cout << result << endl;
	}
	else
	{
		cout << R << endl;
	}

	return 0;
}