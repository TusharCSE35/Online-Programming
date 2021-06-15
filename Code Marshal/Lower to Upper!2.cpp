#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j;
    char a[101];

    cin >> n;
    for(i = 1; i < n; i++)
    {
        gets(a);
        for(j = 0; j < strlen(a); j++)
        {
            if(a[j] >= 97 && a[j] <= 123)
            {
                a[j] = a[j] - 32;
            }
        }
        cout << "Case " << i << ": " << a << endl;
    }

    return 0;
}
