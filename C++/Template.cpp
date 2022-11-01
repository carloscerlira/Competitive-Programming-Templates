#include <bits/stdc++.h>
using namespace std;

#define endl                        '\n'
#define int                         long long
#define fastIO()                    cin.tie(0)->sync_with_stdio(0);
#define debug(x...)                 cout << #x << " = "; debug2(x); cout << endl;
#define fo(i, b)                    for (long long i = 0; i < (b); i++)
#define f0r(i, a, b)                for (long long i = (a); i < (b); i++)
#define rf0r(i, a, b)               for (long long i = (a); i > (b); i--)
#define tr(v, arr)                  for (auto& (v) : (arr))
#define pb                          push_back
#define mp                          make_pair
#define F                           first
#define S                           second
#define all(x)                      x.begin(), x.end() 
#define sz(x)                       (int) x.size()
#define lb(arr, x)                  lower_bound(all(arr), x)-(arr).begin()
#define ub(arr, x)                  upper_bound(all(arr), x)-(arr).begin()
typedef vector<int> vi;
typedef pair<int, int> pii;
// cout << fixed << setprecision(11);

const long long mod = 1e9+7;
const long long inf = 1e18; 

void setIO(){
    string file = __FILE__;
    file = string(file.begin(), file.end()-3);
    string in_file = file+"in";
    string out_file = file+"out";
    FILE *exist_in_file;
    exist_in_file = freopen(in_file.c_str(), "r", stdin);
    if(!exist_in_file){
        exist_in_file = freopen(in_file.c_str(), "w", stdout);
        fclose(exist_in_file);
    }
    freopen(in_file.c_str(), "r", stdin);
    freopen(out_file.c_str(), "w", stdout);
}

template <typename T>
void _debug(T& x){
    cout << x;
}

template <typename T1, typename T2>
void _debug(pair<T1, T2>& pair){
    cout << "{"; _debug(pair.F); cout << ","; _debug(pair.S); cout << "}";  
}

template <typename T>
void _debug(vector<T>& vec){
    int n = sz(vec);
    if(n == 0){cout << "[ ]"; return;}
    cout << "[";
    fo(i, n-1){_debug(vec[i]); cout << " ";}
    _debug(vec[n-1]); cout << "]";
}

void _debug(vector<string>& vec){
    cout << endl;
    fo(i, sz(vec)) cout << vec[i] << endl;
}

template <typename T>
void _debug(vector<vector<T>>& A){
    cout << endl;
    fo(i, sz(A)){_debug(A[i]); cout << endl;}
}

void debug2() {}

template <typename T, typename... V>
void debug2(T t, V... v) {_debug(t); if (sizeof...(v)) cout << ", "; debug2(v...);}

template <typename T>
void print(T& x){
    cout << x << endl;
    return;
}
template <typename T>
void print(vector<T>& vec, int a=0, int b=-1){
    if(b == -1) b = sz(vec);
    if(b == 0) return;
    f0r(i, a, b-1) cout << vec[i] << " ";
    cout << vec[b-1] << endl;
    return; 
}

void print(vector<string>& vec){
    fo(i, sz(vec)-1) cout << vec[i] << endl;
    cout << vec[sz(vec)-1] << " ";
}

template <typename T>
void print(vector<vector<T>>& A){
    fo(i, sz(A)) print(A[i]);
}

const int N = 1e5;

void solve(){
    int n; cin >> n;
    vi a(n);
    fo(i, n) cin >> a[i];
    return;
}

signed main()
{
    fastIO();
    if(getenv("USER")) setIO();
    int T; cin >> T;
    fo(tc, T){
        // cout << "Case #" << tc+1 << ":";
        solve();
    }	
    return 0;
}
