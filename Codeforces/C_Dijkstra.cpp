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
typedef    pair<int, int>         pii;

inline     int         Int()     {int x; cin >> x; return x;}
inline     ll          Long()    {ll x; cin >> x; return x;}
inline     float       Float()   {float x; cin >> x; return x;}
inline     double      Double()  {double x; cin >> x; return x;}
inline     void        Yes()     {cout << "Yes" << endl;}
inline     void        No()      {cout << "No" << endl;}
inline     void        YES()     {cout << "YES" << endl;}
inline     void        NO()      {cout << "NO" << endl;}

const      int N       = (int)2e5 + 5;
const      int maxN    = (int)1e6 + 6;
const      ll  Mod     = (ll)1e9 + 7;
const      int inf     = (int)2e9;
const      ll  Inf     = (ll)1e18;

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
#define    fstp(n)       fixed<<setprecision(n)
#define    pi          acos(-1)
#define    PI          3.141592653589793238462643383279502884197169399375105820974944592307816406286208998628034825342

#define MX 100005
vector<pll> graph[MX];
ll dis[MX], path[MX];

void Dijkstra(ll source)
{
    ll i, j, x, xl, y, z;
    for (i = 1; i <= MX; i++)dis[i] = Inf;
    priority_queue<pll, vector<pll>, greater<pll>> pq;

    dis[source] = 0;
    path[source] = source;
    pq.push(mp(dis[source], source));

    while (!pq.empty())
    {
        x = pq.top().s;
        xl = pq.top().f;
        pq.pop();
        if (xl != dis[x])continue;

        for (auto it : graph[x])
        {
            y = it.f;
            z = it.s;
            if (dis[x] + z < dis[y])
            {
                dis[y] = dis[x] + z;
                pq.push(mp(dis[y], y));
                path[y] = x;
            }
        }
    }
}

int main()
{
    ll n, m, i, u, v, w;
    cin >> n >> m;

    Forn(i, m)
    {
        cin >> u >> v >> w;
        graph[u].pb(mp(v, w));
        graph[v].pb(mp(u, w));
    }

    Dijkstra(1);
    cout << "Distance : " << endl;
    for (i = 1; i <= n; i++)cout << "Distance from 1 to " << i << " is : " << dis[i] << endl;

    if (dis[n] == Inf)cout << -1 << endl;
    else
    {
        vl res;
        cout << "Path : ";
        while (1)
        {
            res.pb(n);
            if (n == 1)break;
            n = path[n];
        }
        reverse(res.begin(), res.end());
        for (i = 0; i < res.size(); i++)cout << res[i] << " ";
        cout << endl;
    }

    biday;
}

//...............BYE BYE................