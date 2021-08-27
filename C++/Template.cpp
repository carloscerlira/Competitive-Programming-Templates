#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

#define FOR(i, a, b)                for (int i = (a); i < (b); i++)
#define rFOR(i, a, b)               for (int i = (a); i > (b); i--)
#define TR(v, arr)                  for (auto& v : arr)
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
#define LB(arr, x)                  lower_bound(all(arr), x)-(arr).begin()
#define UB(arr, x)                  upper_bound(all(arr), x)-(arr).begin()
#define sz(x)                       (int) x.size()
#define all(x)                      x.begin(), x.end() 
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

const ll MOD = 1e9 + 7;
const ll INF = 1e9;

template <typename T>
void _debug(pair<T, T>& pair){
    cout << "{" << pair.F << "," << pair.S << "}";  
}

template <typename T>
void _debug(vector<T>& vec){
    int n = sz(vec);
    cout << "[";
    FOR(i, 0, n-1){
        cout << vec[i] << " ";
    }
    cout << vec[n-1] << "]";
}

void _debug(vector<string>& vec){
    int n = sz(vec);
    cout << endl;
    FOR(i, 0, n){
        cout << vec[i] << endl;
    }
}

template <typename T>
void _debug(vector<pair<T, T>>& vec){
    int n = sz(vec);
    FOR(i, 0, n-1){
        _debug(vec[i]);
        cout << ", ";
    }
    _debug(vec[n-1]);
}

template <typename T>
void _debug(vector<vector<T>>& A){
    int n;
    n = sz(A);
    cout << endl;
    FOR(i, 0, n){
        _debug(A[i]);
        cout << endl;
    }
}

template <typename T>
void _debug(T& x){
    cout << x;
}

template <typename T>
void print(vector<T>& vec, int a=0, int b=-1){
    if(b==-1){b = sz(vec);}
    for (int i = a; i < b-1; i++) {
        cout << vec[i] << " ";
    }
    cout << vec[b-1] << endl;
    return; 
}

template <typename T>
void print(T& x){
    cout << x << endl;
    return;
}

void solve(){
    int n;
    si(n);
    vi nums(n);
    FOR(i, 0, n){
        si(nums[i]);
    }
    debug(nums);
    return;
}

int main()
{
    #ifdef ONLINE_JUDGE
        cin.sync_with_stdio(0);  
        cin.tie(0); 
        cin.exceptions(cin.failbit);
    #else
        string file = __FILE__;
        file = string(file.begin(), file.end()-3)+"txt";
        char cstr[file.size() + 1];
        strcpy(cstr, file.c_str()); 
        freopen(cstr, "r", stdin);
    #endif
    int t=1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}