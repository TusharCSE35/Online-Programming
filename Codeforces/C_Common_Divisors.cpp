#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int T,i,result,n,cnt=0,Final;

	cin >> T;
    long long int a[T];

	for(i = 0; i < T; i++)
	{
		cin >> a[i];
	}
	
	sort(a,a+T);
	result = a[0];

	for(i = 1; i < T; i++)
	{
		result = __gcd(result,a[i]);
	}
    
    n = sqrt(result);
    for(i = 1; i <= n; i++)
    {
    	if(result%i == 0)
    	{
    		cnt++;
    	}
    }

    if(n*n == result)
    {
    	Final = (2*cnt) - 1;
    }
    else
    {
    	Final = 2*cnt;
    }

    cout << Final << endl;

	return 0;
}