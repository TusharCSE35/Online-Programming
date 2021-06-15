/*********************************************************************************\
*  _______  _      _  ______  _       _       _       _______               *
* |___   __|| |    | ||  ______|| |     | |     /  \     |  ___  |              *
*     | |    | |    | || |______ | |_____| |    / /\ \    | |____| |              *
*     | |    | |    | ||______  ||  ___  |   / /__\ \   |  __  __|              *
*     | |    | |____| | _____| || |     | |  / _____ \  | |  \ \                *
*     |_|    |________||________||_|     |_| /_/      \_\ |_|   \_\               *
*                                                                                 *
*   Department of Computer Science & Engineering                                  *
*   Student ID : 18CSE035                                                         *
*   Bangabnadhu Sheikh Mujibur Rahman Science & Technology University,Gopalgonj.  *
*                                                                                 *
\*********************************************************************************/

//Now Write to Code _________________________


#include <bits/stdc++.h>
using namespace std ;
 
 
typedef    long long             ll;
typedef    unsigned long long    ull;
typedef    vector<ll>            vl;
typedef    vector<int>           vi;
typedef    vector<char>          vc;
typedef    vector<string>        vs;
typedef    vector<int>::iterator vit;
typedef    set<int>              si;
typedef    set<string>           ss;
typedef    set<int>::iterator    sit;
typedef    map<int, int>         mii;
typedef    map<string, int>      msi;
typedef    map<int, string>      mis;
typedef    pair<ll, ll>          pll;
typedef    pair<int,int>         pii;
 
inline     int         Int()     {int x; cin >> x; return x;}
inline     ll          Long()    {ll x; cin >> x; return x;}
inline     float       Float()   {float x; cin >> x; return x;}
inline     double      Double()  {double x; cin >> x; return x;}
inline     void        Yes()     {cout << "Yes" << endl;}
inline     void        No()      {cout << "No" << endl;}
inline     void        YES()     {cout << "YES" << endl;}
inline     void        NO()      {cout << "NO" << endl;}
 
const      int N       =(int)2e5 + 5;
const      int maxN    =(int)1e6 + 6;
const      ll  Mod     =(ll)1e9 + 7;
const      int inf     =(int)2e9;
const      ll  Inf     =(ll)1e18;

#define    T           int t,q; cin >> t; for(q=1;q<=t;q++)
#define    Forn(i,n)   for(int i=0;i<n;i++)
#define    ForN(i,n)   for(int i=n-1;i>=0;i--)
#define    forn(i,n)   for(int i=1;i<=n;i++)
#define    forN(i,n)   for(int i=n;i>=1;i--)
#define    fors(i,s)   for(int i=0;i<s.size();i++)
#define    Sort(s)     sort(s.begin(),s.end())
#define    debug(x)    cerr << #x << " = " << x << '\n' ;
#define    rep(i,b,e)  for(__typeof(e) i=(b); i!=(e+1)-2*(b>e); i=i+1-2*(b>e))
#define    gcd(a,b)    __gcd(a , b)
#define    lcm(a,b)    (a*(b/__gcd(a,b)))
#define    all(a)      (a).begin(),(a).end()
#define    rall(a)     (a).rbegin(),(a).rend()
#define    gt          greater<int>()
#define    Int         Int()
#define    Long        Long()
#define    Float       Float()
#define    Double      Double()
#define    endl        '\n'
#define    sp          <<" "<<
#define    sz(x)       (int)x.size()
#define    f           first
#define    s           second
#define    pb          push_back
#define    eb          emplace_back
#define    mp          make_pair
#define    mem(a)      memset(a,0,sizeof a)
#define    memn(a)     memset(a,-1,sizeof a)
#define    biday       return 0 
#define    nl          endl
#define    fstp(n)     fixed<<setprecision(n)
#define    pi          acos(-1)
#define    PI          3.141592653589793238462643383279502884197169399375105820974944592307816406286208998628034825342

#define MX 10001
ll dis[MX];
vector<pll> graph[MX];

 
void fun(ll node)
{
  priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> q;
  q.push({0, node});
  dis[node] = 0;
  while (q.size())
  {
    ll di = q.top().first;
    ll nod = q.top().second;
    q.pop();
    if (di != dis[nod]) continue;
    for (auto p : graph[nod])
    {
      if (dis[nod] + p.second < dis[p.first])
      {
        dis[p.first] = dis[nod] + p.second;
        q.push({dis[p.first], p.first});
      }
    }
  }
}
 
int main()
{
    T{
        ll n,m,u,v,w,q,i,j;
        string s,s1,s2;
        cin >> n;
        for(i=0;i<n+2;i++) dis[i]=1e9;
        map<string,ll>mt;
        for(i=0;i<=n+3;i++)graph[i].clear();

        forn(u,n)
        {
            cin >> s;
            mt[s]=u;
            cin >> m;
            while(m--)
            {
                cin >> v >> w;
                graph[u].pb(mp(v,w));
                graph[v].pb(mp(u,w));
            }
        }

        cin >> q;
        while(q--)
        {
            ll source,disn;
            cin >> s1 >> s2;

            source=mt[s1];
            disn=mt[s2];
          
            fun(source);
            cout << dis[disn] << endl; 
        }
    }
    

    biday;
}
 
//...............BYE BYE...............