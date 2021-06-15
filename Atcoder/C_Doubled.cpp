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
 
 
int main()
{
	ll n,temp,cnt,i,sum,s1,s2;
	vll v;
	cin >> n;

	while(n)
	{
		v.pb(n%10);
		n/=10;
	}
	reverse(v.begin(),v.end());
	if(v.size()%2)
	{
		if(v.size()==1)cout << 0 << endl;
		else
		{
            for(i=0; i<v.size()/2; i++)cout << 9;
		    cout << endl;
		}
	}
	else
	{
		s1=0,sum=0,s2;
		for(i=0; i<v.size(); i++)s1=s1*10+v[i];
        for(i=0; i<v.size()/2; i++)sum=sum*10+v[i];
        s2=sum;
        for(i=0; i<v.size()/2; i++)sum=sum*10+v[i];
        if(s1>=sum)cout << s2 << endl;
        else cout << s2-1 << endl;
	}	
    

    biday;
}
 
//...............BYE BYE................