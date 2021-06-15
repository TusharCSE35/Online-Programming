#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,x;
    char S[101],T[101];

    cin >> S;
    x = strlen(S);
    for(i = 0,j = x-1; j >= 0; i++,j--)
    {
        T[i] = S[j];
    }
    T[i] = '\0';

    int d = strcmp(T,S);
    if(d == 0)
    {
        cout << "0" << endl;
    }

    return 0;
}
