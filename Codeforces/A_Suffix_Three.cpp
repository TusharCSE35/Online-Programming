#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	char s[1001];

	cin >> T;
	while(T--)
	{
		cin >> s;
		int x = strlen(s);

		if(s[x-2]=='p' && s[x-1]=='o')
		{
			cout << "FILIPINO" << endl;
		}
		else if(((s[x-4]=='d' && s[x-3]=='e') || (s[x-4]=='m' && s[x-3]=='a')) && (s[x-2]=='s' && s[x-1]=='u'))
		{
			cout << "JAPANESE" << endl;
		}
		else if(s[x-5]=='m' && s[x-4]=='n' && s[x-3]=='i' && s[x-2]=='d'&&s[x-1]=='a')
		{
			cout << "KOREAN" << endl;
		}
	}

    return 0;
}