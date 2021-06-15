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
 
#define MX 100000
vll graph[MX];
ll visit[MX];
ll dis[MX];

ll BFS(ll source)
{
	ll i,x,y;
	visit[source]=1;
	dis[source]=0;
	queue<ll>Q;
	Q.push(source);

	while(!Q.empty())
	{
		x=Q.front();
		Q.pop();

		for(i=0; i<graph[x].size(); i++)
		{
			y=graph[x][i];
			if(!visit[y])
			{
				visit[y]=1;
				dis[y]=dis[x]+1;
				Q.push(y);
			}
		}
	}
}

void Graph_Show(ll node)
{
	ll i,j;
	for(i=1; i<=node; i++)
	{
		cout << i << "--> ";
		for(j=0; j<graph[i].size(); j++)
		{
			cout << graph[i][j] << " ";
		}
		cout << endl;
	}
}
 
int main()
{
    cout << "Plz enter Test Case : ";
    T{
    	ll node,edge,i,a,b,source;
    	cout << "Enter Node & Edge : ";
    	cin >> node >> edge;

    	for(i=1; i<=edge; i++)
    	{
    		cin >> a >> b;
    		graph[a].pb(b);
    		graph[b].pb(a);
    	}
    	cout << "Graph Show : " << endl;
    	Graph_Show(node);

    	cout << "Enter the value of source : ";
    	cin >> source;

    	BFS(source);
    	for(i=1; i<=node; i++)
    		cout << source << " from " << i << " --> " << dis[i] << endl; 
    }
    

    biday;
}
 
//...............BYE BYE................