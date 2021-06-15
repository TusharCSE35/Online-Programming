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
   	    ll a,b,cnt=0;
   	    cin >> a >> b;

   	    if(a==b)cout << "0" << endl;
   	    else if(a<b)
   	    {
   	    	while(a!=b)
   	    	{
   	    		ll cn=0;
   	    		if(a*8<=b)
   	    		{
   	    			cn++;
                    cnt++;
   	    			a*=8;
   	    		}
   	    		else if(a*4<=b)
   	    		{
   	    			cn++;
   	    			a*=4;
   	    			cnt++;
   	    		}
   	    		else if(a*2<=b)
   	    		{
   	    		   cn++;
                   cnt++;
                   a*=2;
   	    		}	
   	    		if(cn==0)break;
   	    	}
   	    	if(a!=b)cout << "-1" << endl;
   	    	else cout << cnt << endl;
   	    }
   	    else
   	    { 
   	    	while(a!=b)
   	    	{
   	    		ll cn=0;
   	    		if(a/8>=b && a%8==0)
   	    		{
   	    			a/=8;
   	    		    cnt++;
   	    		    cn++;
   	    		}
   	    		else if(a/4>=b && a%4==0)
   	    		{
   	    			a/=4;
   	    		    cnt++;
   	    		    cn++;
   	    		}
   	    		else if(a/2>=b && a%2==0)
   	    		{
   	    			a/=2;
   	    		    cnt++;
   	    		    cn++;
   	    		}
   	    		if(cn==0)break;
   	    	}
   	    	if(a!=b)cout << "-1" << endl;
   	    	else cout << cnt << endl;
   	    }
   }
    

    biday;
}
 
//...............BYE BYE................