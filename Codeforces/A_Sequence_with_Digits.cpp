#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	cin >> T;
	while(T--)
	{
		long long A,K,i,sum,x,temp;
		cin >> A >> K;

		sum = A;
		for(i = 2; i <= K; i++)
		{
			x = sum;
			vector<long long> V;
			while(x!=0)
			{
				temp = x%10;
				x = x/10;
                V.push_back(temp);
			}
			sort(V.begin(),V.end());
			sum = sum + V[0]*V[V.size()-1];
		}
		cout << sum << endl;
	}

	return 0;
}
