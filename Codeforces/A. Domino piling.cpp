/**
 *    +--+--+--++--++--In the name of ALLAH--++--++--+--+--+
 *
 *    author:  skmonir
 *    created: 29-Jul-2019 00:35:12
**/
 
#include <bits/stdc++.h>
 
using namespace std;
 
#define endl                '\n'
#define TN                  typename
#define mod                 1000000007LL
#define len(x)              (int) x.size()
#define all(x)              x.begin(), x.end()
#define rall(x)             x.rbegin(), x.rend()
#define mem(x, y)           memset(x, y, sizeof x)
#define FOR(x, l, r)        for (int x = l; x <= r; ++x)
#define ROF(x, l, r)        for (int x = l; x >= r; --x)
 
template <TN T> inline void Int(T &n) {
    n = 0; int f = 1; register int ch = getchar();
    for (; !isdigit(ch); ch = getchar()) if (ch == '-') f = -1;
    for (; isdigit(ch); ch = getchar()) n = (n << 3) + (n << 1) + ch - '0';
    n = n * f;
}
 
template <TN T> T gcd(T a, T b) {return !b ? a : gcd(b, a % b);}
template <TN T> inline void umin(T &a, T b) {a = a < b ? a : b;}
template <TN T> inline void umax(T &a, T b) {a = a > b ? a : b;}
template <TN T, TN W> inline void Int(T &x, W &y) {Int(x), Int(y);}
template <TN T, TN W, TN Q> void Int(T &x, W &y, Q &z) {Int(x, y), Int(z);}
 
const int N = 3e3 + 7;
const int inf = 1e9 + 7;
 
struct node {
    int from, via;
};
 
int par[N][N];
set <int> g[N], bad[N][N];
 
void print_ans(int via, int to) {
    vector <int> path = {to, via};
    while (par[to][via] > 0) {
        path.push_back(par[to][via]);
        to = via;
        via = path.back();
    }
 
    reverse(all(path));
 
    printf("%d\n", len(path) - 2);
    for (int i = 1; i < len(path); ++i) {
        printf("%d ", path[i]);
    }
    printf("\n");
}
 
int solve() {
    int n, m, k; Int(n, m, k);
    FOR (i, 1, m) {
        int u, v; Int(u, v);
        g[u].insert(v);
        g[v].insert(u);
    }
    FOR (i, 1, k) {
        int u, v, w; Int(u, v, w);
        bad[u][v].insert(w);
    }
 
    queue <node> q;
    q.push({1, 1});
 
    while (!q.empty()) {
        node u = q.front();
        q.pop();
        vector <int> discard;
        for (int to : g[u.via]) {
            if (!bad[u.from][u.via].count(to)) {
                discard.push_back(to);
                q.push({u.via, to});
                par[to][u.via] = u.from;
                if (to == n) {
                    print_ans(u.via, to);
                    exit(0);
                }
            }
        }
        for (int v : discard) {
            g[u.via].erase(v);
        }
    }
 
    printf("-1\n");
 
    return 0;
}
 
int main() {
    int tests = 1, CaseNo = 0; //Int(tests);
    while (tests--) {
        //printf("Case %d: ", ++CaseNo);
        solve();
    }
    return 0;
}