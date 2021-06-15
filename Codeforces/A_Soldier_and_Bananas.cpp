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
	int k,n,w,i,result,sum = 0;

	cin >> k >> n >> w;

	for(i = 1; i <= w; i++)
	{
		sum = sum + (k*i);
	}
    
    if(n > sum)
    {
    	cout << "0" << endl;
    }
    	
    else
    {
    	result = sum - n;
        cout << result << endl;
    }


	return 0;
}