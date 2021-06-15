#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T,x,result;
	cin >> T;

	string s;

	for(int i = 1; i <= T; i++)
	{
		cin >> s;
		x=s.size();
        result = (x*(x+1))/2;
        cout << result << endl;
	}

return 0;
}