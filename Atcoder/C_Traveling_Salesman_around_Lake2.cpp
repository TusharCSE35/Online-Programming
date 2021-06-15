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
 
 
int main(){
	ll K,N,i,j,k,sum;

	cin >> K >> N;
	ll A[N],B[N];

	for(i = 0; i < N; i++)
		cin >> A[i];
    
    k = 0;
    if(A[0]!=0 && A[N-1]!=0)
    	B[k] = abs(A[0]-A[N-1]); 
    else B[k] = 0;

    sum = B[k];
    for(i = 0; i < N-1; i++){
    	k++;
    	if(A[0]!=0 && A[N-1]!=0){
    	    B[k] = abs(A[0]-A[N-1]);
    	}
        else B[k] = 0;

        sum = sum + B[k];
    }

    for(i = 0,j=0; i <= k; i++){
    	if(A[i] != 0 && i == 0){
           B[j] = abs(sum - B[k]);
           j++;
    	}
    	else if(A[i] != 0){
    		B[j] = abs(sum - B[j-1]);
            j++;
    	}
    }

    
    for(i = 0; i < j; i++){
    	if(B[i] != 0){
    		cout << B[i] << endl;
    		break;
    	}
    }


    biday;
}
 
//...............BYE BYE................