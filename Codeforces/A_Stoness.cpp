#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,n=3,a1,b,c,x,y,z,ans=0;
    int a[5];
    cin>>t;
    while(t--){
     for(i=0;i<n;i++)
     {
         cin>>a[i];
     }
    a1=a[0];
    b=a[1];
    c=a[2];
    x=c/2;
    if(x<=b)
    {
        y=x*2;
        z=x;
  ans=ans+y+z;
    }else
    {

        y=x*b;
        z=b;
        ans=ans+y+z;

    }
    x=b-x;
    if(x>=2)
    {
        x=x/2;
        if(x<=a1){
        y=x*2;

        z=x;
        }else
        {
            y=2*a1;
            z=a1;
        }

            ans=ans+y+z;
    }
     cout<<ans<<endl;
     ans=0;
    }
     return 0;
}
