#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,a,b,t,x;
	scanf("%d",&t);
	for(i = 1; i <= t; i++)
	{
		scanf("%d %d",&a,&b);
		x = a + b;
		printf("Case %d: %d\n",i,x);
	}
	return 0;
} 
