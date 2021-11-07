#include <bits/stdc++.h>
using namespace std;

const long long MOD = 1e9 + 7;
const long long INF = 1e9;

const int N = 1e5+1;
vector<vector<pair<int, int>>> adj(N); 

void prim(int n, int s){
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> hp;
    hp.push({0, s});
    map<int, bool> vis;
    long long total = 0;
    int cnt = 0; 
    while (!hp.empty()){
        int c = hp.top().first, u = hp.top().second;
        hp.pop();
        if (vis[u] == true){continue;}
        vis[u] = true;
        cnt += 1;
        total += c;
        for(auto& v : adj[u]){
            if (vis[v.second] == true){continue;}
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