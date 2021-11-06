#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+1;
vector<vector<int>> adj(N); 
vector<bool> vis(N);

void dfs(int v){
    vis[v] = true;
    for (int u : adj[v]) {
        if (!vis[u])
            dfs(u);
    }
}

int main(){
    return 0;
}