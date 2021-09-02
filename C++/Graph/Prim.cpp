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
vector<vector<pii>> adj(N); 

void prim(int n, int s){
    priority_queue<pii, vector<pii>, greater<pii>> hp;
    hp.push({0, s});
    map<int, bool> vis;
    ll total = 0;
    int cnt = 0; 
    while (!hp.empty()){
        int c = hp.top().F, u = hp.top().S;
        hp.pop();
        if (vis[u] == true){continue;}
        vis[u] = true;
        cnt += 1;
        total += c;
        TR(v, adj[u]){
            if (vis[v.S] == true){continue;}
            hp.push(v);
        }
    }
    // if (cnt != n){print("IMPOSSIBLE"); return;}
    // print(total);
    return;
}

int main(){
    return 0;
}