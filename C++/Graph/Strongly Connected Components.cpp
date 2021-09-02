#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

#define endl                        '\n'
#define fastIO()                    cin.tie(0); cout.tie(0);
#define FO(i, b)                    for (int i = 0; i < (b); i++)
#define FOR(i, a, b)                for (int i = (a); i < (b); i++)
#define rFOR(i, a, b)               for (int i = (a); i > (b); i--)
#define TR(v, arr)                  for (auto& (v) : (arr))
#define debug(x)                    cout << #x << " = "; _debug(x); cout << endl;
#define si(x)	                    scanf("%d",&x)
#define sl(x)	                    scanf("%lld",&x)
#define ss(s)	                    scanf("%s",s)
#define pi(x)	                    printf("%d\n",x)
#define pl(x)	                    printf("%lld\n",x)
#define ps(s)	                    printf("%s\n",s)
#define pb                          push_back
#define mp                          make_pair
#define F                           first
#define S                           second
#define all(x)                      x.begin(), x.end() 
#define sz(x)                       (int) x.size()
#define LB(arr, x)                  lower_bound(all(arr), x)-(arr).begin()
#define UB(arr, x)                  upper_bound(all(arr), x)-(arr).begin()
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

const ll MOD = 1e9 + 7;
const ll INF = 1e9;

const int N = 1e5+1;
vector<vi> adj(N);
vector<bool> on_stack(N, false);
vi idx(N, -1);
vi low(N, -1);
deque<int> dq;
int components, cnt = 0;

void dfs(int u){
    dq.pb(u);
    on_stack[u] = true;
    idx[u] = low[u] = cnt;
    cnt += 1;

    TR(v, adj[u]){
        if(idx[v] == -1){dfs(v);}
        if(on_stack[v]){low[u] = min(low[u], low[v]);}
    }

    if(idx[u] == low[u]){
        while(!dq.empty()){
            int v = dq.back();
            dq.pop_back();
            on_stack[v] = false;
            low[v] = low[u];
            if(v == u){break;}
        }
        components += 1;
    }
}