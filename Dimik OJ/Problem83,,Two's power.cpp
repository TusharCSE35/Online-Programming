#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T,N;

	cin >> T;

	while(T--)
	{
		cin >> N;

		if(N%2 == 0)
		{
			cout << "It's a power of 2" << endl;
		}
           
        else
        {
        	cout << "Not a power of 2" << endl;
        }   

	}

	return  0;
}