#include<bits/stdc++.h>
using namespace std;


int main()
{
	int T,i,N;

	cin >> T;
    while(T--)
    {
    	cin >> N;
    	
    	for(i = N; i >= 0; i--)
    	{   
           if(i > 1)
            {
                printf("2^%d + ",i);
            }
           else if(i == 1)
            {
                printf("2 + ");
            }
            else
            {
                printf("1\n");
            }
        }
    }

	return 0;
}