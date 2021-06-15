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
	ll N,k,i,j,l,a,b,t,sum=0;
	cin >> N >> k;

	vll Alic,Bob,Both;
	for(i=0; i<N; i++)
	{
		cin >> t >> a >> b;
		if(a and b)Both.pb(t);
		else if(a)Alic.pb(t);
		else if(b)Bob.pb(t);
	}

	ll x,y,z;
	i=0,j=0,l=0;
	x = Alic.size();
	y = Bob.size();
	z = Both.size();
	sort(Alic.begin(),Alic.end());
	sort(Bob.begin(),Bob.end());
	sort(Both.begin(),Both.end());

	if(x+z<k or y+z<k){cout << -1 << endl;biday;}
	while(k--)
	{
		if(x>0 and y>0 and z>0 )
		{
			if(Alic[i]+Bob[j]>Both[l])
			{
				sum += Both[l];
				l++,z--;
			}
			else
			{
				sum += Alic[i]+Bob[j];
				i++,j++,x--,y--;
			}
		}
	    else if(z<=0 and y>0 and x>0)
		{
			sum += Alic[i]+Bob[j];
			i++,j++,x--,y--;
		}
		else if(x<=0 or y<=0 and z>0)
		{
			sum += Both[l];
			l++,z--;
		}
	}
	cout << sum << endl;
    


    biday;
}
 
//...............BYE BYE................