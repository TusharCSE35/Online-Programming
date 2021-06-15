/*********************************************************************************\
*  _________  _      _  ________  _       _       __       ________               *
* |___   ___|| |    | ||  ______|| |     | |     /  \     |  ____  |              *
*     | |    | |    | || |______ | |_____| |    / /\ \    | |____| |              *
*     | |    | |    | ||______  ||  _____  |   / /__\ \   |  __  __|              *
*     | |    | |____| | ______| || |     | |  / ______ \  | |  \ \                *
*     |_|    |________||________||_|     |_| /_/      \_\ |_|   \_\               *
*                                                                                 *
*   Department of Computer Science & Engineering                                  *
*   Student ID : 18CSE035                                                         *
*   Bangabnadhu Sheikh Mujibur Rahman Science & Technology University,Gopalgonj.  *
*                                                                                 *
\*********************************************************************************/

//Now Write to Code ___________________________


#include <bits/stdc++.h>
using namespace std ;
 
 
typedef    long long             ll;
typedef    long double           ld;
typedef    unsigned long long    ull;
typedef    pair<int,int>         pii;
typedef    pair<ll,ll>           pll;
typedef    vector<int>           vi;
typedef    vector<ll>            vll;
typedef    vector<vector<int>>   vvi;
 
inline     int         Int(){int x; cin >> x; return x;}
inline     ll          Long(){ll x; cin >> x; return x;}
inline     float       Float(){float x; cin >> x; return x;}
inline     double      Double(){double x; cin >> x; return x;}
inline     void        Yes(){cout << "Yes" << endl;}
inline     void        No(){cout << "No" << endl;}
inline     void        YES(){cout << "YES" << endl;}
inline     void        NO(){cout << "NO" << endl;}
 
const      int N       =(int)2e5 + 5;
const      int maxN    =(int)1e6 + 6;
const      ll  Mod     =(ll)1e9 + 7;
const      int inf     =(int)2e9;
const      ll  Inf     =(ll)1e18;

#define    fastio      ios_base::sync_with_stdio(false),cin.tie(NULL)
#define    T           int t,q; cin >> t; for(q=1;q<=t;q++)
#define    Forn(i,n)   for(int i=0;i<n;i++)
#define    ForN(i,n)   int i;for(i=n-1;n>=0;i--)
#define    forn(i,n)   for(int i=1;i<=n;i++)
#define    forN(i,n)   int i;for(i=n;n>=1;i--)
#define    fors(i,s)   for(int i=0;i<s.size();i++)
#define    Sort(s)     sort(s.begin(),s.end())
#define    debug(x)    cerr << #x << " = " << x << '\n' ;
#define    rep(i,b,e)  for(__typeof(e) i=(b); i!=(e+1)-2*(b>e); i=i+1-2*(b>e))
#define    gcd(a,b)    __gcd(a , b)
#define    lcm(a,b)    (a*(b/__gcd(a,b)))
#define    gt          greater<int>()
#define    Int         Int()
#define    Long        Long()
#define    Float       Float()
#define    Double      Double()
#define    all(x)      x.begin() , x.end()
#define    sz(x)       (int)x.size()
#define    ff          first
#define    ss          second
#define    pb          push_back
#define    eb          emplace_back
#define    mp          make_pair
#define    mem(a)      memset(a,0,sizeof a)
#define    memn(a)     memset(a,-1,sizeof a)
#define    biday       return 0 
#define    nl          endl
#define    sp(n)       fixed<<setprecision(n)
#define    pi          acos(-1)
#define    PI          3.141592653589793238462643383279502884197169399375105820974944592307816406286208998628034825342

vll v; 
int solve(ll n)
{
	ll i;
	if(n==1)return 0;
	else if(n==2)return 1;
	else
	{
		for(i=2; i<=sqrt(n); i++)
		{
			if(n%i==0)return 0;
		}
	}
	return 1;
}
int prime(ll n)
{
	ll i,j,c;
	for(i=1; i<=n; i++)
    {
		if(i==1)continue;
		else if(i==2)v.pb(i);
        else
        {
        	c=1;
        	for(j=2; j<=sqrt(i); j++)
        	{
        		if(i%j==0)
        		{
        			c=0;
        			break;
        		}
        	}
        	if(c)v.pb(i);
        }
	}
}

int main()
{
    fastio;
    T{
    	ll n,i;
    	cin >> n;
        if(solve(n))cout << "Yes," << n << " is a prime number." << endl;
        else cout << "No," << n << " is not a prime number." << endl;
        prime(n);
    	cout << v.size() << endl;
    	for(i=0; i<v.size(); i++)cout << v[i] <<" ";
    	v.clear();	
    	cout << endl;		
    }
    

    biday;
}
 
//...............BYE BYE................