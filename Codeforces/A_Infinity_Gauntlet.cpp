/*
        Name : Tushar Sarkar
        Dept. of Computer Science & Engineering
        Student ID : 18CSE035
        University : Bangabandhu Sheikh Mujibur Rahman Science & Technology University,Gopalgonj.
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long n,i,j;

	string str,Color[] = {"purple","green","blue","orange","red","yellow"};
	string Gem[] = {"Power","Time","Space","Soul","Reality","Mind"};

	cin >> n;

	for(i = 0; i < n; i++)
	{
		cin >> str;
		for(j = 0; j < 6; j++)
		{
			if(str == Color[j])
			{
				Color[j] = "0";
			}
		}
	}

	cout << 6-n << endl;
	for(i = 0; i < 6; i++)
	{
		if(Color[i] != "0")
		{
			cout << Gem[i] << endl;
		}
	}


return 0;
}        