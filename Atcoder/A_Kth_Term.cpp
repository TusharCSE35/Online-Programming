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
 
inline int Int(){int x; cin >> x; return x;}
inline ll Long(){ll x; cin >> x; return x;}
inline float Float(){float x; cin >> x; return x;}
inline double Double(){double x; cin >> x; return x;}
inline void Yes(){cout << "Yes" << endl;}
inline void No(){cout << "No" << endl;}
inline void YES(){cout << "YES" << endl;}
inline void NO(){cout << "NO" << endl;}
 
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
 
 
int main(){

	int K;

	cin >> K;
	if(K== 1 || K==2 || K==3 ||K==5 ||K==7 ||K==11 ||K==13 ||K==15 ||K==17 ||K==19 ||K==23 ||K==29 ||K==31)
		cout << 1 << endl;
	else if(K==4 || K==6 || K==9 || K==10 || K==14 || K==21 || K==22 || K==25 || K==26)
		cout << 2 << endl;
	else if(K==12 || K==8 || K==18 || K==20 || K==27)
		cout << 5 << endl;
	else if(K==30 || K==28)
		cout << 4 << endl;
	else if(K==16)
		cout << 14 << endl;
	else if(K==24)
		cout << 15 << endl;
	else
		cout << 51 << endl;


    return 0 ;
}
 
//...............BYE BYE................