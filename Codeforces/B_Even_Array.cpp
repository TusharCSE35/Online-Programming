//      Author : Snow Maiden
//Now Write to Code ___________________________


#include <bits/stdc++.h>
using namespace std ;
 
 
typedef long long                ll;
typedef long double              ld;
typedef unsigned long long       ull;
typedef pair <int,int>           pii;
typedef pair <ll,ll>             pll;
typedef vector <int>             vi;
typedef vector <ll>              vll;
typedef vector <vector <int> >   vvi;
 
inline int    Int(){int x; cin >> x; return x;}
inline ll     Long(){ll x; cin >> x; return x;}
inline float  Float(){float x; cin >> x; return x;}
inline double Double(){double x; cin >> x; return x;}
inline void   Yes(){cout << "Yes" << endl;}
inline void   No(){cout << "No" << endl;}
inline void   YES(){cout << "YES" << endl;}
inline void   NO(){cout << "NO" << endl;}
 
const int N             =(int)2e5 + 5;
const int maxN          =(int)1e6 + 6;
const ll  Mod           =(ll)1e9 + 7;
const int inf           =(int)2e9;
const ll  Inf           =(ll)1e18;
 
#define     T           int t,q; cin >> t; for(q=1;q<=t;q++)
#define     debug(x)    cerr << #x << " = " << x << '\n' ;
#define     rep(i,b,e)  for(__typeof(e) i=(b); i!=(e+1)-2*(b > e); i =i+1-2*(b > e))
#define     Int         Int()
#define     Long        Long()
#define     Float       Float()
#define     Double      Double()
#define     all(x)      x.begin() , x.end()
#define     sz(x)       (int)x.size()
#define     ff          first
#define     ss          second
#define     pb          push_back
#define     eb          emplace_back
#define     mem(a)      memset(a , 0 ,sizeof a)
#define     memn(a)     memset(a , -1 ,sizeof a)
#define     biday       return 0 
#define     PI          3.141592653589793238462643383279502884197169399375105820974944592307816406286208998628034825342
 
 
int main()
{
   T{    
   	    ll d,i,X[100],m,n,ans=0,even=0,odd=0;
		cin >> d;
 
		for(i=0; i<d; i++)
		{
			cin >> X[i];
			if(X[i]%2==0)even++;
			else odd++;
		}
 
		if(d%2==0)m=d/2,n=d/2;
		else m=(d/2)+1,n=d/2;
 
		if(even!=m || odd!=n)cout << "-1" << endl;
		else
		{
			for(i=0; i<d; i+=2)if(X[i]%2!=0)ans++;
			cout << ans << endl;	
		}
   }
    

    biday;
}
 
//...............BYE BYE................