#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

#define FOR(i, a, b)                for (int i = (a); i < (b); i++)
#define rFOR(i, a, b)               for (int i = (a); i > (b); i--)
#define TR(v, arr)                  for (auto& (v) : (arr))
#define debug(x)                    cout << #x << " = "; _debug(x); cout << endl;
#define pb                          push_back
#define mp                          make_pair
#define F                           first
#define S                           second
#define LB(arr, x)                  lower_bound(all(arr), x)-(arr).begin()
#define UB(arr, x)                  upper_bound(all(arr), x)-(arr).begin()
#define sz(x)                       (int) x.size()
#define all(x)                      x.begin(), x.end() 
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pii;

const int N = 2e5+1;
int LOG = 20;
vector<vi> adj(N);
vector<vi> up(N, vi(LOG));
vi depth(N);
vi par(N);

void dfs(int u, int p){
    par[u] = p;
    TR(v, adj[u]){
        if(v == p){continue;}
        depth[v] = depth[u]+1;
        dfs(v, u);
    }
}

int get_lca(int a, int b){
    if (depth[a] < depth[b]){
        swap(a, b);
    }

    int k = depth[a]-depth[b];
    FOR(i, 0, LOG){
        if (k & (1 << i)){
            a = up[a][i];
        }
    }
    if (a == b){return a;}
    rFOR(j, LOG-1, -1){
        if(up[a][j] != up[b][j]){
            a = up[a][j];
            b = up[b][j];
        }
    }
    return up[a][0];
}

void solve(){
    par[1] = 1;
    depth[1] = 0;
    dfs(1,1);
    FOR(u, 1, N){
        up[u][0] = par[u];
    }
    FOR(j, 1, LOG){
        FOR(v, 1, N){
            up[v][j] = up[up[v][j-1]][j-1];
        }
    }
}
