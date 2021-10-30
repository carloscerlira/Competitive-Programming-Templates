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

template<typename T>
struct SegmentTree{
    vector<T> t;
    
    SegmentTree(int n){
        t.assign(4*n, 0);
        return;
    }
 
    T f(T a, T b){
        return a+b;
    }
 
    void build(vector<T>& a, int v, int tl, int tr){
        if(tl == tr){t[v] = a[tl];} 
        else{
            int tm = tl+(tr-tl)/2;
            build(a, v*2, tl, tm);
            build(a, v*2+1, tm+1, tr);
            t[v] = f(t[v*2], t[v*2+1]);
        }
    }
 
    T query(int v, int tl, int tr, int l, int r) {
        if(l > r){return 0;}
        if(l == tl && r == tr){return t[v];}
        int tm = tl+(tr-tl)/2;
        return f(query(v*2, tl, tm, l, min(r, tm)), query(v*2+1, tm+1, tr, max(l, tm+1), r));
    }
 
    void update(int v, int tl, int tr, int pos, int new_val) {
        if (tl == tr){t[v] = new_val;} 
        else{
            int tm = tl+(tr-tl)/2;
            if (pos <= tm){
                update(v*2, tl, tm, pos, new_val);
            }
            else{
                update(v*2+1, tm+1, tr, pos, new_val);
            }
            t[v] = f(t[v*2], t[v*2+1]);
        }
    }
};

struct RangeUpdate {
    vll t;
    
    RangeUpdate(int n){
        t.assign(4*n, 0);
        return;
    }
 
    void build(vll& a, int v, int tl, int tr) {
        if (tl == tr) {
            t[v] = a[tl];
        } else {
            int tm = (tl + tr) / 2;
            build(a, v*2, tl, tm);
            build(a, v*2+1, tm+1, tr);
            t[v] = 0;
        }
    }

    void update(int v, int tl, int tr, int l, int r, ll add) {
        if (l > r)
            return;
        if (l == tl && r == tr) {
            t[v] += add;
        } else {
            int tm = (tl + tr) / 2;
            update(v*2, tl, tm, l, min(r, tm), add);
            update(v*2+1, tm+1, tr, max(l, tm+1), r, add);
        }
    }

    ll get(int v, int tl, int tr, int pos) {
        if (tl == tr)
            return t[v];
        int tm = (tl + tr) / 2;
        if (pos <= tm)
            return t[v] + get(v*2, tl, tm, pos);
        else
            return t[v] + get(v*2+1, tm+1, tr, pos);
    }
};
 
int main()
{
    return 0;
}