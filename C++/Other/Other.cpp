#include <bits/stdc++.h>
using namespace std;

#define endl                        '\n'
#define fastIO()                    cin.tie(0); cout.tie(0);
#define FO(i, b)                    for (int i = 0; i < (b); i++)
#define FOR(i, a, b)                for (int i = (a); i < (b); i++)
#define rFOR(i, a, b)               for (int i = (a); i > (b); i--)
#define TR(v, arr)                  for (auto& (v) : (arr))
#define debug(x)                    cout << #x << " = "; _debug(x); cout << endl;
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

int get_gcd (int a, int b) {
    return b ? get_gcd (b, a % b) : a;
}

void gen_subsets(){
    int n;
    FOR(i, 1, pow(2, n)){
        vi s;
        FOR(j, 0, 20){
            if(i & 1 << j){
                s.pb(j);
            }
        }
    }
    return;
}

void gen_permutations(){
    vi vec;
    sort(all(vec));
    do{
        //something
    }while (next_permutation(all(vec)));
    return;
}

int main(){
}