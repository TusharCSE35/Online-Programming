/*
        Name : Tushar Sarkar
        Dept. of Computer Science & Engineering
        Student ID : 18CSE035
        University : Bangabandhu Sheikh Mujibur Rahman Science & Technology University,Gopalgonj.
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,m,i,q,y,x;

	cin >> n >> m;
	string s[n],t[m];

	for(i = 0; i < n; i++)
	{
		cin >> s[i];
	}

	for(i = 0; i < m; i++)
	{
		cin >> t[i];
	}

    cin >> q;
    while(q--)
    {
    	cin >> y;
    	x = y-1;

    	cout << s[x%n]+t[y%m] << endl;
    }

	return 0;
}