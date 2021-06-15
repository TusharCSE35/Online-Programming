#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

int main()
{
    int T,i,j,x;
    char s[100];

    cin >> T;
    for(i = 1; i <= T; i++)
    {
        scanf("%[^\n]*c",&s);
        x = strlen(s);

        for(j = 0 ; j < x; j++)
        {
            if(s[j] >= 97 && s[j] <= 123)
            {
                s[j] = s[j] - 32;
            }
        }

        cout << "Case " << i << ": " << s << endl;
    }

    return 0;
}
