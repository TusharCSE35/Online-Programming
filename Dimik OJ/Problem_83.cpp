#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T,N,R;

	cin >> T;
	while(T--)
	{
		cin >> N;
		if(N%2 != 0)
		{
			cout << "Not a power of 2" << endl;
		}
		else
		{
			while(N%2 == 0)
			{
				N = N/2;
			}
		}
	}

    return 0;
}
