#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,i;
	string str;
	vector <string> v;

	cout << "Plz enter the value of n : ";
	cin >> n;

	for(i = 0; i < n; i++)
	{
		cin >> str;
		v.push_back(str);
	}
	sort(v.begin(),v.end());

	return 0;
}