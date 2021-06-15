#include<bits/stdc++.h>
using namespace std;

int main()
{
    double N,result;

    cin >> N;
    result = (N/1.08);

    if (round(result) == ceil(result))
        cout<<ceil(result)<<endl;
    else
        cout << ":(" << endl;

    return 0;
}
