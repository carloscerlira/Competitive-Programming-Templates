#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

#define FOR(i, a, b)                for (int i = (a); i < (b); i++)
#define rFOR(i, a, b)               for (int i = (a); i > (b); i--)
#define debug(x)                    cerr << #x << " = "; _debug(x); cerr << endl;
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

const ll MOD = 1e9 + 7;
const ll INF = 1e9;
vector<pii> dirs = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

template <typename T>
void _debug(vector<T>& vec){
    int n = sz(vec);
    cerr << "[";
    FOR(i, 0, n-1){
        cerr << vec[i] << " ";
    }
    cerr << vec[n-1] << "]";
}

void _debug(vector<string>& vec){
    int n = sz(vec);
    cerr << endl;
    FOR(i, 0, n){
        cerr << vec[i] << endl;
    }
}

template <typename T>
void _debug(vector<vector<T>>& A){
    int n, m;
    n = sz(A); m = sz(A[0]);
    cerr << endl;
    FOR(i, 0, n){
        _debug(A[i]);
        cerr << endl;
    }
}

template <typename T>
void _debug(T& x){
    cerr << x;
}

void _debug(pii& pair){
    cerr << pair.F << "," << pair.S; 
}

template <typename T>
void print(vector<T>& arr, int a=0, int b=-1){
    if(b==-1){b = sz(arr);}
    for (int i = a; i < b-1; i++) {
        cout << arr[i] << " ";
    }
    cout << arr[b-1] << endl;
    return; 
}

template <typename T>
void print(T& x){
    cout << x << endl;
    return;
}

void solve(){
    int n;
    cin >> n;
    vi nums(n);
    FOR(i, 0, n){
        cin >> nums[i];
    }
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