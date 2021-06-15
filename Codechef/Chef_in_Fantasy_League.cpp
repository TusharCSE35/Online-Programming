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
 
 
int main()
{
	T{
		int N,S,i,j,c1=0,c2=0,sum;
		cin >> N >> S;

		int p[N+5],q[N+5];
		for(i = 0; i < N; i++)
			cin >> p[i];
		for(i = 0; i < N; i++)
		{
			cin >> q[i];
			if(q[i]==0)c1++;
			else c2++;
		}
        
		if(c1<1 || c2<1)
			cout << "no" << endl;
		else
		{
			int c=1;
			for(i = 0; i < N-1; i++)
			{
				int cn=0;
				for(j = i+1; j < N; j++)
				{
					int ct=0;
					sum = S;
					if(q[i]!=q[j])
					{
						ct=1;
						sum = sum+p[i]+p[j];
					}
					if(sum <= 100 && ct==1)
					{
						cout << "yes" << endl;
						cn=1;
						break;
					}
				}
				if(cn)
				{
					c=0;
					break;
				}
			}
			if(c)cout << "no" << endl;
		}

	}
    

    biday;
}
 
//...............BYE BYE................