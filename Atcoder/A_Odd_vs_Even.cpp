#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i;
    vector<int>v;
    cin >> n;

    int a[n];
    for(i=0; i<n; i++)cin >> a[i];

    for(i=0; i<n; i++)
    {
        if(i==0 && a[i]>a[i+1])v.push_back(i);
        if(i==n-1 && a[i]>a[i-1])v.push_back(i);
        else if(a[i]>a[i+1] && a[i]>a[i-1])v.push_back(i);
    }
    cout << "[";
    if(v.size())
    {
    	for(i=0; i<v.size()-1; i++)cout << v[i] << ", ";
        cout << v[v.size()-1];
    }
    cout << "]" << endl;
    

    return 0;
}