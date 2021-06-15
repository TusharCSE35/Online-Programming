#include<bits/stdc++.h>
using namespace std;

int main()
{

    vector< tuple<int, int, int> > myVec;
    int n,i,a,b,c;
    cin >> n; 
    for(i=0; i<n; i++)
    {
    	cin >> a>>b>>c;
        myVec.push_back(make_tuple(c, b, a));
        
    }

    sort(myVec.begin(), myVec.end());

    for (auto i : myVec){
        cout << get<2>(i) << "/" << get<1>(i) << "/" << get<0>(i) << '\n';
    }

    return 0;
}