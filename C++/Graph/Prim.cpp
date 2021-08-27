#include <bits/stdc++.h>
using namespace std;
#define F                           first
#define S                           second
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pii;

template <typename T>
void print(T& x){
    cout << x << endl;
    return;
}

const int N = 1e5+1;
vector<vector<pii>> adj(N); 

void prim(int n, int s){
    priority_queue<pii, vector<pii>, greater<pii>> hp;
    hp.push({0, s});
    map<int, bool> vis;
    ll total = 0;
    int cnt = 0; 
    while (!hp.empty()){
        int c, u;
        c = hp.top().F; u = hp.top().S;
        hp.pop();
        if (vis[u] == true){continue;}
        vis[u] = true;
        cnt += 1;
        total += c;
        for(auto& v : adj[u]){
            if (vis[v.S] == true){continue;}
            hp.push(v);
        }
    }
    if (cnt != n){print("IMPOSSIBLE"); return;}
    print(total);
    return;
}

int main(){
    return 0;
}