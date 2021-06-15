#include<bits/stdc++.h>
using namespace std;

double fact(double n)
{
	int k,output=1;
	for(k = 1; k <= n; k++)
	{
      output = output * k; 
   	}

   	return output;
};

int main()
{
	double T,i,j,N,result;

	cin >> T;

	for(i = 1; i <= T; i++)
	{
		cin >> N;
		result = 0;

		for(j = 1; j <= N; j++)
		{
           result = result + j/fact(j);
		}

		cout << result << endl;
	}

	return 0;
}
