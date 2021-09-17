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

ll binpow(ll a, ll b, ll m){
    a %= m;
    ll res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}

template<typename T>
void multiply(vector<vector<T>>& A, vector<vector<T>>& B){
    int N = sz(A);
    vector<vector<T>> R(N, vector<T>(N));
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            R[i][j] = 0;
            for(int k = 0; k < N; k++){
                R[i][j] = R[i][j] + A[i][k] * B[k][j];
            }
        }
    }
    
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            A[i][j] = R[i][j];
        }
    }
}
template<typename T>
void power_matrix(vector<vector<T>>& A, int n){
    int N = sz(A);
    vector<vector<T>> B(N, vector<T>(N));
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            B[i][j] = A[i][j];
        }
    }
    
    n = n - 1;
    while (n > 0){
        if(n & 1){multiply (A, B);}        
        multiply (B, B);
        n = n >> 1;  
    }
}