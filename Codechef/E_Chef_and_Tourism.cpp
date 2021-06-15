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

#define mx 1001
vector<int>graph[mx];

void BFS(int source,int visit[],int dis[])
{
	ll i,nd,next;
	queue<int>Q;

	visit[source] = 1;
	dis[source] = 0;
	Q.push(source);

	while(!Q.empty())
	{
		nd = Q.front();
		Q.pop();

		for(i = 0; i < graph[nd].size(); i++)
		{
			next = graph[nd][i];
			if(visit[next] == 0)
			{
				visit[next] = 1;
				dis[next] = dis[nd] + 1;
				Q.push(next);
			}
		}
	}
}

int main()
{
	int node,k,i,j,u,v,res=0;
	cin >> node >> k;

	for(i = 1; i < node; i++)
	{
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
	}

    for(i=1; i<=node; i++)
    {
    	int visit[node+1]={0};
    	int dis[node+1]={0};
	    BFS(i,visit,dis);
	    sort(dis+1,dis+node+1);
	    int cnt=dis[node];
	    res=max(res,cnt);
	}
	if(res<=k)cout << 0 << endl;
	else cout << res-k << endl;


    biday;
}
 
//...............BYE BYE................