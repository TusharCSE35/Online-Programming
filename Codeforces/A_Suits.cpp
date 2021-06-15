#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a[5],b[5],e,f,x;

	for(int i = 0; i < 4; i++)
	{
		cin >> a[i];
		b[i]=a[i];
	}
	cin >> e >> f;

	sort(a,a+4);

	if(a[3] == b[3])
	{
		x = (a[3] - a[0])*e + (a[0])*f;
	}
    if(a[0] == b[3])
    {
    	x = a[0]*f;
    }

	cout << x << endl;

	return 0;
}