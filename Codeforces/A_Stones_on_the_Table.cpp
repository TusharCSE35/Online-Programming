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
	int T,i,cnt = 0;
    string s;

    cin >> T >> s;

    for(i = 0; i < T; i++)
    {
    	if(s[i] == s[i+1])
        {
            cnt++;
        }
    }

    cout << cnt << endl;

	return 0;
}
